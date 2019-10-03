int estadoBotao = 0;

void setup (){
pinMode(2, OUTPUT);// green
pinMode(3, OUTPUT);// yellow
pinMode(4, OUTPUT);// red
pinMode(5, INPUT);
}
void loop (){

estadoBotao = digitalRead(5);

  if(estadoBotao == HIGH) {
	digitalWrite(4,HIGH);
    delay(200);
    digitalWrite(4,LOW);
    delay(100);
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(100);
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(100);
  }
}
