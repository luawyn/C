#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese");

int idade=0;

printf("Digite a idade em anos: ");
scanf("%d", &idade);

	if (idade < 10){
  		printf("Valor da mensalidade: R\$ 30.00 \n");
    }
    
	else if (idade >= 10 && idade <= 29){
  		printf("Valor da mensalidade: R\$ 60.00 \n");
    }
    
	else if (idade >= 30 && idade <= 45){
  		printf("Valor da mensalidade: R\$ 120.00 \n");
    }
    
    else if (idade >= 46 && idade <= 59){
  		printf("Valor da mensalidade: R\$ 150.00 \n");
    }
	
	else if (idade >= 60 && idade <= 65){
  		printf("Valor da mensalidade: R\$ 250.00 \n");
    }
	     
	else{
  		printf("Valor da mensalidade: R\$ 400.00 \n");
    }

return 0;
}

