#define LED  7
#define BTN 2

int btnEstado;

void setup() {
  pinMode(BTN, INPUT);
    pinMode(LED, OUTPUT);
  
}

void loop() {
  btnEstado=digitalRead(BTN);
 if(btnEstado==1){
   digitalWrite(LED,HIGH);
  }else {
    digitalWrite(LED,LOW);
    }
  
}
