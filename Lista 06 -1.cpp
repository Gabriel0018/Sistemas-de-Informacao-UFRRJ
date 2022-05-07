#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[81];
    int idade;
    char curso[51];
    float CR;
    int matricula;
}aluno;

typedef struct{
    aluno discente;
    float notas;
    int frequencia;
}alunomat;

typedef struct{
    int codigo;
    char nome_disciplina[81];
    alunomat turma[40];
}disciplina;

void criar_disciplina(disciplina *aluno)
{   
    int i;
    fflush(stdin);
    printf("Digite o codigo da disciplina: "); scanf("%i", &aluno->codigo);
    fflush(stdin);
    printf("Digite o nome da disciplina: "); fgets(aluno->nome_disciplina, 80, stdin);
    
    for (i = 0; i < 40; i++){
        aluno->turma[i].discente.matricula = 0;
    }
    printf("\n\n");
}

void incluir_aluno(disciplina *aluno)
{   
	fflush(stdin);
    int i, c = 0;
    for (i; i < 40; i++){
        if(aluno->turma[i].discente.matricula == 0){
            printf("\nNome do aluno: "); fgets(aluno->turma[i].discente.nome, 80, stdin); 
            printf("Idade: "); scanf("%d", &aluno->turma[i].discente.idade); fflush(stdin);
            printf("Nome do curso: "); fgets(aluno->turma[i].discente.curso, 50, stdin); 
            printf("Informe o CR: "); scanf("%f", &aluno->turma[i].discente.CR); fflush(stdin);
            printf("Matricula: "); scanf("%d", &aluno->turma[i].discente.matricula);
            printf("\n\n");
            break;
        }
        else{
            c ++;
        }
        if (c == 40){
            printf("A turma esta com sua capacidade maxima de discentes!");
        }
    }
}
void excluir_aluno(disciplina *aluno)
{   
    int matricula_digitada, i, registrador = 0;
    printf("Informe o numero de matricula do discente: "); scanf("%d", &matricula_digitada);
    for (i = 0; i < 40; i++){
        if (matricula_digitada == aluno->turma[i].discente.matricula){
            aluno->turma[i].discente.matricula = 0;
            printf("Aluno exluido da turma!");
            registrador ++;
            printf("\n\n");
            break;
        }   
    }
    if (registrador == 0){
    	printf("A matricula informada nao condiz com nenhum aluno com status ativo na turma");
    	printf("\n\n");
	}
}

void listar_alunos(disciplina *aluno)
{
    int i, cabecalho = 0;
    for (i = 0; i < 40; i++){
        if (aluno->turma[i].discente.matricula != 0){
            cabecalho++;
            printf("%d => %s", cabecalho, aluno->turma[i].discente.nome);
            printf("Idade = %d\nCurso = %s", aluno->turma[i].discente.idade, aluno->turma[i].discente.curso);
            printf("Matricula = %d\nCoeficiente de Rendimento (CR) = %.2f\n", aluno->turma[i].discente.matricula, aluno->turma[i].discente.CR);
            printf("\n\n");
        }
    }
}

void CR_medio(disciplina *aluno)
{
    float cr, total = 0, alu = 0;
    int i;
    
    for(i = 0; i < 40; i++){
        if(aluno->turma[i].discente.matricula != 0){
        	alu++;
            total += aluno->turma[i].discente.CR;
        }  
    }
    if (alu == 0){
    	printf("Nao ha discentes matriculados na turma para emitir a media do CR\n\n");
	}
	else{
		cr = total / alu;
    	printf("CR medio da turma = %.2f\n\n", cr);
	}	
}
void atribuir_nota(disciplina *aluno)
{   
    int matricula_informada, i, registrador = 0;
    printf("Informe a matricula do aluno: "); scanf("%d", &matricula_informada);
    for(i = 0; i < 40; i++){
        if (matricula_informada == aluno->turma[i].discente.matricula){
            printf("Informe a nota final: "); scanf("%f", &aluno->turma[i].notas);
            registrador ++;
            printf("\n\n");
            break;
    	}
    	
    }
    if (registrador == 0){
    	printf("A matricula informada nao condiz com nenhum aluno com status ativo na turma");
    	printf("\n\n");
	}
    
}
void atribuir_frequencia(disciplina *aluno)
{
    int matricula_informada, i, aulas, faltas, sub, registrador = 0;
    float freq;
    printf("Informe a matricula do aluno: "); scanf("%d", &matricula_informada);
    for(i = 0; i < 40; i++){
        if (matricula_informada == aluno->turma[i].discente.matricula){
            printf("Informe a quantidade total de aulas: "); scanf("%d", &aulas);
            printf("Informe quantas aulas o aluno faltou: "); scanf("%d", &faltas);
            sub  = aulas - faltas;
            freq = ((float) sub * 100) / aulas; 
            aluno->turma[i].frequencia = freq;
            registrador ++;
            printf("\n\n");
            break;
    	}
    }
    if (registrador == 0){
    	printf("A matricula informada nao condiz com nenhum aluno com status ativo na turma");
    	printf("\n\n");
	}
}

