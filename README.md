# Desafio Super Trunfo - Países - Comparação das Cartas

Este projeto é uma versão simples e divertida do jogo **Super Trunfo**, implementado em linguagem C. O jogo compara automaticamente dois países com base em seus atributos e decide quem vence, seguindo regras personalizadas para cada atributo.

## Desenvolvido por: 
Hugo Nascimento | Matrícula: 202505245409 | Curso: Análise e Desenvolvimento de Sistemas - Estácio

## 🌎 Cartas disponíveis

Neste jogo, as cartas são fixas e representam os seguintes países:

- 🇧🇷 **Brasil**
  - População: 213.000.000
  - Área: 8.515.767 km²
  - PIB: 1.490 bilhões de reais
  - Pontos turísticos: 75

- 🇯🇵 **Japão**
  - População: 125.800.000
  - Área: 377.975 km²
  - PIB: 4.937 bilhões de reais
  - Pontos turísticos: 88

A densidade demográfica de cada país é calculada automaticamente com base na fórmula:
# Implementa-o-final-do-super-trunfo-internacional
super trunfo internacional em c

---

## 🎮 Como jogar

O jogo mostra as cartas dos dois países e pergunta ao usuário qual atributo deseja comparar. O sistema então informa qual país venceu com base nas regras:

- 🏆 **Atributos onde o maior valor vence**:
  - População
  - Área
  - PIB
  - Pontos turísticos

- 🧠 **Atributo onde o menor valor vence**:
  - Densidade demográfica

---

## ⚙️ Como compilar e executar

No terminal (Linux/Mac) ou no prompt de comando (Windows), digite:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
