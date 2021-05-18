#define LED  7
#define BTN_1 2
#define BTN_2 3

int velocidade = 100;

void setup() {
  pinMode(BTN_1, INPUT);
  pinMode(BTN_2, INPUT);
    pinMode(LED, OUTPUT);
  
    Serial.begin(9600);
    Serial.println("Iniciando...");
}

void loop() {
  if ( digitalRead(BTN_1) == 1 ) {
    velocidade = 100;
    Serial.println("BTN 1");
  }
  
  if ( digitalRead(BTN_2) == 1 ) {
    velocidade = 1000; 
    Serial.println("BTN 2");
  }
  
  digitalWrite(LED, HIGH);
  delay(velocidade);  
  
  digitalWrite(LED, LOW);
  delay(velocidade);
  
}
