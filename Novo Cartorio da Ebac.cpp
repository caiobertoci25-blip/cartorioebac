#include <stdio.h>//biblioteca de comunica��o com o usu�rio
#include <stdlib.h>//biblioteca de aloca��o de espa�o em memoria
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
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
	fprintf(file, cpf);//salvo o valor da vari�vel
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
	printf("N�o foi posivel abrir o arquivo, n�o localizado.\n");
	
	while(fgets(conteudo, 200, file) !=NULL)
	
	printf("\nEssas s�o as informa��es do usu�rio");
	printf("%s", conteudo);
	printf("\n\n");
	
	
	system("pause");
	
	
	
	
}



int deletar()
{
	printf("voc� escolheu deletar nomes!\n");
	system("pause");
}


int main()

{	
	int opcao=0;//definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	 
	{
		
	system("cls");
	
	setlocale(LC_ALL, "portuguese");//inicio do menu
	printf("###cart�rio da EBAC###\n\n");
	printf("escolha a op��o desejada\n\n");
	printf("\t1 - registra nomes:\n");
	printf("\t2 - consultar nomes:\n");
	printf("\t3 - deletar nomes:\n\n");
	printf("\t4 - sair do sistema\n ");
	
	printf("opc�o:");//fim do menu
	
	scanf("%d", &opcao);//armazenando escolha do us�ario
	
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
		printf("esta op��o n�o esta disponivel!\n");
		system("pause");
		break;
		}

	
	}
	
	
}
