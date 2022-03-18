#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int nota1, nota2, media;

printf("Digite o valor da primeira nota: ");
scanf("%d", &nota1);
printf("Digite o valor da segunda nota: ");
scanf("%d", &nota2);

media = (nota1 + nota2) / 2;

  if (media >= 7)
    {
      printf("Aprovado \n", media);
    }
    
  else if (media > 3 && media < 7) 
    {
      printf("Exame \n", media);
    }
    
  else /* media < 3 */
    {
      printf("Reprovado \n", media);
    }

return 0;
}
