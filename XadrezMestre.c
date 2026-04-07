#include <stdio.h>

// Recursivedade para movimentar as peças

//Moviment Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
//Moviment Bispo V1
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        printf("Cima\n");
        moverBispo(casas - 1);
    }
}
//Moviment Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}




int main() {
//Valores de movimento das peças
printf("Movimento da Torre:\n");
moverTorre(5);
printf("\n");
printf("Movimento do Bispo:\n");
moverBispo(5);
printf("\n");
printf("Movimento da Rainha:\n");
moverRainha(8);
printf("\n");
printf("Movimento do Cavalo:\n");

int Cavalo = 0;

// Movimento do Cavalo 2 casas para cima e 1 casa para a direita
do{
for (Cavalo = 0; Cavalo < 2; Cavalo++) {

printf("Cima\n");
}
printf("Direita\n");
} while (Cavalo < 1);

int BispoV2 = 0;

//Moviment Bispo V2
printf("Movimento do Bispo V2:\n");
while (BispoV2 < 5) {
    printf("Direita\n");
    BispoV2++;
} do {
    printf("Cima\n");
    BispoV2++;
} while (BispoV2 < 10);


return 0;
}
