//Logica para criar codigos RF para os produtos da HAWK
//Por Kawê Botelho

#include <RCSwitch.h>                  // Biblioteca do sistema RF.

RCSwitch mySwitch = RCSwitch();

void setup() {
  
  Serial.begin(115200);                 // Taxa de atualização da Serial.

  // Configura o transmissor RF no pino D12
  mySwitch.enableTransmit(12);         // Define o pino de transmissão (pino D12)
  
  // Opcional: Defina o número de repetições do código RF (padrão é 10)
  mySwitch.setRepeatTransmit(15);      // Repetir a transmissão 15 vezes para garantir boa recepção
}

void loop() {
  unsigned long codigoRF = 100004;     // Define o código RF que será enviado
  mySwitch.send(codigoRF, 24);         // Envia o código RF

  // Exibe o código RF que está sendo enviado na Serial
  Serial.print("Enviando o código RF: ");
  Serial.println(codigoRF);
}
