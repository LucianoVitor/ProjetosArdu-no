int ledVermelho = 7;
int ledAmarelo = 6;
int ledVerde = 5;
int ledVermelho2 = 4; 

void setup ()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVerde,OUTPUT);
  pinMode(ledVermelho2,OUTPUT);
}

void loop()
{
  //Led acendendo da direita para esquerda
  
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  delay(500);
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  delay(500);
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  delay(500);
  
  //Led acendendo da esquerda para direita
  
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  delay(500);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  delay(500);
  digitalWrite(ledVermelho, HIGH);
  delay(500);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(500);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, HIGH);
  delay(500);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, HIGH);
  delay(500);
  digitalWrite(ledVermelho2, LOW);
  delay(500);
  
  //Led acendendo juntos
  
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, LOW);
  delay(1000);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, LOW);
  delay(1000);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(1000);
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho2, LOW);
  delay(1000);
  
} 