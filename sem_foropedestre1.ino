int ledVermelho = 7;
int ledAmarelo = 5;
int ledVerde = 6;
int botao = 4;
int aperto = 0;
int ledVermelho2 = 3;
int ledVerde2 = 2;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (ledAmarelo, OUTPUT);
	pinMode (ledVerde, OUTPUT);
	pinMode(botao, INPUT);
  	pinMode(ledVermelho2, OUTPUT);
  	pinMode(ledVerde2, OUTPUT);
}

void loop () {
  	digitalWrite(ledVerde, 1);
  	digitalWrite(ledVermelho2, 1);
  	aperto = digitalRead(botao);
  	if(aperto == 1){
	digitalWrite(ledVermelho2, 1);
    digitalWrite (ledVerde, 1);
	delay (3000);
	digitalWrite (ledVerde, 0);
	digitalWrite (ledAmarelo, 1);
	delay (2000);
	digitalWrite (ledAmarelo, 0);
	digitalWrite (ledVermelho, 1);
    digitalWrite(ledVermelho2, 0);
    digitalWrite(ledVerde2, 1);
    delay(3000);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    delay(500);
    digitalWrite(ledVerde2, 1);
    digitalWrite(ledVerde2, 0);
    digitalWrite(ledVermelho, 0);
  }
}