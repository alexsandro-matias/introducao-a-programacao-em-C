/*****************************************************************************************
    Universidade do Estado de Santa Catarina - UDESC
    Centro de Ciências Tecnológicas - CCT
    Bacharelado em Ciência da Computação - BCC
    Acadêmico: Reginaldo de Matias
    E-mail: reginaldo.matias@gmail.com
    Trabalho Final: Linguagem de Programação - I (LPG-I)
******************************************************************************************/
 
#include <stdio.h>
//#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//#include <io.h>
//#include <stdio.h.>
#define nome_arquivo "dados.txt"
#define temp "temps.bin"
typedef struct endereco
{
 char rua[80];
 char cidade[80];
 char estado[3];
 int numero;
 long cep;
}endereco;
typedef struct veiculo
{
 char nome[80];
 char marca[30];
 char combustivel[40];
 char cor[20];
 char chassis[80];
 char placa[10];
 long ano_modelo;
}veiculo;
typedef struct dados
{
 char nome[80],cpf[15];
 long fone;
 struct endereco *end;
 struct veiculo *carro;
}dados;
int cadastrar(dados *registro);
int mostrar_cadastro(dados *registro, FILE *saida);
int listar_cadastros(FILE *saida, int tipo_lista);
int salvar_cadastros(dados *registro);
int excluir_cadastros();
dados *Buscar_Registro();
int Erro();
main()
{
 char op;
 char subopcao;
   char imprime;
   int resultado;
 dados *registro;
 for(;;)
 {
       system("cls");
          printf("\n\n\t\t+--------------------------------+\n");
          printf("\t\t|             MENU               |\n");
          printf("\t\t+--------------------------------+\n");
          printf("\t\t|\t[1] - Incluir            |\n");
          printf("\t\t|\t[2] - Exluir             |\n");
          printf("\t\t|\t[3] - Buscar             |\n");
          printf("\t\t|\t[4] - Imprimir           |\n");
          printf("\t\t|\t[5] - Creditos           |\n");
          printf("\t\t|\t[6] - Sair               |\n");
          printf("\t\t+--------------------------------+\n\n\n");
   printf("Opcao: ");
      scanf("%s",&op);
  switch (op)
  {
   case '1':
    // ALOCACAO DE MEMO PARA DADOS
    registro = (dados *)calloc(1,sizeof(dados));
    if (!registro) Erro();
    // ALOCACAO DE MEMO PARA END
    registro->end = (endereco *)calloc(1,sizeof(endereco));
    if (!(registro->end)) Erro();
    // ALOCACAO DE MEMO PARA CARRO
                registro->carro = (veiculo *)calloc(1,sizeof(veiculo));
                if (!(registro->carro)) Erro();
    // CHAMADA DA FUNCAO REGISTRO!
    cadastrar(registro);
    // SALVANDO O REGISTRO EM ARQUIVO!
    salvar_cadastros(registro);
    // LIBERACAO DE MEMO DO REGISTRO!
    free(registro);
    break;
   case '2':
       printf("Exclusao de cadastros.\n\n");
    excluir_cadastros();
    printf("\n\nPressione algo para voltar para o menu.");
    // ESPERANDO A DIGITACAO DO USUARIO!
    getch();
    break;
   case '3':
       printf("MENU:\n 1-Listar todo o conteudo do cadastro;\n 2-listar os nomes cadastrados:\n");
       subopcao =getch();
       if (subopcao == '1')
        resultado = listar_cadastros(stdout,0);
       else 
                    if (subopcao == '2')
                        resultado = listar_cadastros(stdout, 1); 
                    else
                        break;
                getch();
       break;
   case '4':
   printf("Buscar por cadastros.\n\n");
            registro = Buscar_Registro();
            if (!registro)
    {
      printf("\n\nPressione algo pra voltar ao menu!.");
      // AGUARDANDO ACAO DO USUARIO!
        getch();
                 break;
                }
    // MOSTRANDO O CADASTRO!
     mostrar_cadastro(registro, stdout);
     // PERGUNTA SE DESEJA IMPRIMIR!
    printf("\n\n CONFIRMA A IMPRESSAO? \n VERIFIQUE SE SUA IMPRESSORA ESTA DEVIDAMENTE INSTALADA!\n (CABOS,CARTUCHOS E SIMILARES). (S/N)");
    imprime = toupper(getche());// NAUM IMPORTA SE `s` EH CARACTERE MAIUSCULO OU MINUSCULO!
    if (imprime == 'S')
    {
                    FILE *stdprint;
        stdprint = fopen("LPT1", "wt");
        mostrar_cadastro(registro,stdprint);
        fprintf(stdprint, "\f");
        fclose(stdprint);
        printf("\nRegistro Impresso!");
                }              
    free(registro);   
    printf("\n\nAPERTE UMA TECLA PARA VOLTAR.");
    // aguarda por comando
    getch();
    break;
    case '5':
        printf("***********************************************\n");
        printf("\n\tAcademico: Reginaldo de Matias\t\n");
        printf("\tCiencia da Computacao - UDESC\t\n");
        printf("***********************************************\n");
        getch();
        break;
   case '6':
       exit(0); // SAI DO PROGRAMA 
    break;
  }//final do switch
 }//fim do for   
}//fim da funcao main
int cadastrar(dados *registro)
{
    int i,j,result,resto,k,result2,resto2,vet[10]; 
    system("cls");
    printf("\nDADOS PESSOAIS\n");
 
    printf("\nNome: ");
 fflush(stdin);
 gets(registro->nome);
 
    for(;;)
    {
 result=0;
 result2=0;
 j=10;
 k=11;
    printf("CPF: ");
 fflush(stdin);
 gets(registro->cpf);
 for(i=0;i<11;i++)
    vet[i]=(registro->cpf[i]-48);
    for(i=0;i<9;i++)
    {
        result=(result+(vet[i]*j));
        j--;
    }
    resto=(result%11);
    for(i=0;i<10;i++)
    {
        result2=(result2+(vet[i]*k));
        k--;
    }
    resto2=(result2%11);
    if(resto<2&&vet[9]==0)
    {
        if((resto2<2&&vet[10]==0)||(resto2>=2&&vet[10]==(11-resto2)))
            break;
        else
            printf("CPF Invalido\n");
    }
    if(resto>=2&&vet[9]==(11-resto))
    {
        if((resto2<2&&vet[10]==0)||(resto2>=2&&vet[10]==(11-resto2)))
            break;
        else
            printf("CPF Invalido\n");
    }
    else
        printf("CPF Invalido\n");
    }
 printf("Telefone: ");
 scanf("%li", ®istro->fone);
 printf("Rua: ");
 fflush(stdin);
 gets(registro->end->rua);
 printf("Numero: ");
 scanf("%i", ®istro->end->numero);
 printf("Cidade: ");
 fflush(stdin);
 gets(registro->end->cidade);
    printf("Estado: ");
 fflush(stdin);
 gets(registro->end->estado);
 
    printf("CEP: ");
 scanf("%li",®istro->end->cep);
 
    system("cls");
    printf("\nDADOS DO VEICULO\n");
    
    printf("\nModelo: ");
 fflush(stdin);
 gets(registro->carro->nome);
 
 printf("Marca: ");
 fflush(stdin);
 gets(registro->carro->marca);
 
    printf("Ano do modelo: ");
 scanf("%li",®istro->carro->ano_modelo);
 
    printf("Cor: ");
 fflush(stdin);
 gets(registro->carro->cor); 
 
    printf("Combustivel: ");
 fflush(stdin);
 gets(registro->carro->combustivel);
 
 printf("Chassis: ");
 fflush(stdin);
 gets(registro->carro->chassis);
 
 printf("Placa: ");
 fflush(stdin);
 gets(registro->carro->placa);
 return(0);
}
// fim da funcao cadastrar
int mostrar_cadastro(dados *registro, FILE *saida)
{
 fprintf(saida, "\nNome: %s", registro->nome);
 fprintf(saida, "\nCPF: %s", registro->cpf);
 fprintf(saida, "\nTelefone: %li", registro->fone);
 fprintf(saida, "\nRua: %s", registro->end->rua);
 fprintf(saida, "\nNumero: %d", registro->end->numero);
 fprintf(saida, "\nCidade: %s", registro->end->cidade);
    fprintf(saida, "\nEstado: %s", registro->end->estado);
    fprintf(saida, "\nCEP: %li",registro->end->cep); 
    fprintf(saida, "\nModelo: %s", registro->carro->nome);
    fprintf(saida, "\nMarca: %s", registro->carro->marca);
    fprintf(saida, "\nAno do modelo: %li", registro->carro->ano_modelo);
    fprintf(saida, "\nCor: %s", registro->carro->cor);
    fprintf(saida, "\nCombustivel: %s", registro->carro->combustivel);
    fprintf(saida, "\nChassis: %s", registro->carro->chassis);
    fprintf(saida, "\nPlaca: %s", registro->carro->placa);
    return(0);
}
//fim da funcao mostrarcadastro
int salvar_cadastros(dados *registro)
{
    // a funcao salvarcadastros já salva ordenado
    // as estruturas vão sendo lidas do arquivo original (dados.txt)
    // e são comparadas com a que se deseja gravar
 FILE *arquivo;
 FILE *arq_temp;
 dados *temp_registro;
 int inseriu = 0;
    
    // aloca a memoria da struct temporaria
 temp_registro = (dados *)calloc(1,sizeof(dados));
 if (!temp_registro) Erro();
 temp_registro->end = (endereco *)calloc(1,sizeof(endereco));
    if (!(temp_registro->end)) Erro();
    temp_registro->carro = (veiculo *)calloc(1,sizeof(veiculo));
    if (!(temp_registro->carro)) Erro();
 arquivo = fopen(nome_arquivo, "r");
 // se o arquivo existir
 if (!(arquivo==NULL)) 
 {
        // abre o arquivo temporario
        arq_temp = fopen(temp, "wb");
        if (!arq_temp) Erro();
     
        fread(temp_registro, sizeof(*temp_registro),1, arquivo);
        fread(temp_registro->end, sizeof(*(temp_registro->end)), 1, arquivo);
      fread(temp_registro->carro, sizeof(*(temp_registro->carro)), 1, arquivo);
      do
     {
         if ((strcmpi(registro->nome, temp_registro->nome) < 0) && (!inseriu))
         {
                // esse é o ponto de inseriro no arquivo temporario
                // só entra aqui uma vez porque está sempre ordenado
                fwrite(registro, sizeof(*registro),1, arq_temp);
          fwrite(registro->end, sizeof(*(registro->end)),1,arq_temp);
                fwrite(registro->carro, sizeof(*(registro->carro)),1,arq_temp);   
                inseriu = 1;
            }
            // imprime o registro temporario
            fwrite(temp_registro, sizeof(*temp_registro), 1, arq_temp);
            fwrite(temp_registro->end, sizeof(*(temp_registro->end)),1,arq_temp);
            fwrite(temp_registro->carro, sizeof(*(temp_registro->carro)),1,arq_temp);
            // le o proximo
            fread(temp_registro, sizeof(*temp_registro),1, arquivo);
            fread(temp_registro->end, sizeof(*(temp_registro->end)), 1, arquivo);
            fread(temp_registro->carro, sizeof(*(temp_registro->carro)), 1, arquivo);
            
        }while (!feof(arquivo));
        // pode ser que tenha que ser inserido após todos
        // então verifica se o registro foi inserido, se não foi insere
        if (!inseriu)
        {
            fwrite(registro, sizeof(*registro), 1, arq_temp);
         fwrite(registro->end, sizeof(*(registro->end)),1,arq_temp);
         fwrite(registro->carro, sizeof(*(registro->carro)),1,arq_temp);
        }
        // fecha os arquivos, deleta o dados.txt e renomeia o temporario
        fclose(arquivo);
        fclose(arq_temp);
        remove(nome_arquivo);
        rename(temp, nome_arquivo);
        remove(temp);
 }
 else
 {
     // se o arquivo não existia ? o primeiro registro então não há com quem comparar
     // mas deve reabrir para escrita
     arquivo = fopen(nome_arquivo, "w");
  fwrite(registro, sizeof(*registro), 1, arquivo);
  fwrite(registro->end, sizeof(*(registro->end)),1,arquivo);
  fwrite(registro->carro, sizeof(*(registro->carro)),1,arquivo);
  fclose(arquivo);
 }
 free(temp_registro);
 return(0);
}
//fim da funcao salvarcadastros
dados *Buscar_Registro()
{
    system("cls"); 
    char nome[80];
 int Achou = 0;
 FILE *arquivo;
 dados *registro;
 
 // aloca memoria para a struct
 registro = (dados *)calloc(1,sizeof(dados));
 if (!registro) Erro();
 // e para o ponteiro para struct interno
 registro->end = (endereco *)calloc(1,sizeof(endereco));
 if (!registro->end) Erro();
 registro->carro = (veiculo *)calloc(1,sizeof(veiculo));
 if (!registro->carro) Erro();
 
 arquivo = fopen(nome_arquivo, "r");
 if (arquivo==NULL)
  {
     printf("Nao ha pessoas cadastradas!");
     free(registro);
     return(NULL);
  } 
    printf("Digite o nome para procurar: ");
    fflush(stdin); 
    gets(nome);
 do
 {
  fread(registro, sizeof(*registro),1, arquivo);
  fread(registro->end, sizeof(*(registro->end)),1,arquivo);
  fread(registro->carro, sizeof(*(registro->carro)),1,arquivo);
  if (!feof(arquivo))
   if (!(strcmpi(registro->nome, nome)))
   {
    Achou = 1;
    break;
   }
 }
 while(!feof(arquivo) && !Achou );
 fclose(arquivo);
 if (!Achou)
 {
  printf("***\nNome: '%s' Nao pode ser encontrado.\n***", nome);
  getch();
  return(NULL);
 }
 return(registro);
}
//fim da funcao BuscarRegistro
int Erro()
{
 printf ("\n** Erro: MEMORIA INADEQUADA OU INSUFICIENTE **");
 getch();
 exit(1);
 // SINAL DE AVISO E SAIDA POSTERIOR!
 return(0);
}
//fim da funcao Erro
int listar_cadastros(FILE *saida, int tipo_lista)
{
    FILE *arquivo;
    dados *registro;
    
 // ALOCACAO DE MEMO PARA A ESTRUTURA    !
 registro = (dados *)calloc(1,sizeof(dados));
 if (!registro) Erro();
 // ALOCACAO DE MEMO PARA O PONTEIRO END!
 registro->end = (endereco *)calloc(1,sizeof(endereco));
 if (!registro->end) Erro();
 // ALOCACAO DE MEMO PARA O PONTEIRO CARRO!
 registro->carro = (veiculo *)calloc(1,sizeof(veiculo));
 if (!registro->carro) Erro();
 arquivo = fopen(nome_arquivo, "r");
 if (arquivo==NULL)
 {
     printf("NENHUM CADASTRO FOI ENCONTRADO !!");
     free(registro);
  return(0);
  }
 // TOPO
    fprintf(saida,"*** LISTA DE CADASTROS ***\n\n");
    fread(registro, sizeof(*registro),1, arquivo);
 fread(registro->end, sizeof(*(registro->end)),1,arquivo);
 fread(registro->carro, sizeof(*(registro->carro)),1,arquivo);
 
    while(!feof(arquivo))
 {
  
     // NO CASO DE SER 0, IMPRIMIRA TODOS OS DADOS!
     if (tipo_lista == 0)
     {
         mostrar_cadastro(registro,saida);
         fprintf(saida, "\n*** ***\n");
        }
       // CASO CONTRARIO, IMPRIMIRA OS NOMES APENAS!
        else
            fprintf(saida, "%s\n", registro->nome);
        fread(registro, sizeof(*registro),1, arquivo);
  fread(registro->end, sizeof(*(registro->end)),1,arquivo);
  fread(registro->carro, sizeof(*(registro->carro)),1,arquivo);
 }
 
 fclose(arquivo);
 free(registro);
 return(1);
}
// FINAL DA FUNCAO QUE LISTA OS REGISTROS!            
int excluir_cadastros()
{
    dados *registro;
    dados *temp_registro;
    FILE *arquivo;
    FILE *arq_temp;
    char confirma;
    temp_registro = (dados *)calloc(1,sizeof(dados));
    temp_registro->end = (endereco *)calloc(1,sizeof(endereco));
    temp_registro->carro = (veiculo *)calloc(1,sizeof(veiculo));
    
    registro = Buscar_Registro();
    
    // testa para ver se eh possivel excluir
    if (!registro)
        return(0);
        
    // exige a confirmacao do usuario para excluir o registo!
    mostrar_cadastro(registro,stdout);
    printf("\n\nConfirmacao:deseja realmente excluir este registro? (S/N)");
    confirma = toupper(getche());
    if (confirma == 'S')
    {
    
        arquivo = fopen(nome_arquivo, "r");
        arq_temp = fopen(temp, "wb");
    
 
      do
     {
         fread(temp_registro, sizeof(*temp_registro),1, arquivo);
          fread(temp_registro->end, sizeof(*(temp_registro->end)),1,arquivo);
          fread(temp_registro->carro, sizeof(*(temp_registro->carro)),1,arquivo);
         // comparacao dos nomes neste ponto  
         if (!feof(arquivo))
             if (strcmpi(temp_registro->nome,registro->nome))
                {
                   fwrite(temp_registro, sizeof(*temp_registro), 1, arq_temp);
                 fwrite(temp_registro->end, sizeof(*(temp_registro->end)),1,arq_temp);
                 fwrite(temp_registro->carro, sizeof(*(temp_registro->carro)),1,arq_temp);
                }
        }while(!feof(arquivo));
 // fecha os todos os dados registrados em arquivo,  renomeia o temp e deleta o agenda.bin
        fclose(arquivo);
        fclose(arq_temp);
        remove(nome_arquivo);
        rename(temp, nome_arquivo);
        remove(temp);
        // testa para ver se o arquvivo ainda possui alguma existencia
        arquivo = fopen(nome_arquivo, "r");
        if (filelength(fileno(arquivo)) == 0)
        {
            // no caso de estar  vazio, apaga!
            fclose(arquivo);
            remove(nome_arquivo);        
        }
        printf("\n\nRegistro Deletado do sistema com sucesso!");
    }
    else
        printf("\n\nTentativa de deletar o registro sem sucesso!");
    
 free(temp_registro);
    free(registro);
}
