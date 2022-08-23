int ledVermelho = 7;
int botao = 4;
int apertou = 0;
int buzzer = 6;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (botao, INPUT);
  	pinMode(buzzer, OUTPUT);
}

void loop () {
  apertou = digitalRead(botao);
  if(apertou == 1)
  {
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else{
  digitalWrite(ledVermelho, LOW);
  digitalWrite(buzzer, LOW);
  }
}