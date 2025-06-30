//This Program Example for based on PIR Sensor Funtions 
//refer the eshwargit2 github page 

const int pirSensor = 4; //connect the sensor data pin to arduino D4
int warm_up;

//run a one time
void setup() {
  pinMode(pirSensor, INPUT);
  Serial.begin(9600); //Serial Communication Setup 

}


//runs a multiple times
void loop() {

  int sensorData = digitalRead(pirSensor); //read the sensor data
  Serial.println(sensorData);

  if(sensorData==LOW){
     if(warm_up==1){
        Serial.println("Wraming Up");
        delay(1000);
      }else{
        Serial.println("No Object");  
         delay(1000);
      }
  }
 
}
