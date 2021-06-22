int LED = 13;
char data;


void setup() {
  Serial1.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial1.print('0');
  delay(500);
  Serial1.print('1');
  delay(500);
  if(Serial1.available()){
    data = (char)Serial1.read();
    if(data == '1'){
      digitalWrite(LED, HIGH);
    }
    else if(data == '0'){
      digitalWrite(LED, LOW);
    }
  }  
}
