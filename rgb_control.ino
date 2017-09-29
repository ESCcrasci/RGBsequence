
#define ledPinred 4
#define ledPinBLUE 2
#define ledPinGREEN 3
void setup() {
 pinMode(ledPinred,OUTPUT);  
  pinMode(ledPinBLUE,OUTPUT);  
   pinMode(ledPinGREEN,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPinred, HIGH);
  delay(1000);
    digitalWrite(ledPinred, LOW);
    delay (1000);

  digitalWrite(ledPinBLUE, HIGH);
  delay(1000);
  digitalWrite(ledPinBLUE, LOW);
    delay (1000);

  digitalWrite(ledPinGREEN, HIGH);
  delay(1000);
  digitalWrite(ledPinGREEN, LOW);
    delay (1000);
}
