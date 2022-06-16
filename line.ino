#define Leftmotorforward
#define Rightmotorforward
#define Leftmotorreverse
#define Rightmotorreverse
#define LS
#define RS




void setup()

{

  pinMode(Leftmotorforward, OUTPUT);

  pinMode(Rightmotorforward, OUTPUT);

  pinMode(Leftmotorreverse, OUTPUT);

  pinMode(Rightmotorreverse, OUTPUT);

  pinMode(SR, INPUT);

  pinMode(SL, INPUT);

}


void loop()

{

  if (digitalRead(SR) == HIGH && digitalRead(SL) == HIGH)

  {
    digitalWrite(Rightmotorforward , LOW);

    digitalWrite(Leftmotorforward , LOW);

  }
  else if (digitalRead(SR) == LOW && digitalRead(SL) == HIGH)
  {
    digitalWrite(Rightmotorforward , LOW);

    digitalWrite(Leftmotorforward , HIGH);
  }
  else if (digitalRead(SR) == HIGH && digitalRead(SL) == LOW) {
    digitalWrite(Rightmotorforward , HIGH);

    digitalWrite(Leftmotorforward , LOW);
  }
  else(digitalRead(SR) == LOW && digitalRead(SL) == LOW) {
    digitalWrite(Rightmotorforward , HIGH);

    digitalWrite(Leftmotorforward , HIGH);
  }
