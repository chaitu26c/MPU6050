# MPU6050
This project demonstrates the implementation of a gyroscope sensor interface using the MPU6050 sensor module and an ESP8266-based microcontroller (Wemos D1 R2)and arduino uno  r3 too. 

The code is designed to:

.Initialize the MPU6050 sensor using the Adafruit_MPU6050 library.
.Configure the I2C communication on custom pins (GPIO4, GPIO5).
.Set the gyroscope range to ±2000 degrees per second.
.Continuously read gyroscope data (X, Y, Z axis) and transmit it to the serial monitor.
.Provide a basic example of obtaining real-time angular velocity data for further motion-sensing applications.
This implementation can be extended to motion detection, orientation estimation, or balance control systems for embedded applications.
