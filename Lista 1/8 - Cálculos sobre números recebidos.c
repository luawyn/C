#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float numero=0, quadrado=0, cubo=0, raizq=0, raizc=0;

printf("Digite um numero positivo e maior que zero: ");
scanf("%f", &numero);

if(numero > 0){
	quadrado = pow(numero,2);
	printf("O numero digitado ao quadrado: %.2f\n", quadrado);

	cubo = pow(numero,3);
	printf("O numero digitado ao cubo: %.2f\n", cubo);

	raizq = sqrt(numero);
	printf("Raiz quadrada do numero digitado: %.2f\n", raizq);

	raizc = cbrt(numero);
	printf("Raiz ao cubo do numero digitado: %.2f\n", raizc);
}

else{
	printf("Digite um numero valido!\n");
}


return 0;
}
