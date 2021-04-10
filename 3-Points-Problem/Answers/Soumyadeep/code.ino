//declaring variables
int inPin=13;
int outPin=12;
int longDelay=2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(inPin,OUTPUT);
  pinMode(outPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int inPerson=0;
  int outPerson=0;
  if(digitalRead(inPin)){
    inPerson = inPerson+1;
  }
  if(digitalRead(inPin)){
    outPerson = outPerson+1;
  }
  if(inPerson>outPerson){
    Serial.println(inPerson-outPerson);
  }
}
