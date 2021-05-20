#include <Servo.h>
#include <LiquidCrystal.h>
Servo servoVer; //Vertical Servo
Servo servoHor; //Horizontal Servo
int servoYValue = 0;
int x;
int y;
int prevX;
int prevY;
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(115200);
  Serial.setTimeout(1);
  servoVer.attach(5); //Attach Vertical Servo to Pin 5
  servoHor.attach(6); //Attach Horizontal Servo to Pin 6
  servoVer.write(servoYValue);
  servoHor.write(90); //This is currently confgiured for a continuous rotation servo.
}
void Pos()
{

  if (x < 190) {
    //move right
    servoHor.write(100);
    delay(300); // This delay is how long the servo will move before stopping. The delay is higher because the coords of the face are further away and should move further.
    servoHor.write(90);
  }
  if (x < 230 && x > 190) {
    servoHor.write(100);
    delay(100);
    servoHor.write(90);
  } if (x > 270 && x < 290 ) { //move left
    servoHor.write(85);
    delay(100);
    servoHor.write(90);

  } if (x > 290) {
    //far away, faster wider movements.
    servoHor.write(85);
    delay(300);
    servoHor.write(90);

  }
  if (y < 180) { //move up
    if (servoYValue < 180) {
      servoYValue++;
      servoVer.write(servoYValue);
    }

  } if (y > 220) { //move down
    if (servoYValue > 0) {
      servoYValue--;
      servoVer.write(servoYValue);
    }
  }
}




void loop()
{
  if (Serial.available() > 0)
  {
    if (Serial.read() == 'X')
    {
      x = Serial.parseInt();
      if (Serial.read() == 'Y')
      {
        y = Serial.parseInt();
        Pos();
      }
    }
    while (Serial.available() > 0)
    {
      Serial.read();
    }
  }
}
