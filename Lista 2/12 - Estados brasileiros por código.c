#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int cod=0;

printf("Digite o codigo do estado: ");
scanf("%d", &cod);

	switch(cod){
		case 1: 
		printf("\n Nome: Acre \n Sigla: AC \n Capital: Rio Branco \n Regiao: Norte \n");
		break;
		
		case 2: 
		printf("\n Nome: Alagoas \n Sigla: AL \n Capital: Maceio \n Regiao: Nordeste\n");
		break;
		
		case 3: 
		printf("\n Nome: Amapa \n Sigla: AP \n Capital: Macapa \n Regiao: Norte \n");
		break;
		
		case 4: 
		printf("\n Nome: Amazonas \n Sigla: AM \n Capital: Manaus \n Regiao: Norte \n");
		break;
		
		case 5: 
		printf("\n Nome: Bahia \n Sigla: BA \n Capital: Salvador \n Regiao: Nordeste \n");
		break;
		
		case 6: 
		printf("\n Nome: Ceara \n Sigla: CE \n Capital: Fortaleza \n Regiao: Nordeste \n");
		break;
		
		case 7: 
		printf("\n Nome: Espirito Santo \n Sigla: ES \n Capital: Vitoria \n Regiao: Sudeste \n");
		break;
		
		case 8: 
		printf("\n Nome: Goias \n Sigla: GO \n Capital: Goiana \n Regiao: Centro-Oeste \n");
		break;
		
		case 9: 
		printf("\n Nome: Maranhao \n Sigla: MA \n Capital: Sao Luis \n Regiao: Nordeste \n");
		break;
		
		case 10: 
		printf("\n Nome: Mato Grosso \n Sigla: MT \n Capital: Cuiaba \n Regiao: Centro-Oeste \n");
		break;
		
		case 11: 
		printf("\n Nome: Mato Grosso do Sul \n Sigla: MS \n Capital: Campo Grande \n Regiao: Centro-Oeste \n");
		break;
		
		case 12: 
		printf("\n Nome: Minas Gerais \n Sigla: MG \n Capital: Belo Horizonte \n Regiao: Sudeste \n");
		break;
		
		case 13: 
		printf("\n Nome: Para \n Sigla: PA \n Capital: Belem \n Regiao: Norte \n");
		break;
		
		case 14: 
		printf("\n Nome: Paraiba \n Sigla: PB \n Capital: Joao Pessoa \n Regiao: Nordeste \n");
		break;
		
		case 15: 
		printf("\n Nome: Parana \n Sigla: PR \n Capital: Curitiba \n Regiao: Sul \n");
		break;
		
		case 16: 
		printf("\n Nome: Pernambuco \n Sigla: PE \n Capital: Recife \n Regiao: Nordeste \n");
		break;
		
		case 17: 
		printf("\n Nome: Piaui \n Sigla: PI \n Capital: Teresina \n Regiao: Nordeste \n");
		break;
		
		case 18: 
		printf("\n Nome: Rio de Janeiro \n Sigla: RJ \n Capital: Rio de Janeiro \n Regiao: Sudeste \n");
		break;
		
		case 19: 
		printf("\n Nome: Rio Grande do Norte \n Sigla: RS \n Capital: Natal \n Regiao: Nordeste \n");
		break;
		
		case 20: 
		printf("\n Nome: Rio Grande do Sul \n Sigla: RS \n Capital: Porto Alegre \n Regiao: Sul \n");
		break;
		
		case 21: 
		printf("\n Nome: Rondonia \n Sigla: RO \n Capital: Porto Velho \n Regiao: Norte \n");
		break;
		
		case 22: 
		printf("\n Nome: Roraima \n Sigla: RR \n Capital: Boa Vista \n Regiao: Norte \n");
		break;
		
		case 23: 
		printf("\n Nome: Santa Catarina \n Sigla: SC \n Capital: Florianopolis \n Regiao: Sul \n");
		break;
		
		case 24: 
		printf("\n Nome: Sao Paulo \n Sigla: SP \n Capital: Sao Paulo \n Regiao: Sudeste \n");
		break;
		
		case 25: 
		printf("\n Nome: Sergipe \n Sigla: SE \n Capital: Aracaju \n Regiao: Nordeste \n");
		break;
		
		case 26: 
		printf("\n Nome: Tocantins \n Sigla: TO \n Capital: Palmas \n Regiao: Norte \n");
		break;
		
		default: printf("Inexistente!\n");
	}
    
    return 0;
}

