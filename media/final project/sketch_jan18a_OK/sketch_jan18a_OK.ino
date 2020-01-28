int SENSOR =A1;
int value = 0;
int LED = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
value = analogRead(SENSOR);
Serial.println(value);
delay(100);
if(value<200){
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
 }else{
     digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  }

}
