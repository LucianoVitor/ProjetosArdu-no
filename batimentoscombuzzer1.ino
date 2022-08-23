int ledVermelho = 7;
int botao = 4;
int apertou = 0;
int buzzer = 6;
int ledVerde = 5;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (botao, INPUT);
  	pinMode(buzzer, OUTPUT);
  	pinMode (ledVerde, OUTPUT);
}

void loop () {
  apertou = digitalRead(botao);
  if(apertou == 1)
  {
   digitalWrite(ledVermelho, 1);
    digitalWrite(buzzer, 1);
    delay(200);
    digitalWrite(ledVermelho, 0);
    digitalWrite(buzzer, 0);
    delay(200);
  }
  else{
    digitalWrite(ledVerde, 1);
    digitalWrite(buzzer, 1);
    delay(1000);
    digitalWrite(ledVerde, 0);
    digitalWrite(buzzer, 0);
    delay(1000);
   
  }
}