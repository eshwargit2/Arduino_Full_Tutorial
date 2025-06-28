const int ledPin=2;


void setup() {
 pinMode(ledPin,OUTPUT);

}

void ledBlink(){
 digitalWrite(ledPin,HIGH);
 delay(1000);
 digitalWrite(ledPin,LOW);
 delay(1000);
 }

void loop() {
 ledBlink();
}
