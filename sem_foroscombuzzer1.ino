int ledVermelho = 7;
int botao = 4;
int apertou = 0;
int buzzer = 6;
int ledAmarelo = 5;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (botao, INPUT);
  	pinMode(buzzer, OUTPUT);
  	pinMode (ledAmarelo, OUTPUT);
}

void loop () {
  apertou = digitalRead(botao);
  if(apertou == 1)
  {
    digitalWrite(ledVermelho, 1);
    digitalWrite(buzzer, 1);
    digitalWrite(ledAmarelo, 0);
  }
  else{
  digitalWrite(ledVermelho, 0);
  digitalWrite(buzzer, 0);
  digitalWrite(ledAmarelo, 1);
  }
}