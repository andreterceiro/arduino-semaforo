const int r = 13;
const int y = 12; 
const int g = 11; 
const int terra = 10;

void setup() {
   pinMode(r, OUTPUT);
   pinMode(y, OUTPUT);
   pinMode(g, OUTPUT);
   pinMode(terra, OUTPUT);

   digitalWrite(r, LOW);
   digitalWrite(y, LOW);
   digitalWrite(g, LOW);
   digitalWrite(terra, LOW);
}       

void loop() {
  digitalWrite(g, LOW);
  digitalWrite(r, HIGH);
  delay(3000);
  
  digitalWrite(r, LOW);
  digitalWrite(y, HIGH);
  delay(1000);

  digitalWrite(y, LOW);
  digitalWrite(g, HIGH);
  delay(3000);
}
