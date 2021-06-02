/*
#####################################> 1002 - Area do Círculo <#######################################
# A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este   #
# problema que π = 3.14159:                                                                          #
# - Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.            #
#                                                                                                    #
# Entrada                                                                                            #
# A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.           #
#                                                                                                    #
# Saída                                                                                              #
# Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4     #
# casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, #
# não esqueça de imprimir o fim de linha após o resultado,                                           #
# caso contrário, você receberá "Presentation Error".                                                #
######################################################################################################
*/
#include <stdio.h>
 
int main() {
 
    double raio; // Declarando a variável raio
    double pi = 3.14159; // Declarando a variável pi
    
    scanf("%lf", &raio); // Lendo o valor digitado pelo usuário e atribuindo à variável raio
    double area = (pi * (raio * raio)); // Declarando a variavel area e atribuindo a ela o calculo da área
    printf("A=%.4lf\n",area); // Imprimindo na tela o calculo da area
    return 0;
}