/*
###########################################> 1018 - Cédulas <########################################
#                                                                                                   #
# Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o    #
# valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir       #
# mostre o valor lido e a relação de notas necessárias.                                             #
#                                                                                                   #
# Entrada                                                                                           #
# O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).                                 #
#                                                                                                   #
# Saída                                                                                             #
# Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias,        #
# conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso        #
# contrário seu programa apresentará a mensagem: "Presentation Error".                              #
#                                                                                                   #
#####################################################################################################
*/
#include <stdio.h>

int main() {

    int N,notas,N100 , N50 , N20 , N10 , N5 , N2 , N1;

    scanf("%i",&N);
    notas = N;
    N100 = notas / 100;
    notas = notas - (N100 *100);
    N50 = notas / 50;
    notas = notas - (N50 * 50);
    N20 = notas / 20;
    notas = notas - (N20 * 20);
    N10 = notas /10;
    notas = notas -(N10 * 10);
    N5 = notas / 5;
    notas = notas - (N5 * 5);
    N2 = notas / 2;
    notas = notas - (N2 * 2);
    
    printf("%i\n",N);
    printf("%i nota(s) de R$ 100,00\n",N100);
    printf("%i nota(s) de R$ 50,00\n",N50);
    printf("%i nota(s) de R$ 20,00\n",N20);
    printf("%i nota(s) de R$ 10,00\n",N10);
    printf("%i nota(s) de R$ 5,00\n",N5);
    printf("%i nota(s) de R$ 2,00\n",N2);
    printf("%i nota(s) de R$ 1,00\n",notas);

    return 0;

}