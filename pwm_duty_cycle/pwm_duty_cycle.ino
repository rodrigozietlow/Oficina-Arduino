// inicializamos a variável que vamos usar pra acessar ela de ambas as funções
float dutyCycle;

void setup() {
  // dizemos que o pino 4 será saída
  pinMode(4, OUTPUT);
  // definimos nosso duty cycle em 0.7 (70%)
  dutyCycle = 0.7;
}

void loop() {
  // nos baseamos em ciclos de 20ms
  // aqui vamos calcular a largura do próximo pulso (quanto tempo ele fica ligado)
  int larguraPulso = 20 * dutyCycle;
  // aqui definimos o delay até o fim do ciclo, que nada mais é que o total - o tempo ligado
  int delayProximoPulso = 20 - larguraPulso;

  // escrevemos e esperamos
  digitalWrite(4, HIGH);
  delay(larguraPulso);
  digitalWrite(4, LOW);
  delay(delayProximoPulso);
}
