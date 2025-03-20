#define ledVermelhoCarro 2
#define ledAmareloCarro 3
#define ledVerdeCarro 4
#define ledVermelhoPedestre 5
#define ledVerdePedestre 6

#define BT1 8
#define BT2 9
#define BT3 10

int valor; 
void setup() {
  Serial.begin(9600);
  pinMode(ledVermelhoCarro, OUTPUT);
  pinMode(ledAmareloCarro, OUTPUT);
  pinMode(ledVerdeCarro, OUTPUT);
  pinMode(ledVermelhoPedestre, OUTPUT);
  pinMode(ledVerdePedestre, OUTPUT);

  pinMode(BT1, INPUT);
  pinMode(BT2, INPUT);
  pinMode(BT3, INPUT);
  Serial.println("Victor Cosme - RM 558856");
  // questao2();
}

void loop() {
  questao3();
}

void questao2(){
  digitalWrite(ledVerdeCarro, HIGH);
  digitalWrite(ledVermelhoPedestre, HIGH);
  delay(5000);

  digitalWrite(ledVerdeCarro, LOW);
  digitalWrite(ledVermelhoPedestre, LOW);
  digitalWrite(ledAmareloCarro, HIGH);
  digitalWrite(ledVermelhoPedestre, HIGH);
  delay(2000);

  digitalWrite(ledAmareloCarro, LOW);
  digitalWrite(ledVermelhoPedestre, LOW);
  digitalWrite(ledVermelhoCarro, HIGH);
  digitalWrite(ledVerdePedestre, HIGH);
  delay(5000);

  digitalWrite(ledVermelhoCarro, LOW);
  digitalWrite(ledVerdePedestre, LOW);
  digitalWrite(ledVermelhoCarro, HIGH);
  digitalWrite(ledVermelhoPedestre, HIGH);
  delay(500);
  digitalWrite(ledVermelhoPedestre, LOW);
  delay(500);
  digitalWrite(ledVermelhoPedestre, HIGH);
  delay(500);
  digitalWrite(ledVermelhoPedestre, LOW);
  delay(500);
  digitalWrite(ledVermelhoPedestre, HIGH);
  delay(500);
  digitalWrite(ledVermelhoPedestre, LOW);
  delay(500);
  digitalWrite(ledVermelhoCarro, LOW);
}

void questao3(){
  valor = analogRead(A2);
  Serial.println(valor);
  if(valor < 300){
    digitalWrite(ledVerdePedestre, HIGH);
    digitalWrite(ledVermelhoPedestre, LOW);
    digitalWrite(ledVermelhoCarro, LOW);
    digitalWrite(ledAmareloCarro, LOW);
    digitalWrite(ledVerdeCarro, LOW);
  } else if (valor < 600){
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, LOW);
    digitalWrite(ledVermelhoCarro, LOW);
    digitalWrite(ledAmareloCarro, HIGH);
    digitalWrite(ledVerdeCarro, LOW);
  } else if(valor < 900){
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, HIGH);
    digitalWrite(ledVermelhoCarro, LOW);
    digitalWrite(ledAmareloCarro, LOW);
    digitalWrite(ledVerdeCarro, LOW);
  } else if (valor < 1000){
    digitalWrite(ledVerdePedestre, LOW);
    digitalWrite(ledVermelhoPedestre, LOW);

    while(valor >= 900 && valor <= 1000){
      digitalWrite(ledVermelhoCarro, HIGH);
      digitalWrite(ledAmareloCarro, HIGH);
      digitalWrite(ledVerdeCarro, HIGH);
      delay(500);
      digitalWrite(ledVermelhoCarro, LOW);
      digitalWrite(ledAmareloCarro, LOW);
      digitalWrite(ledVerdeCarro, LOW);
      delay(500);
    }
  } else {
    while(valor > 1000){
      digitalWrite(ledVermelhoPedestre, HIGH);
      digitalWrite(ledVermelhoCarro, HIGH);
      delay(500);
      digitalWrite(ledVermelhoPedestre, LOW);
      digitalWrite(ledVermelhoCarro, LOW);
      delay(500);
    }
  }
}
