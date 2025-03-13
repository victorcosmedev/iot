// Atribui nomes aos pinos de I/O
#define BT1 9
#define BT2 8
#define ledR 2
#define ledW 3
#define ledB 4

// Declaração de variáveis
bool statusBT1;

void setup() {
  // Habilita porta de comunicação serial 
  // Baud Rate ---> 9600 bits/s
  Serial.begin(9600);

  // Configura pinos de I/O como INPUT ou OUTPUT
  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);  
  pinMode(ledR, OUTPUT);
  pinMode(ledW, OUTPUT);  
  pinMode(ledB, OUTPUT);

  for(int i = 0; i < 10; i++){
    Serial.println(i);
    piscaW();
  }

  Serial.println("Fim da inicialização");
  delay(3000);
}
/*
Exemplo 1:
Botão 1:
LOW ----> desligado ----> ledW piscando em intervalos de 350ms
HIGH ---> ligado ----> os LEDs ledR e ledB 
piscam alternadamente em intervalos de 250ms
*/
void loop() {
  piscaRB();

}

void piscaRB(){
  digitalWrite(ledR, HIGH);
  digitalWrite(ledB, LOW);
  delay(250);
  digitalWrite(ledR, LOW);
  digitalWrite(ledB, HIGH);
  delay(250);
}

void piscaW(){
  digitalWrite(ledB, LOW);
  digitalWrite(ledW, HIGH);
  delay(350);
  digitalWrite(ledW, LOW);    
  delay(350);
}