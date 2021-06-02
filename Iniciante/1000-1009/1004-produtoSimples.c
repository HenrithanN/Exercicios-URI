/*
#####################################> 1004 - Produto Simples <#######################################
# Leia dois valores inteiros, no caso para variáveis A e B. A seguir,                                #
# calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.     #
#                                                                                                    #
# Entrada                                                                                            #
# A entrada contém 2 valores inteiros.                                                               #
#                                                                                                    #
# Saída                                                                                              #
# Imprima a mensagem "PROD" e a variável PROD conforme exemplo abaixo, com um espaço em branco       #
# antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto,                # 
# caso contrário seu programa apresentará a mensagem: "Presentation Error".                          #
######################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    int A, B; // Declarando as variáveis A e B
    
    scanf("%i",&A); // Lendo o valor digitado pelo usuário e atribuindo à variável A
    scanf("%i",&B); // Lendo o valor digitado pelo usuário e atribuindo à variável B
    
    int PROD = (A * B); // Declarando a váriável PROD e atribuindo à ela a multiplicacao A * B
    printf("PROD = %i\n", PROD); // Imprimindo na tela a variável PROD com o produto de A * B
    return 0;
}