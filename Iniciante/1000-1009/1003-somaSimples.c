/*
#####################################> 1003 - Soma Simples <##########################################
# Leia dois valores inteiros, no caso para variáveis A e B. A seguir,                                #
# calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.     #
#                                                                                                    #
# Entrada                                                                                            #
# A entrada contém 2 valores inteiros.                                                               #
#                                                                                                    #
# Saída                                                                                              #
# Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes            #
# e depois da igualdade seguido pelo valor correspondente à soma de A e B.                           #
# Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado,                  #
# caso contrário, você receberá "Presentation Error".                                                #
######################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    int A, B; // Declarando as variáveis A e B
    
    scanf("%i", &A); // Lendo o valor digitado pelo usuário e armazenando na variável A
    scanf("%i", &B); // Lendo o valor digitado pelo usuário e armazenando na variável B
    
    int SOMA = A + B; // Declarando a variável soma e atribuindo à ela a soma de A + B
    printf("SOMA = %i\n", SOMA); // Imprimindo na tela a SOMA de A + B
 
    return 0;
}