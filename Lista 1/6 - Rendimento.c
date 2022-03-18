#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{

float deposito=0, taxa=0, montante=0, juros=0;

	printf("Digite o valor do deposito: ");   
	scanf("%f", &deposito);
	printf("Digite o valor da taxa de juros em porcentagem: ");
	scanf("%f", &taxa);

	juros = deposito * taxa / 100;

	printf("Valor do rendimento: %.2f\n", juros);

	montante = deposito + juros;

	printf("Valor total depois do rendimento: %.2f\n", montante);
  
return 0;                                     
  
} 
