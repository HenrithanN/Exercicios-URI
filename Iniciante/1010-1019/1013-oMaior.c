/*
##########################################> 1013 - O Maior  <########################################
#                                                                                                   #
# Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da      #
# mensagem "eh o maior". Utilize a fórmula: (A + B+abs(A-B))/2                                      #
# Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo,         #
# portanto é necessário para chegar no resultado esperado.                                          #
# Entrada                                                                                           #
# O arquivo de entrada contém três valores inteiros.                                                #
#                                                                                                   #
# Saída                                                                                             #
# Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".                 #
#                                                                                                   #
#####################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    int A, B, C;
    
    scanf("%i", &A);
    scanf("%i", &B);
    scanf("%i", &C);
 
    int maior = (A + B+abs(A-B))/2;
    if(C >= maior){
        printf("%i eh o maior\n",C);
    }else{
        printf("%i eh o maior\n",maior);
    }
    return 0;
}