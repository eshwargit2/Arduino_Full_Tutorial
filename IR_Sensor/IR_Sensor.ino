//This Program Example for based on IR Sensor Funtions 
//refer the eshwargit2 github page 

const int IRSensor = 9; //connect the sensor data pin to arduino D9
const int LED = 13;//LED output , arduino D13
int warm_up;

//run a one time
void setup() {
  pinMode(IRSensor, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); //Serial Communication Setup 

}


//runs a multiple times
void loop() {

  int sensorData = digitalRead(IRSensor); //read the sensor data
  Serial.println(sensorData);

  if(sensorData==1){
    digitalWrite(LED, HIGH);
    Serial.println("Object detected");
    delay(1000);
  }else{
    digitalWrite(LED, LOW);
    Serial.println("No Object");
    delay(1000);
   }
 
}
