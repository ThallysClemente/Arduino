#define LED_VD 8 //pinos que estao conectados os LEDS
#define LED_VM 7 //pinos que estao conectados 
 
#define SW_D 3 //pinos que o inerruptor esta conectado
#define SW_E 2

int ledSelecionado; // Led que esta sendo usado no momento

void setup() {
    pinMode(LED_VM, OUTPUT); //LED são output
    pinMode(LED_VD, OUTPUT);
  
    pinMode(SW_D, INPUT); // saidas input 
    pinMode(SW_E, INPUT);
}

void loop() {
  
  if ( digitalRead(SW_D) == 1 ) {
     ledSelecionado = LED_VD;
  }
  if ( digitalRead(SW_E) == 1 ) {
     ledSelecionado = LED_VM;
  }
  
  digitalWrite(ledSelecionado, HIGH);
  delay(500);
  
  digitalWrite(ledSelecionado, LOW);
  delay(500);
  
}
