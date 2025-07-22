# Cartas de Cidades - Projeto em C

Este é um pequeno projeto em linguagem C que simula a entrada e exibição de dados de duas **cartas de cidades brasileiras**, com atributos como estado, código, nome da cidade, população, área, PIB e número de pontos turísticos.

## 💡 Objetivo

Capturar os dados de duas cidades e exibi-los formatados como "cartas" de um jogo fictício, onde cada carta representa uma cidade brasileira com atributos específicos.

## 🧠 Funcionalidades

- Entrada de dados das duas cartas:
  - Estado (letra de A a H)
  - Código da carta (string de 2 a 4 caracteres)
  - Nome da cidade
  - População (inteiro)
  - Área (float)
  - PIB (float)
  - Número de pontos turísticos (inteiro)
- Exibição dos dados formatados para ambas as cartas

## 🛠️ Linguagem e Ferramentas

- Linguagem C
- Compilador: `gcc`
- Terminal / VS Code

## ▶️ Como executar

1. Compile o código:

```bash
gcc cartas_cidades.c -o cartas
```

2. Execute o programa:
```
./cartas
```

3. Siga as instruções no terminal para inserir os dados.
## Exemplo de uso
```
Digite o estado da primeira carta (uma letra entre A e H): A
Digite o codigo da primeira carta (entre 01 e 04): 01
Digite o nome da cidade da primeira carta: Recife
Digite a populacao da primeira cidade: 1500000
Digite a area da primeira cidade: 218.4
Digite o PIB da primeira cidade: 55.3
Digite o numero de pontos turisticos da primeira cidade: 12

...

Dados da Carta 1:
Estado: A
Código: A01
Nome da Cidade: Recife
População: 1500000
Área: 218.40 km2
PIB: 55.30 bilhões de Reais
Número de Pontos Turisticos: 12
```

## 📄 Licença
Este projeto é de uso educacional e está licenciado sob a MIT License.


Projeto criado por Diogo Timóteo Cardoso como parte de estudos em linguagem C.