//Programa que envia sinal alto para a saida 7 
//aguarda para enviar um sinal baixo para a saida 7
void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7,HIGH);
delay(1000);
digitalwrite(7,LOW);
delay(1000); 
}
