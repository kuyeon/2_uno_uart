int LED = 13;

void setup() {
  Serial1.begin(9600);
  pinMode(LED, OUTPUT);
}
char data;
void loop() {
  while(Serial1.available()){
    data = (char)Serial1.read();
    if(data == '1'){
      digitalWrite(LED, HIGH);
    }
    else if(data == '0'){
      digitalWrite(LED, LOW);
    }
  }
}
