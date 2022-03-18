#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

float sm=0;

printf("Digite o saldo média do último ano: ");
scanf("%f", &sm);

  if (sm < 500){
  	printf("Valor do crédito: 0 reais \n");
    }
    
  else if (sm >= 500 && sm < 1000){
  	sm = sm * 0.3;
    printf("Valor do crédito: %.2f reais \n", sm);
    }
    
    else if (sm>= 1000 && sm < 3000){
    sm = sm * 0.4;
    printf("Valor do crédito: %.2f reais \n", sm);
    }
         
  else{
  	sm = sm * 0.5;
    printf("Valor do crédito: %.2f reais \n", sm);
    }

return 0;
}
