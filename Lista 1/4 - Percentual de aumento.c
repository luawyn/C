#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float salario=0, percentual=0;

printf("Digite o salario: ");
scanf("%f", &salario);
printf("Digite o percentual de aumento em porcentagem: ");
scanf("%f", &percentual);

salario = salario * (1 + (percentual / 100));

printf("O valor do novo salario: %.2f\n", salario);

return 0;
}
