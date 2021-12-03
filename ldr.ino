int light_sensitivity=100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int LDRValue=analogRead(A0);
Serial.println(LDRValue);
delay(50);
if(LDRValue<light_sensitivity)
digitalWrite(9,HIGH);
else
digitalWrite(9,LOW);
delay(1000);
}
