// Atribui nomes aos pinos de I/O
#define BT1 8
#define BT2 9
#define ledRed 2
#define ledWhite 3
#define ledBlue 4

// Declaração de variáveis
bool statusBT1;
bool statusBT2;

void setup() {
  // Habilita porta de comunicação serial
  // Baud Rate ---> 9600 bits/s
  Serial.begin(9600);
  // Configura pinos de I/O como INPUT ou OUTPUT
  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledWhite, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

/*
Exemplo 1: 
Botão: 
LOW -----> desligado ---> ledWhite piscando em intervalos de 350ms
HIGH ----> ligado ------> os LEDs ledRed e ledBlue piscam alternadamente em intervalos de 250ms
*/

void loop() {
  statusBT1 = digitalRead(BT1); 
  statusBT2 = digitalRead(BT2);

  if(statusBT1 == HIGH){
    Serial.println("Botão BT1 ligado!");
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, LOW);
    delay(250);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, HIGH);
    delay(250);
  } else {
    if(statusBT2){
      Serial.println("Botão 2 ligado!");
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledBlue, HIGH);
      digitalWrite(ledWhite, HIGH);
      delay(250);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledBlue, LOW);
      digitalWrite(ledWhite, LOW);
      delay(250);
    } else {
      digitalWrite(ledBlue, LOW);
      digitalWrite(ledWhite, HIGH);
      delay(350);
      digitalWrite(ledWhite, LOW);
      delay(350);
    }
  }
}
