// C++ code
//
#include <Servo.h>

int sensor_value = 0;

int output_value = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9, 500, 2500);

}

void loop()
{
  sensor_value = analogRead(A0);
  output_value = map(sensor_value, 0, 1023, 0, 90);
  servo_9.write(output_value);
  delay(10); // Delay a little bit to improve simulation performance
}