#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int a;

printf("Digite um valor para A: ");
scanf("%d", &a);

if(a%3==0 && a%7==0){
	printf("Multiplo. ");
}

else{
	printf("Nao e multiplo. ");
}



return 0;
}
