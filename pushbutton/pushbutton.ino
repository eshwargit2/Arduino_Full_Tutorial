//Basic LED Push button ,  Blink project 
const int ledPin=2;
const int btnPin=3;

void setup() {
 pinMode(ledPin,OUTPUT);
 pinMode(btnPin, INPUT);
 Serial.begin(9600);
}


void pushbtn(){
  int state= digitalRead(btnPin);
 


  if(state==1){
    digitalWrite(ledPin,HIGH);
    Serial.println("Led ON");
     Serial.println(" Button Status : "+String(state));
    }
  else{
      digitalWrite(ledPin,LOW);
      Serial.println("Led OFF");
       Serial.println(" Button Status : "+String(state));
    }
 }


void loop() {

  pushbtn();
}
