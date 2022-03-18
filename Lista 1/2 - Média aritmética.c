#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float nota1=0,nota2=0,nota3=0;

printf("Digite a primeira nota: ");
scanf("%f",&nota1);
printf("Digite a segunda nota: ");
scanf("%f",&nota2);
printf("Digite a terceira nota: ");
scanf("%f",&nota3);
printf("A media das tres notas: %.2f\n",(nota1+nota2+nota3)/3);



return 0;
}
