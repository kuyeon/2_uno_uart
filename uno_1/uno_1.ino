/* Author: Park Kuyeon
 * Title: Arduino UNO - UNO UART Program
 * Description: This is the code about the UNO recieving data from the other UNO
 *              and controls the LED attatched on the UNO and sends LED status to the other UNO
 *              
 * 
 */


int LED = 13;
char data;


void setup() {
  Serial1.begin(9600);    // using TX(1), RX(0) pin
  pinMode(LED, OUTPUT);   // LED pin mode setup
}

void loop() {
  Serial1.print('0');     // Send data to the UNO
  delay(500);
  Serial1.print('1');
  delay(500);
  
  if(Serial1.available()){
    data = (char)Serial1.read();    // Receive data from the UNO
    if(data == '1'){
      digitalWrite(LED, HIGH);
    }
    else if(data == '0'){
      digitalWrite(LED, LOW);
    }
  }  
}
