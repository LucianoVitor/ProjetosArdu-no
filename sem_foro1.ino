int ledVermelho = 7;
int botao = 4;
int apertou = 0;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (botao, INPUT);
}

void loop () {
  apertou = digitalRead(botao);
  if(apertou == 1)
  {
    digitalWrite(ledVermelho, HIGH);
  }
  else{
  digitalWrite(ledVermelho, LOW);
  }
}