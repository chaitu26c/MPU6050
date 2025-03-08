#include <Wire.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>

Adafruit_MPU6050 mpu6050;

void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.println("MPU6050 Connection Test");
  Wire.begin(4, 5);
  if (!mpu6050.begin()) {
    Serial.println("Could not find a valid MPU6050 sensor, check wiring!");
    while (1);
  }
  mpu6050.setGyroRange(MPU6050_RANGE_2000_DEG);
}

void loop() {
  sensors_event_t g;
  mpu6050.getGyroSensor()->getEvent(&g);

  Serial.print("Gyro X: ");
  Serial.print(g.gyro.x);
  Serial.print(" Gyro Y: ");
  Serial.print(g.gyro.y);
  Serial.print(" Gyro Z: ");
  Serial.println(g.gyro.z);

  delay(100);
}
