#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int idade;

printf("Digite a sua idade: ");
scanf("%d", &idade);

  if (idade <= 15){
      printf("Nao eleitor \n");
    }
    
  else if (idade >= 18 && idade <= 64){
      printf("Eleitor obrigatorio \n");
    }
    
  else{
      printf("Facultativo \n");
    }

return 0;
}
