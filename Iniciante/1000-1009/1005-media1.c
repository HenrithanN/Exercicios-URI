/*
##########################################> 1005 - Média 1 <#########################################
#                                                                                                   #
# Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno.# 
# A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5     #
# (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0,                     #
# sempre com uma casa decimal.                                                                      #
#                                                                                                   #
# Entrada                                                                                           #
# O arquivo de entrada contém 2 valores com uma casa decimal cada um.                               #
#                                                                                                   #
# Saída                                                                                             #
# Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o       # 
# ponto decimal e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla   # 
# precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o        #
# resultado, caso contrário, você receberá "Presentation Error".                                    #
#                                                                                                   #
#####################################################################################################
*/

#include <stdio.h>
 
int main() {
 
double A, B; // Declarando as variáveis A e B
   
   scanf("%lf",&A); // Lendo o valor digitado pelo usuário e atribuindo à variavel A
   scanf("%lf",&B); // Lendo o valor digitado pelo usuário e atribuindo à variável B
   printf("MEDIA = %.5lf\n",(((A*3.5)/11)+((B*7.5)/11))); // Imprimindo na tela a Média Ponderada

//(( A* 3.5)/11) calculo para o valor A digitado pelo usuário + (( B* 7.5)/11) calculo para o valor A digitado pelo usuário
/* 
    Como o valor A tem peso 3.5, o multiplicamos por 3.5
    Como o valor B tem peso 7.5, o multiplicamos por 7.5
    Como a soma dos pesos é 11, dividimos cada valor por 11
*/
    return 0;
}