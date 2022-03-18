#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float numero1=0, numero2=0, resultado=0;

printf("Digite dois numeros maiores que zero: ");
scanf("%f", &numero1);
scanf("%f", &numero2);

if(numero1 > 0 && numero2 > 0){
	resultado = pow(numero1,numero2);
	printf("Resultado de um numero elevado ao outro: %f\n", resultado);
}

else{
	printf("Digite um numero valido!\n");
}


return 0;
}
