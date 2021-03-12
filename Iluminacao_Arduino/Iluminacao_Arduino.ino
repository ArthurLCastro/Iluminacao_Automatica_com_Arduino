// Projeto de Iluminação Automática
// Arthur L. Castro

#define LED_PIN 13                      // Define LED_PIN como 13
#define LDR_PIN A0                      // Define LDR_PIN como A0
#define LIMIAR_DE_LUMINOSIDADE 300      // Define LIMIAR_DE_LUMINOSIDADE como 300

int luminosidade;               // Cria variavel para armazenar a leitura do LDR

void setup() {
  pinMode(LED_PIN, OUTPUT);     // Define o pino 13 como saida
  pinMode(LDR_PIN, INPUT);      // Define o pino A0 como entrada
}

void loop() {
  luminosidade = analogRead(LDR_PIN);     // Efetua leitura do pino A0

  if(luminosidade <= LIMIAR_DE_LUMINOSIDADE){
    digitalWrite(LED_PIN, HIGH);          // Configura o estado do pino 13 para 5V, ou seja, liga o LED
  } else {
    digitalWrite(LED_PIN, LOW);           // Configura o estado do pino 13 para 0V, ou seja, desliga o LED
  }

  delay(100);     // Pausa antes de inciar um novo ciclo
}
