int led_Verde = 13;
int led_Amarelo = 12;
int led_Vermelho = 11;


void setup(){    
  pinMode(led_Verde, OUTPUT);
  pinMode(led_Amarelo, OUTPUT);
  pinMode(led_Vermelho, OUTPUT);
}

void loop(){
    //ligando o led verde
  digitalWrite(led_Verde, HIGH);
  digitalWrite(led_Amarelo, LOW);
  digitalWrite(led_Vermelho, LOW);  
  delay(5000);
   //ligando o led amarelo
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVermelho, LOW);  
  delay(2000);
   //ligando o led  vermelho
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);  
  delay(5000);
