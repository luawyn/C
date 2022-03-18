#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float alt=0, raio=0, pi= 3.1416, vol;

printf("A altura do cilindro: ");
scanf("%f", &alt);
printf("O raio do cilindro: ");
scanf("%f", &raio);

vol = alt + pow(raio,2) + pi;

printf("O volume do cilindro: %.2f\n", vol);

return 0;
}
