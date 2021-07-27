void setup(){
  pinMode(A0, INPUT);
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
  Serial.begin(9600);
}

void loop(){
  delay(500);
  int valorLido = analogRead(A0);
  Serial.println("Quantidade de luz IR percebida: " + (String)valorLido);
  
  if(valorLido >= 900 && valorLido <= 1000){
    digitalWrite(3, HIGH);
  }else{
    digitalWrite(3, LOW);
  }
}