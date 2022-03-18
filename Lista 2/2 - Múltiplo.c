#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a, b, resto;

printf("Digite um valor para A: ");
scanf("%d", &a);
printf("Digite um valor para B: ");
scanf("%d", &b);

resto = a % b;

if(resto ==0){
	printf("Multiplo. ");
}

else{
	printf("Nao e multiplo. ");
}



return 0;
}
