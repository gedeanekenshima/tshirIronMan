
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(10);
  // acende e apaga leds um por um
  for(int i=4;i<14;i++){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
    delay(500);
    }
    //-------------------------
  // piscar todos os leds duas vezes
  for(int j=0;j<2;j++){
  for(int i=4;i<14;i++){
    digitalWrite(i,HIGH);
  }
  delay(1000);
  for(int i=4;i<14;i++){
    digitalWrite(i,LOW);
  }
    delay(1000);
  }
  // ----------------------------  
  // manter todos os leds acesos por um minuto
  for (int i=4;i<14;i++){
    digitalWrite(i,HIGH);
    }
   delay(3000);
   // -----------------------------
   // apagar leds um por um
   for (int i=13;i>4;i--){
    digitalWrite(i,LOW);
    delay(500);
   }
   
   }
  

