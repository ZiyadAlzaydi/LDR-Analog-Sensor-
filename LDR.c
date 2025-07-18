const int ldrPin = A0;    
const int redLED = 9;       

int ldrValue = 0;
const int threshold = 500;  

void setup() {
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  ldrValue = analogRead(ldrPin); 
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if (ldrValue < threshold) {   
    digitalWrite(redLED, HIGH);
    
  } else {
    digitalWrite(redLED, LOW);
  }
  delay(200);
}
