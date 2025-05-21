
# Projeto: Transmissor de Códigos RF

**Descrição:** Este projeto implementa a lógica de transmissão de sinais de rádio frequência (RF) para integração com produtos que possuem essa tecnologia, utilizando a biblioteca `RCSwitch` e um microcontrolador Arduino.

## 🎯 Objetivo

Automatizar e padronizar o envio de códigos RF para dispositivos, garantindo comunicação eficiente e precisa com os produtos.  
Esta aplicação é fundamental para testes, validação e operação de sistemas que utilizam controle remoto via RF.

## ⚙️ Como Funciona

1. **Biblioteca RCSwitch**: Utilizada para facilitar a manipulação de sinais RF, abstraindo detalhes técnicos da comunicação.
2. **Configuração de Transmissão**:
   - Transmissor RF conectado ao pino D12 do Arduino.
   - Configuração para repetir cada transmissão 15 vezes, aumentando a confiabilidade da comunicação.
3. **Envio de Código**:
   - Um código RF específico (`100004`) é enviado com 24 bits de comprimento.
   - O código enviado é exibido via Serial Monitor, proporcionando feedback visual do funcionamento.

## 🛠️ Componentes Utilizados

- Arduino (UNO, Nano ou compatível).
- Módulo Transmissor RF 433 MHz.
- Biblioteca RCSwitch.

## 📄 Estrutura do Código

```cpp
#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {
  Serial.begin(115200);
  mySwitch.enableTransmit(12);
  mySwitch.setRepeatTransmit(15);
}

void loop() {
  unsigned long codigoRF = 100004;
  mySwitch.send(codigoRF, 24);
  Serial.print("Enviando o código RF: ");
  Serial.println(codigoRF);
}
```

## 🚀 Execução

1. Carregue o código no Arduino.
2. Conecte o transmissor RF ao pino digital D12.
3. Abra o Serial Monitor a 115200 bps para visualizar o código transmitido.
4. O código RF será enviado automaticamente em loop.

## ✅ Benefícios

- **Padronização**: Envio controlado e replicável de códigos RF.
- **Eficiência**: Repetição configurável para garantir recepção estável.
- **Flexibilidade**: Fácil adaptação para outros códigos e bitrates.

## 📦 Aplicações

- Testes de compatibilidade com dispositivos.
- Desenvolvimento de sistemas automatizados de controle remoto.
- Projetos de engenharia e automação residencial.

## 👨‍💻 Autor

Desenvolvido por **Kawê Botelho**.

---

