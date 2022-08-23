int ledVermelho = 7;
int ledAmarelo = 5;
int ledVerde = 6;

void setup () {
	pinMode (ledVermelho, OUTPUT);
	pinMode (ledAmarelo, OUTPUT);
	pinMode (ledVerde, OUTPUT);
}

void loop () {

	digitalWrite (ledVerde, HIGH);
	delay (3000);
	digitalWrite (ledVerde, LOW);
	digitalWrite (ledAmarelo, HIGH);
	delay (2000);
	digitalWrite (ledAmarelo, LOW);
	digitalWrite (ledVermelho, HIGH);
	delay (3000);
	digitalWrite (ledVermelho, LOW);
}