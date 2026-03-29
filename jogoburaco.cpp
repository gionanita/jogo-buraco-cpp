#include <iostream>
#include <locale.h>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>

using namespace std;

string numParaTexto(int n) {
    char aux[10];
    sprintf(aux, "%d", n);
    return string(aux);
}

void fabricar_cartas(string baralho[2][52]) {
    for (int b = 0; b < 2; b++) {
        int carta_atual = 0;
        for (int n = 1; n <= 4; n++) {
            for (int num = 1; num <= 13; num++) {
                string s_num;
                if (num < 10) {
                    s_num = "0" + numParaTexto(num);
                } else {
                    s_num = numParaTexto(num);
                }
                baralho[b][carta_atual] = numParaTexto(n) + "-" + s_num + "-" + numParaTexto(b + 1);
                carta_atual++;
            }
        }
    }
}

void embaralhar_cartas(string baralho[2][52]) {
    for (int b = 0; b < 2; b++) {
        for (int c = 0; c < 52; c++) {
            int r = rand() % 52;
            string aux = baralho[b][c];
            baralho[b][c] = baralho[b][r];
            baralho[b][r] = aux;
        }
    }
}

void distribuir_cartas(string baralho[2][52], string mao[4][11]) {
    int ind_monte = 0;
    for (int j = 0; j < 4; j++) {
        for (int c = 0; c < 11; c++) {
            if (ind_monte < 52) {
                mao[j][c] = baralho[0][ind_monte];
            } else {
                mao[j][c] = baralho[1][ind_monte - 52];
            }
            ind_monte++;
        }
    }
}

void mostrar_maos(string mao[4][11]) {
    for (int j = 0; j < 4; j++) {
        cout << "\nJogador " << j + 1 << ": ";
        for (int c = 0; c < 11; c++) {
            cout << mao[j][c] << "  ";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "portuguese");
    srand(time(0));
    
    string baralho[2][52];
    string mao[4][11];
    
    cout << "\n====== == JOGO DO BURACO == ======\n";
    
    fabricar_cartas(baralho);
    embaralhar_cartas(baralho);
    distribuir_cartas(baralho, mao);
    mostrar_maos(mao);
    
    return 0;
}