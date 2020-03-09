#define POT A0
#define LUM A1
#define RELAY 7
#define HYST 4

void setup() {
  Serial.begin(9600);
pinMode(RELAY,OUTPUT);
}

void loop() {
  int pot = analogRead(POT);
  int lum=analogRead(LUM);
  if(lum>pot+HYST) {
    digitalWrite(RELAY,0);
  }else {
    if (lum<pot-HYST){
      
     digitalWrite(RELAY,1);     
    }  
  }   
  Serial.println(lum);
  Serial.println(pot);
  float mvolt = (5000.0*pot)/1024;
  Serial.println(mvolt);
delay(200);

}
