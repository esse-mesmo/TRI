int vermelho_1 = 10;
int vermelho_2 = 11;
int amarelo_1 = 9;
int amarelo_2 = 12;
int verde_1 = 8;
int verde_2 = 13;
int pedvermelho_1 = 7;
int pedvermelho_2 = 5;
int pedverde_1 = 6;
int pedverde_2 = 4;
 
void setup() {
 
  pinMode(vermelho_1, OUTPUT);
  pinMode(amarelo_1, OUTPUT);
  pinMode(verde_1, OUTPUT);
 
  pinMode(vermelho_2, OUTPUT);
  pinMode(amarelo_2, OUTPUT);
  pinMode(verde_2, OUTPUT);
  
  pinMode(pedvermelho_1, OUTPUT);
  pinMode(pedvermelho_2, OUTPUT);
  pinMode(pedverde_1, OUTPUT);
  pinMode(pedverde_2, OUTPUT);
  
}
 
void loop() {
   cruzamento();
}
 
void cruzamento() {
  // sinal 1 - amarelo
  digitalWrite(vermelho_1, LOW);
  digitalWrite(amarelo_1, HIGH);
  digitalWrite(verde_1, LOW);
 
  // sinal 2 - amarelo também
  digitalWrite(vermelho_2, LOW);
  digitalWrite(amarelo_2, HIGH);
  digitalWrite(verde_2, LOW);
 
  delay(2000);
 
  // sinal 1
 
  digitalWrite(amarelo_1, LOW);
  digitalWrite(vermelho_1, HIGH);
  // digitalWrite(verde_1, LOW);
  digitalWrite(pedverde_1, HIGH);
  digitalWrite(pedvermelho_1, LOW);
 
  // sinal 2
  
  digitalWrite(amarelo_2, LOW);
  // digitalWrite(vermelho_2, LOW);
  digitalWrite(verde_2, HIGH);
  digitalWrite(pedvermelho_2, HIGH);
  digitalWrite(pedverde_2, LOW);
 
 
  delay(5000);  
 
  // sinal 1
  
  digitalWrite(verde_1, HIGH);
  // digitalWrite(amarelo_1, LOW);
  digitalWrite(vermelho_1, LOW);
  digitalWrite(pedvermelho_1, HIGH);
  digitalWrite(pedverde_1, LOW);
 
  // sinal 2
  
  digitalWrite(verde_2, LOW);
  // digitalWrite(amarelo_2, LOW);
  digitalWrite(vermelho_2, HIGH);
  digitalWrite(pedverde_2, HIGH);
  digitalWrite(pedvermelho_2, LOW);
 
  delay(5000);
  
}


//Segundo arduino

int buttonPin = 7;
int ledPin = 10;
int estadoButton = 0;
int buzzer = 6;


void setup()
{
  pinMode(ledPin , OUTPUT);
  pinMode (buttonPin , INPUT);
  pinMode(buzzer, OUTPUT);
  
}

void loop()
{
  estadoButton = digitalRead (buttonPin);
  if ( estadoButton == HIGH ) { 
    digitalWrite(ledPin , HIGH);
    tone(buzzer,262,5000);
    delay(5000);
  }
  else { 
    digitalWrite (ledPin , LOW ); 
  }
}
