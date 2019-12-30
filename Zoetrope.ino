const int controlPin1 = 2;
const int controlPin2 = 3;
const int enablePin =9;
const int directionSwitchPin= 4;
const int onOFFSwitchStateSwitchPin=5;
const int potPin = A0;

int onOFFSwitchState=0;
int previousOnOFFSwitchState=0;
int directionSwitchState=0;
int previousDirectionSwitchState=0;

int motorEnable=0;
int motorSpeed=0;
int motorDirection=1;

void setup() 
{
  pinMode(directionSwitchPin,INPUT);
  pinMode(onOFFSwitchStateSwitchPin,INPUT);
  pinMode(controlPin1,OUTPUT);
  pinMode(controlPin2,OUTPUT);
  pinMode(enablePin,OUTPUT);
  digitalWrite(enablePin,LOW);
}

void loop() 
{
  onOFFSwitchState = digitalRead(onOFFSwitchStateSwitchPin);
  delay(1);

  directionSwitchState = digitalRead(directionSwitchPin);
  motorSpeed = analogRead(potPin)/4;

  if(onOFFSwitchState != previousOnOFFSwitchState)
  {
    if(onOFFSwitchState == HIGH)
    {
      motorEnable=!motorEnable;
    }
  }

  if(directionSwitchState != previousDirectionSwitchState)
  {
    if(directionSwitchState == HIGH)
    {
      motorDirection = !motorDirection;
    }
  }

  if(motorDirection == 1)
  {
    digitalWrite(controlPin1,HIGH);
    digitalWrite(controlPin2,LOW);
  }

  else
  {
    digitalWrite(controlPin1,LOW);
    digitalWrite(controlPin2,HIGH);
  }
