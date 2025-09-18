#include <stdio.h>//biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca de alocação de espaço em memoria
#include <locale.h>//biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsavel por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];	
	
	printf("digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf);
	
	FILE *file;//criar o arquivo
	file = fopen(arquivo, "w");//criar o arquivo
	fprintf(file, cpf);//salvo o valor da variável
	fclose(file);//fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	fprintf(file, nome);
	fclose(file);
	
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	
	
	
	printf("digite o cargo a ser cadastrado");
	scanf("%s", cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
}


int consultar()
{
	setlocale(LC_ALL, "portuguese");

	char cpf[40];
	char conteudo[200];
	
	printf("digite o cpf a ser consultado");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	printf("Não foi posivel abrir o arquivo, não localizado.\n");
	
	while(fgets(conteudo, 200, file) !=NULL)
	
	printf("\nEssas são as informações do usuário");
	printf("%s", conteudo);
	printf("\n\n");
	
	
	system("pause");
	
	
	
	
}



int deletar()
{
	printf("você escolheu deletar nomes!\n");
	system("pause");
}


int main()

{	
	int opcao=0;//definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	 
	{
		
	system("cls");
	
	setlocale(LC_ALL, "portuguese");//inicio do menu
	printf("###cartório da EBAC###\n\n");
	printf("escolha a opção desejada\n\n");
	printf("\t1 - registra nomes:\n");
	printf("\t2 - consultar nomes:\n");
	printf("\t3 - deletar nomes:\n\n");
	printf("\t4 - sair do sistema\n ");
	
	printf("opcão:");//fim do menu
	
	scanf("%d", &opcao);//armazenando escolha do usúario
	
	system ("cls");
	
	switch(opcao)
	{
		case 1:
		registro();
		break;
			
		case 2:
		consultar();
		break;
			
		case 3:
		deletar();
		break;
		
		case 4:
		printf("obrigado por ultilizar o sistema ");
		return 0;
		break;
	
			
		default:
		printf("esta opção não esta disponivel!\n");
		system("pause");
		break;
		}

	
	}
	
	
}
