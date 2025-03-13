// Atribui nomes aos pinos de I/O
#define BT1 9
#define BT2 8
#define BT3 10
#define ledR 2
#define ledW 3
#define ledB 4

// Declaração de variáveis
bool statusBT1, flag1;
bool statusBT2, flag2;

void setup() {
  Serial.begin(9600);

  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(BT3, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledW, OUTPUT);  
  pinMode(ledB, OUTPUT);

}

void loop() {
  // ex10();
  // ex11();
  ex12();
}


void ex10(){
    statusBT1 = digitalRead(BT1);
  delay(100);

  // Detecção da borda de subida
  if(statusBT1 == 1 && flag1 == 0){
    flag1 = 1;
    digitalWrite(ledR, HIGH);
    delay(500);

  }

  // Detecção da borda de descida
  if(statusBT1 == 0 && flag1 == 1){
    flag1 = 0;
    digitalWrite(ledR, LOW);
    delay(500);
  }
}

void ex11(){
  int i = 1;
  while(i <= 10){
    Serial.println(i);
    delay(2000);
    if(i == 10){
      i = 0;
    }
    i += 1;
  }
}

void ex12(){
  statusBT1 = digitalRead(BT1);
  
}
