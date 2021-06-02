/*
##########################################> 1008 - Salário <#########################################
#                                                                                                   #
# Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas,         #
# o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e    #
# o salário do funcionário, com duas casas decimais.                                                #
#                                                                                                   #
# Entrada                                                                                           #
# O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais,                #
# representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por    #
# hora trabalhada, respectivamente.                                                                 #
#                                                                                                   #
# Saída                                                                                             #
# Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço            #
# em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco  #
# após o $.                                                                                         #
#                                                                                                   #
#####################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    int A, B; // Declarando as variáveis A e B
    double C; // Declarando a variável C
    
    scanf("%i",&A); // Lendo o valor digitado pelo usuário e armazenando na variável A
    scanf("%i",&B); // Lendo o valor digitado pelo usuário e armazenando na variável B
    scanf("%lf",&C); // Lendo o valor digitado pelo usuário e armazenando na variável C
    
    printf("NUMBER = %i\n",A); // Imprimindo na tela o numero armazenado na variável A
    printf("SALARY = U$ %.2lf\n",(C*B)); // Imprimindo na tela o calculo do Salário
 
    return 0;
}
