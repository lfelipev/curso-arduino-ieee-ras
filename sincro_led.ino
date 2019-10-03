void setup (){
pinMode(2, OUTPUT);// green
pinMode(3, OUTPUT);// yellow
pinMode(4, OUTPUT);// red
}
void loop (){

  
digitalWrite(4,HIGH);
delay(2000);
digitalWrite(4,LOW);
delay(100);
digitalWrite(3, HIGH);
delay(2000);
digitalWrite(3, LOW);
delay(100);
digitalWrite(2, HIGH);
delay(2000);
digitalWrite(2, LOW);
delay(100);
  
}
