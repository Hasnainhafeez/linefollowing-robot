#define right IR 7
#define leftIR
#define RightMotorForward
#define LeftMotorForward
#define RightMototReverse
#define LeftMotorReverse
void setup() {
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(RightMotorForward, OUTPUT);
  pinMode(LeftMotorReverse, OUTPUT);
  pinMode(RightMototReverse, OUTPUT);
  pinMode(leftIR, INPUT);
  pinMode(rightIR, INPUT);

  void loop() {
    if (analogRead(leftIR) < 500 && analogRead(RightIR) < 500) {
      analogWrite(leftMotorForward, 130);
      analogWrite(rightMotorForward,LOW);
    }
    else if(analogRead(leftIR)>=500  && analogRead(rightIR)>=500){
      analogWrite(leftMotorForward,LOW);
      analogWrite(RightMotorForward,LOW);
    }
    delay(1)

  }
