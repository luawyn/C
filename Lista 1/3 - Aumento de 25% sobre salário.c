#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float salario=0;

printf("Digite o salario: ");
scanf("%f", &salario);
printf("O valor do salario apos o aumento de 25%%: %.2f\n", salario*1.25);

return 0;
}
