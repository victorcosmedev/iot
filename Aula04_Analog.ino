/*
Sinal analógico ---> 0.0V a 5.0V

Conversor Analógico - Digital
Analog-To-Digital Converter (ADC)
Resolução --> 10 bits

2 ^ 10 = 1.024 (0 a 1023)

0.00 V -> 0
5.00 ---> 1023

analogRead(pino);
*/

int valor;

void setup() {
  Serial.begin(9600);
  pinMode(6, OUTPUT);
}

void loop() {
  valor = analogRead(A5);

  if(valor > 950) digitalWrite(6, HIGH);
  else digitalWrite(6, LOW);

  Serial.println(valor);
  delay(1000);
}

void setup(){

}

