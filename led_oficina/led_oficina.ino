void setup() {
  // aqui dizemos que o pino 4 será uma saída (OUTPUT)
  pinMode(4, OUTPUT);
}

void loop() {
  // nosso pino deve passar HIGH (ligado)
  digitalWrite(4, HIGH);
  // forçamos nosso sistema a esperar 500 milissegundos
  delay(500);
  // nosso pino deve passar LOW (desligado)
  digitalWrite(4, LOW);
  // forçamos nosso sistema a esperar 500 milissegundos novamente
  delay(500);
}
