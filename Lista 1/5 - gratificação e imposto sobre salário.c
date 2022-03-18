#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float salario=0, bonus=0, imposto=0;

printf("Digite o salario: ");
scanf("%f", &salario);

bonus = (5 * salario / 100);

imposto = (7 * salario / 100);

salario = salario + bonus - imposto;

printf("O valor do salario com bonus de 5%% e imposto de 7%%: %.2f\n", salario);

return 0;
}
