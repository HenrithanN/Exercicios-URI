/*
####################################> 1019 - Conversão de Tempo <####################################
#                                                                                                   #
# Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma       #
# fábrica, e informe-o expresso no formato horas:minutos:segundos.                                  #
#                                                                                                   #
# Entrada                                                                                           #
# O arquivo de entrada contém um valor inteiro N.                                                   #
#                                                                                                   #
# Saída                                                                                             #
# Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos,    #
# conforme exemplo fornecido.                                                                       #
#                                                                                                   #
#####################################################################################################
*/
#include <stdio.h>

int main() {

    int N, H, M, S;

    scanf("%i", &N);

    H=(N/3600);

    M=(N -(3600*H))/60;

    S= (N-(3600*H)-(M*60));

    printf("%i:%i:%i\n",H,M,S);

    return 0;

}