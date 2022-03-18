#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int nascimento=0, atual=0, idade=0, idade2=0;

printf("O ano de nascimento: ");
scanf("%d", &nascimento);
printf("O ano atual: ");
scanf("%d", &atual);

idade = atual - nascimento;
printf("A idade atual: %d\n", idade);

idade2 = 2017 - nascimento;
printf("A idade no ano de 2017: %d\n", idade2);

return 0;
}
