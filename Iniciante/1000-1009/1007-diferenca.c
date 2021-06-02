/*
##########################################> 1007 - Diferença <#######################################
#                                                                                                   #
# Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto       #
#  de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).                   #
#                                                                                                   #
# Entrada                                                                                           #
# O arquivo de entrada contém 4 valores inteiros.                                                   #
#                                                                                                   #
# Saída                                                                                             #
# Imprima a mensagem DIFERENCA com todas as letras maiúsculas,                                      #
# conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.                     #
#                                                                                                   #
#####################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    int A, B, C, D; // Declarando as variáveis A, B, C e D
    
    scanf("%i", &A); // Lendo o valor digitado pelo usuário e armazenando na variável A
    scanf("%i", &B); // Lendo o valor digitado pelo usuario e armazenando na variável B
    scanf("%i", &C); // Lendo o valor digitado pelo usuário e armazenando na variável C
    scanf("%i", &D); // Lendo o valor digitado pelo usuário e armazenando na variável D
    printf("DIFERENCA = %i\n",(A*B-C*D)); // Calculando a diferença e imprimindo na tela
    return 0;
}
