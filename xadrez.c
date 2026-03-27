#include <stdio.h>

int main() {
// Peças disponiveis: Torre, Bispo, Rainha
int Torre;
int Bispo = 0;
int Rainha = 0;

    // Movimento da Torre 5 casas para a direita

for (Torre = 0; Torre <= 5; Torre++) {
    
    if (Torre == 5) {
    printf("A torre se movimentou 5 casas para a direita.\n");
                } else {
                    printf("A torre se movimentou 1 casa para a direita.\n");
                }  
}

// Movimento Bispo 5 casas na diagonal superior direita

do {
    
    if (Bispo == 5) {
    printf("O bispo se movimentou 5 casas para a direita e para cima.\n");
                } else {
                    printf("O bispo se movimentou 1 casa para a direita e para cima.\n");
                }  
                Bispo++;
} while (Bispo <= 5);

while (Rainha < 8) {

printf ("A rainha movimentou-se 1 casa para a esquerda.\n");

if (Rainha == 7) {
    printf("A rainha se movimentou 8 casas para a esquerda.\n");
}
Rainha++;
}

        return 0;
};
