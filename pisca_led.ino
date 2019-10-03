// a função de configuração é executada uma vez quando você pressionar reset ou quando liga o Arduino.
void setup() {
    // inicializa o pino digital 7 como Saída.
    pinMode(7, OUTPUT);
}

// a função loop é executada indefinidamentre.
void loop() {
  digitalWrite(7, HIGH);      // ligar o LED em nível de tensão alto (HIGH)
  delay(1000);              // esperar por 1 segundo
  digitalWrite(7, LOW);         // ligar o LED em nível de tensão baixo (LOW)
  delay(1000);              // esperar por 1 segundo
}
