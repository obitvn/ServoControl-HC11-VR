
void setup() {
 Serial.begin(9600);
}
long value, goc;
void loop() {
  for(int i=0; i<500; i++)
  {
 value += analogRead(A5);
  }
  value= value/500;
 goc = (1024-value)*180/1024;
Serial.println(goc);
 delay(50);
}
