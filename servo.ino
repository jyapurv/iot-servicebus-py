//Universidad de San Martin de Porres
#include <Servo.h>

Servo myservo;  

int pos = 0;

void setup() {
  Serial.begin(115200);
  myservo.attach(9);
}

void loop() {
  if(Serial.available() > 0)
  {
    char data = Serial.read();
    char str[2];
    str[0] = data;
    str[1] = '\0';
    Serial.print(str);
    switch(str[0])
    {
      case 'a':
        myservo.write(90);
        delay(20);
        break;
      case 'i':
        myservo.write(0);
        delay(20);
        break;
      break;
      case 'd':
        myservo.write(180);
        delay(20);
        break;
      break;
    }
  }
}
