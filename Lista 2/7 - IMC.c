#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float peso=0, altura=0, imc;

printf("Digite a sua altura: ");
scanf("%f", &altura);
printf("Digite o seu peso: ");
scanf("%f", &peso);

imc = peso / (altura * altura);

printf("Valor de referencia: %.2f\n", imc);

  if (imc < 20){
      printf("Abaixo \n");
    }
    
  else if (imc >= 20 && imc < 25){
      printf("Normal \n");
    }
    
    else if (imc >= 25 && imc < 30){
      printf("Sobrepeso \n");
    }
    
    else if (imc >= 30 && imc < 40){
      printf("Obeso \n");
    }
        
  else{
      printf("Morbido \n");
    }

return 0;
}
