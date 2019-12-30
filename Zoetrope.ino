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
