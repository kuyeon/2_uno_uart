int LED = 13;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}
char data;
void loop() {
  while(Serial.available()){
    data = Serial.read();
    if(data == 'a'){
      digitalWrite(LED, HIGH);
      delay(1000);
    }
    else if(data == 'b'){
      digitalWrite(LED, LOW);
      delay(1000);
    }
  }
}
