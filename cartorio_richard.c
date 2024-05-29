#include <stdio.h> //biblioteca de comunicaçao do usuario 

#include <stdlib.h> // biblioteca de alocaçao de espaço em memoria 

#include <locale.h> //biblioteca de locaçao de texto por regiao 

#include <string.h> //biblioteca das strings 
int registro() //função responsavel por cadastrar o usuario
{
	//conjunto de variaveis
	#include <locale.h>
	char arquivo[40];

 char cpf [40];
 char nome [40];
 char sobrenome [40];
 char cargo [40];
 // fim da criaçao de variaveis 
 printf("digite o CPF a ser cadastrado");// coletando informaçoes do usuario 
 scanf("%s", cpf);//se refere a string 
  
  strcpy (arquivo, cpf); // responsavel por copiar osa valores das strings 
  
  FILE *file;// cria o arquivo
  file = fopen(arquivo,"w");//cria o arquivo 
  fprintf(file,cpf); //salvo o valor da variavel
  fclose(file);//fecho o arquivo 
  
  file = fopen(arquivo,"a");//cria arquivo
  fprintf (file,",");//salva o vetor 
  fclose(file);//fecha o arquivo 
  
  
  printf ("\n \n digite o nome a ser cadastrado:\n \n  ");//cadastrando o usuario 
  scanf("%s",nome);// se refere a string 
  
  file = fopen(arquivo,"a");//cria arquivo
  	fprintf (file,nome);//salva o valor da variavel
    fclose (file);//fecha arquivo 
    
    file = fopen(arquivo,"a");//cria arquivo
  	fprintf (file,",");//salva variavel
    fclose (file);//fecha arquivo
    
     printf("\n \n digite o sobrenome a ser cadastrado:\n \n  ");// cadastro de usuario
      scanf("%s",sobrenome);//se refere a string
      
      file = fopen(arquivo,"a");//cria arquivo
      fprintf(file,sobrenome);//salva variavel
    fclose(file);//fecha arquivo
    
     file = fopen(arquivo,"a");//cria arquivo
  	fprintf (file,",");//salva variavel
    fclose (file);//fecha arquivo
    
    printf("\n\n digite o cargo a ser cadastrado:\n\n ");//cargo do usuario
    scanf("%s",cargo);//se refere a string
    
    file = fopen (arquivo,"a" );//cria arquivo
    fprintf(file,cargo);//salva variavel
    fclose(file);//fecha arquivo
    
    system ("pause");//pausa sistema 
    
    
    
    
}

int consulta()//funçao para consultar usuario
{
#include <locale.h> //biblioteca de texto por regiao 

	char cpf[40];//inicio das variaveis 
	char conteudo[200];//fim das variaveis 
	
	printf("\n\n digite o cpf a ser consultado:\n\n");// consultar usuario 
	scanf ("%s",cpf);//se refere a string
	
	FILE * file;//abre arquivo
	file = fopen(cpf,"r" );//le variavel 
	if(file == NULL)//caso nao seja encontrado o arquivo 
  {
  	printf("\n\n nao foi possivel acessar o arquivo, nao localizado!.\n\n");//arquivo nao foi encontrado 
  	
  }
  while(fgets(conteudo, 200, file) !=NULL)//le arquivos 
  {
  	printf("\n\n essas sao as informaçoes do usuario:\n\n");// as infomaçoes registradas 
  	printf("%s", conteudo);//mostra o conteudo 
  	printf("\n\n");//espaços 
  	
  }
    system ("pause");//pausa 
}

 
int deletar()//funçao de deletar os arquivos 
{
	char cpf[40];//variaveis 
	
	printf("\n\n digite o cpf a ser deletado:\n\n");//deletar nomes 
	scanf("%s",cpf);//se refere a string 
	
	remove(cpf);//funçao de biblioteca que deleta 
	
	FILE *file;//abre arquivo
	file = fopen(cpf,"r");//le variavel
	if(file == NULL);//caso nao tenha o que ser deletado 
	{
		printf("\n\n o usuario nao se encontra no sistema!\n\n");//caso nao encontre o usuario 
		system("pause");//pausa o sistema 
	}
}
int main () // funçao das opcoes 
{
		int x=1;//inicio das opcoes 
	int op=0;
	for(x=1;x=1;)//dim das ocpoes 
	{
		
	system("cls");
	
	int opcao=0;
	
	 setlocale(LC_ALL, "Portuguese");// definindo a linguagem
	
	 printf("### Cartório da EBAC ###\n\n");//inicio do menu
	 printf ("Escolha a opcão desejada do menu:\n\n");
	 printf ("\t1 - Registrar nomes\n");
  	printf ("\t2 - Consultar nomes\n");
 	printf ("\t3 - Deletar nomes\n");//fim do menu
 	printf("opcao:");
	
 	scanf("%d",&opcao);//armazenando a escolha do usuario
	
     system("cls");//responsavel por limpar a tela
     
   switch(opcao)  //inicio da seleçao do menu 
   {
   	case 1://inicio da chamada das funçoes
   	registro();
   	break;
	   	
   	case 2:
   consulta();
   	break;
   	
   	case 3:
   	deletar();
   	break;
   	
   
   	default:
   	printf("essa opcao nao esta disponivel");
   	system ("pause");
   	break;//fim da chamada de seleçao 
   }
}
}
