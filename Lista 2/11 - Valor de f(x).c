#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

float x=0;

printf("Digite o valor de x: ");
scanf("%f", &x);

	if (x <= 1){
  		printf("Valor de f(x): 1 \n");
    }
    
	else if (x > 1 && x <= 2){
  		printf("Valor de f(x): 2 \n");
    }
    
	else if (x > 2 && x <= 3){
		x = pow(x,2);
  		printf("Valor de f(x): %.2f \n", x);
    }
    
    else{
    	x = pow(x,3);
  		printf("Valor de f(x): %.2f \n", x);
    }

return 0;
}

