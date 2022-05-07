#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	int x;
	int y;
	int z;
	char rotulo[4];
}Ponto;

typedef struct{
	Ponto tpPonto[10];
}figura;

void preenche(figura *vetor)
{	
	FILE *file;
	file = fopen("desenho.dat", "wb");
	int i, j = 0;
	for (i = 0; i < 10; i++){
		printf("Elemento %d \n", j+1);
		printf("Digite a letra identificadora do ponto: "); scanf("%s", vetor->tpPonto[i].rotulo); fflush(stdin);
		printf("x: "); scanf("%d", &vetor->tpPonto[i].x);
		printf("y: "); scanf("%d", &vetor->tpPonto[i].y);
		printf("z: "); scanf("%d", &vetor->tpPonto[i].z);
		
		fprintf(file, "Ponto: %s ->", vetor->tpPonto[i].rotulo);
		fprintf(file, " x = %d;", vetor->tpPonto[i].x);
		fprintf(file, " y = %d;", vetor->tpPonto[i].y);
		fprintf(file, " z = %d", vetor->tpPonto[i].z);
		fprintf(file, "\n\n");
		
		fflush(stdin);
		printf("\n");
		j++;
	}
	fclose(file);
}

void imprime(figura *vetor)
{	
	FILE *file;
	file = fopen("desenho.dat", "rb");
	char frase[500];
	
	if (file == NULL){
		printf("Erro ao abrir o arquivo");
	}
	
	else{
		while (fgets(frase, 500, file) != NULL){
			printf("%s", frase);
		}	
	}
	fclose(file);
}

void apaga(figura *vetor, char letra[4])
{	
	FILE *file;
	file = fopen("desenho.dat", "wb");
	int i, somador = 1, contador = 1;
	
	if (somador == 1){
		for (i = 0; i < 10; i++){
			if (*vetor->tpPonto[i].rotulo == letra[0]){
				*vetor->tpPonto[i].rotulo = '#';
				somador ++;
				contador ++;
			}
			
			fprintf(file, "Ponto: %s ->", vetor->tpPonto[i].rotulo);
			fprintf(file, " x = %d;", vetor->tpPonto[i].x);
			fprintf(file, " y = %d;", vetor->tpPonto[i].y);
			fprintf(file, " z = %d", vetor->tpPonto[i].z);
			fprintf(file, "\n\n");
		}
		
		if (contador > 1){
			printf("Rotulo(s) apagado(s) com sucesso! Confira no arquivo criado!");
		}
	}
	if (somador == 1){
		printf("O rotulo informado nao foi encontrado!");
	}	
}

int main(void)
{	
	char letra[4];
	figura espacoR3;
	
	
	preenche(&espacoR3);
	imprime(&espacoR3);
	
	printf("\nDigite um rotulo para apagar: "); scanf("%s", &letra);
	apaga(&espacoR3, letra);
	
	return 0;
}
