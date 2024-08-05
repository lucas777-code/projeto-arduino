// C++ code
//
int b1, b2, b3, b4;
void setup()
{
  pinMode(12, OUTPUT); //led
  pinMode(10, OUTPUT); //led
  pinMode(8, INPUT); //BOTÃO
  pinMode(6, INPUT); //BOTÃO
  pinMode(4, INPUT); //BOTÃO
  pinMode(2, INPUT); //BOTÃO
}

void loop()
{
  b1 = digitalRead(8);
  b2 = digitalRead(6);
  b3 = digitalRead(4);
  b4 = digitalRead(2);
  
  //lógica E
  if (b1 == HIGH || b2 == HIGH) {
   digitalWrite(10, HIGH);
  }
  else{
   digitalWrite (10, LOW);
  }
  delay(50);
  
  //Lógica OU
  if (b3 == HIGH || b4 == HIGH) {
   digitalWrite(12, HIGH);
  }
  else{
   digitalWrite (12, LOW);
  }
  delay(50);
}