void imprimir_boletim(disciplina *aluno)
{
    int i, cabecalho = 0;
    for (i = 0; i < 40; i++){
        if (aluno->turma[i].discente.matricula != 0){
            cabecalho++;
            printf("%d. %s", cabecalho, aluno->turma[i].discente.nome);
            printf("Idade = %d\nCurso = %s", aluno->turma[i].discente.idade, aluno->turma[i].discente.curso);
            printf("Matricula = %d\nCoeficiente de Rendimento (CR) = %.2f\n", aluno->turma[i].discente.matricula, aluno->turma[i].discente.CR);
            printf("Nota: = %.2f\nFrequencia = %d%%\n\n", aluno->turma[i].notas, aluno->turma[i].frequencia);
        }    
    }
    printf("\n\n");
}
void fechar_disciplina(disciplina *aluno)
{   
    int i;
    aluno->codigo = ' ';
    strcpy(aluno->nome_disciplina," ");
    for (i = 0; i < 40; i++){
        if(aluno->turma[i].discente.matricula == 0){
            break;
        }
        else{
            aluno->turma[i].discente.matricula = 0;
        }
    }
}

int main(void)
{
    int leitor, inicializar = 1;
    disciplina aluno;
    do
    {   
        if (inicializar == 1)
        {
            while(1){
                if (leitor == 1){
                    printf("----Criando disciplina----\n");
                    criar_disciplina(&aluno);
                    inicializar = 0;
                    break;
                }
                else if (leitor == 2){
                    exit(1);
            }
                printf("(1)Criar disciplina\n(2)Sair\n");
                printf("Opcao: ");
                scanf("%d", &leitor);
            }
        }
        printf("(1)Criar disciplina\n(2)Incluir aluno\n(3)Excluir aluno\n");
        printf("(4)Adicionar nota ao aluno\n(5)Registrar frequencia do aluno\n");
        printf("(6)Listar alunos\n(7)Calcular CR da turma\n");
        printf("(8)Imprimir boletim\n(9)Fechar disciplina\n(10)sair");
        printf("\nOpcao: ");
        scanf("%d", &leitor);
        printf("\n");
        
        switch(leitor){
            case 1:
                printf("----Criando disciplina----\n");
                criar_disciplina(&aluno);
                break;
            case 2:
                printf("----Incluindo aluno----\n");
                incluir_aluno(&aluno);
                break;
            case 3:
                printf("----Excluindo aluno----\n");
                excluir_aluno(&aluno);
                break;
            case 4:
                printf("----Adicionando nota---\n");
                atribuir_nota(&aluno);
                break;
            case 5:
                printf("----Atribuindo frequencia----\n");
                atribuir_frequencia(&aluno);
                break;
            case 6:
                printf("----Listando alunos----\n");
                listar_alunos(&aluno);
                break;
            case 7:
                printf("----Calculando CR da turma----\n");
                CR_medio(&aluno);
                break;
            case 8:
                printf("----Imprimindo boletim----\n");
                imprimir_boletim(&aluno);
                break;
            case 9:
                printf("Disciplina fechada com sucesso!\n");
                fechar_disciplina(&aluno);
                while(1){
                    if (leitor == 1){
                        printf("----Criando disciplina----\n");
                        criar_disciplina(&aluno);
                        break;
                    }
                    else if (leitor == 2){
                        exit(1);
                    }
                    printf("(1)Criar disciplina\n(2)Sair\n");
                    printf("Opcao: ");
                    scanf("%d", &leitor);
                }
            case 10:
                break;
                
            default:
                printf("Digite apenas uma das opções apresentadas!");
                break;
        }       
    }
    while(leitor != 10);
    
    return 0;
}


