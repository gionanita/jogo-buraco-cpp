🃏 Jogo de Buraco - Distribuidor de Cartas em C++
Este projeto é uma simulação da lógica de um jogo de Buraco. O programa gerencia dois baralhos completos, realiza o embaralhamento aleatório e distribui 11 cartas para cada um dos 4 jogadores participantes.

🎯 Objetivo do Projeto
O foco principal foi o estudo de Matrizes (Arrays Multidimensionais) e Lógica de Algoritmos em C++, criando uma representação em memória para cada uma das 52 cartas de um baralho duplo (104 cartas no total).

🎴 Notação das Cartas
Para identificação das cartas, foi utilizada a seguinte convenção: N-99-B

N (Naipe): 1-Copas | 2-Paus | 3-Ouro | 4-Espada

99 (Número): 01-Ás até 13-Rei

B (Baralho): 1 ou 2

Exemplo: 4-10-2 representa o 10 de Espadas vindo do Baralho 2.

🚀 Funcionalidades
Geração Automática: Cria as 104 cartas usando laços de repetição.

Embaralhamento Aleatório: Utiliza o algoritmo de troca (swap) com semente de tempo (srand(time(0))) para garantir que cada partida seja única.

Distribuição: Entrega 11 cartas por jogador, respeitando a sequência do monte.

Exibição: Interface via terminal organizada por jogador.

🛠️ Tecnologias Utilizadas
Linguagem: C++

Bibliotecas Padrão: iostream, string, ctime, cstdlib, cstdio.

💻 Como Rodar
Clone o repositório ou baixe o arquivo .cpp.

Abra em seu compilador favorito (Dev-C++, Code::Blocks, VS Code).

Compile e execute o código.
