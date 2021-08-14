#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
 myservo.attach(9);
 Serial.begin(9600);
}




String data_rx;
void loop() {
  // put your main code here, to run repeatedly:
 if (Serial.available() > 0) {
    char inChar = (char)Serial.read();
    if (isDigit(inChar))
      {
        data_rx += (char)inChar;
      }

    if (inChar == '\n')
      {
        int goc = data_rx.toInt();
        myservo.write(goc);
        data_rx="";
      }
 }
}
