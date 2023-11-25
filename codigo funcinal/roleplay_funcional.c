#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

//FUNÇAO(PARAMETROS) QUE REALIZA A TROCA DE DESTINOS QUE O JOGADOR PRETENDE VIAJAR E 
int swap3(char *str1, char *str2, char *str3)
{
  int viagem;
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  
  strcpy(temp, str3);
  strcpy(temp, str2);
  
  free(temp);
  
  return viagem;
}  

int main()
{

    int selec,i;
        
    printf("Menu inicial do jogo selecione uma das opcoes:\n");
    printf("\n1.Comecar o jogo\n2.Manual do Videojogo\n3.Sair do jogo\n");
    scanf("%d",&selec);

    //MENU DO JOGO COM A ESTRUTURA SWITCH CASE
    for(i=0;i<3;i++)
                   i++;
        do   
        {
        switch(selec)
            {
            case 1: {printf("O jogo foi iniciado:\n\n");break;};system("cls");
            case 2: {printf("\nAqui se segue o manual do jogo:");break;};
            case 3: {printf("VOLTE SEMPRE\n\n");break;};
            default: printf("Opcao invalida,Tente novamente!!\n");scanf("%d",&selec);
            }  
  
        }while(selec>3);
    
        if(selec==1)
        {
         printf("\no jogo foi iniciado");
        }
        if(selec==2)
        {
         printf("\nEste e um jogo em que podes simular uma vida passo a passo, seus atos tem consequencias!!\nDigite 1 para iniciar e qualquer outro numero se deser  sair!!\n");
         printf("ATENCAO O JOGO E APENAS REALIZADO EM ESCOLHAS ATRAVES DE NUMEROS NAO DIGITE CARACTERES\n");
         scanf("%d",&selec);
        }
        if(selec==3)
        {
        return 0;
        }
        
        //INICIO DO JOGO 
        if(selec==1)
        {
        //PERSONALIZAÇÃO DA IDENTIDADE DO UTILIZADOR NO JOGO
            int idade;
            float altura;
            char sobrenome[60];
            char nome[40];
                     
            system("cls");
            printf("Seja bem vindo cidadao, inicie a sua vida passo a passo:\n");
                    
            printf("\nNOME:");
            scanf("%s",nome);
            system("cls");

            printf("SOBRENOME:");
            scanf("%s",sobrenome);
            system("cls");
         
            
            printf("IDADE:");
            scanf("%d",&idade);
            system("cls");
            
            
            printf("ALTURA:");
            scanf("%f",&altura);
            system("cls"); 
                     
                    
            printf("\n\nNOME:%s\n\nSOBRENOME:%s\n\nIDADE:%d\n\nALTURA:%.2f\n ",nome,sobrenome,idade,altura); 
            printf("\n");
            system("pause");
            system("cls");
        }
        //SELECAO DE PROFISSÃO DO UTILIZADOR NO JOGO
            
            int num,a,lixeiro=700,programador=2000,mecanico=1500,mackdonalds=500,pedreiro=900,desempregado,conta=10000;
            
            printf("\nO cidadao tem disponivel na conta 10000 euros para comecar a sua vida!");
            printf("\n\nVoce esta em casa desempregado vai a procura de um emprego.\n\nQual tipo de emprego gostaria de ter?\n");
            
            printf("\n1.lixeiro\n2.programador\n3.mecanico\n4.mackdonalds\n5.pedreiro\n6.desemprego\n");
            scanf("%d",&num);
        
     	for(a=0;a<=6;a++)
     			a++;
	        do
                {			
		   switch(num)
            		    {
            			 case 1: {printf("Selecionou lixeiro\n");break;};
            			 case 2: {printf("Selecionou programador\n");break;};
            			 case 3: {printf("Selecionou mecanico\n");break;};
            			 case 4: {printf("Selecionou macdonalds\n");break;};
            			 case 5: {printf("Selecionou pedreiro\n");break;};
            			 case 6: {printf("Selecionou desemprego\n");break;};
            			 default: printf("\nOpcao invalida,Tente novamente!!\n");scanf("%d",&num);
            			}  
  
                }while(num>6);
        
        if(num==1)
                {
                 printf("\nEstado Empregado Como lixeiro seu ordenado sera de 700 euros por mes");
                 conta=conta+lixeiro;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        if(num==2)
                {
                 printf("\nEstado Empregado programador seu ordenado sera de 2000 euros por mes");
                 conta=conta+programador;
                 printf("\nvalor disponivel conta: %d euros",conta);
                }
        if(num==3)
                {
                 printf("\nEstado Empregado Como mecanico");
                 conta=conta+mecanico;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        if(num==4)
                {
                 printf("\nEstado Empregado Como funcionario do mcdonalds");
                 conta=conta+mackdonalds;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        if(num==5)
                {
                 printf("\nEstado Empregado Como pedreiro");
                 conta=conta+pedreiro;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                 }
        if(num==6)
                {
                 printf("\nContinua desempregado!!");
                 conta=conta;
                 printf("\n\nja que se mantem sem emprego o saldo da conta mantem-se igual: %d",conta);
             	}

        //DESENVOLVIMENTO DO UTILIZADOR A REALIZAR COMPRAS
        printf("\n\n");
        system("pause");
        system("cls");
        
        int num2,b,choice,Choice;
        printf("\nRealize as suas decisoes e chegue o mais longe possivel!\n");
        
        printf("\n1.Sair a noite \n2.Comprar um carro desportivo \n3.Ir para a praia\n4.ir para o trabalho\n");
        scanf("%d",&num2);
        
        for(b=0;b<4;b++)
                        i++;
        do
        {
        switch(num2)
                {
                case 1: {printf("\nVoce foi sair a noite e Gastou 80\n\n");break;};system("cls");
                case 2: {printf("\nO Carro custou-lhe 7.905 euros\n");break;};
                case 3: {printf("\nVoce decidiu ir a praia e gastou 50 euros\n\n");break;};
                case 4: {printf("\nVoce decidiu ir para o trabalho e passou das 10h as 18h no trabalho e ganhou 150 euros por horas extras\n\n",conta+300);break;};
                default: printf("Opcao invalida,Tente novamente!!\n");scanf("%d",&num2);
                }
        }while(num2>4);         
        
        if(num2==1)
                {
                 conta=conta-80;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        if(num2==2)
                {
                 conta=conta-7905;
                 printf("\nvalor disponivel conta: %d euros",conta);
                }
        if(num2==3)
                {
                 conta=conta-50;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        if(num2==4)
                {
                 conta=conta+150;
                 printf("\nvalor disponivel na conta: %d euros",conta);
                }
        
        //REPETIÇÃO DA COMPRA DO UTILIZADOR LOOP ATÉ DIZER QUE NÃO
        
        printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
        scanf("%d",&choice);
        do
        {
        
          switch(choice)
                        {
                        case 1: {printf("\nFaca umas boas compras!!");break;};
                        case 2: {printf("\nAte a proxima!");break;};
                        default: printf("\nopcao invalida tente novamente\n");scanf("%d",&choice);
                        }
          }while(choice>2);
        
        if(choice==1)
        do
        {
        system("cls");
        printf("\n1.Sair a noite \n2.Comprar um carro desportivo \n3.Ir para a praia\n4.ir para o trabalho\n");
        scanf("%d",&num2);

        //DESENVOLVIMENTO DO LOOP DE COMPRAS DE ESCOLHAS DO UTILIZADOR  

        //ESCOLHA 1-SAIR A NOITE E DEPOIS REALIZA LOOP DE COMPRA SE UTILIZADOR SELECIONAR SIM, SE NÃO JOGO PROSSEGUE  
        if(num2==1)
                {
                 system("cls");
                 conta=conta-80;
                 printf("\nvalor disponivel na conta apos compra: %d euros",conta);
                 printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
                 scanf("%d",&choice);
                 {
                  if(choice>2)
                 {
                do{
                  printf("\nopcao invalida tente novamente\n");
                  scanf("%d",&choice);
                   }while(choice>2);
                 }
               }
            }
         //ESCOLHA 2-CARRO E DEPOIS REALIZA LOOP DE COMPRA SE UTILIZADOR SELECIONAR SIM, SE NÃO JOGO PROSSEGUE
        if (num2==2 && conta>=7905)
                {
                 conta=conta-7905;
                 system("cls");
                 printf("\nvalor disponivel conta apos compra: %d euros",conta);
                 printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
                 scanf("%d",&choice);
                 {
                  if(choice>2)
                 {
                 do
                  {
                   printf("\nopcao invalida tente novamente\n");
                   scanf("%d",&choice);
                  }while(choice>2);
                }
             }
          }
        //ESCOLHA 2-CARRO SEM DINHEIRO PARA COMPRA, DEPOIS REALIZA LOOP DE COMPRA SE UTILIZADOR SELECIONAR SIM, SE NÃO JOGO PROSSEGUE
        if (num2==2 && conta<7905)
                {
                 system("cls");
                 printf("\nJogador nao possui dinheiro insuficiente para a compra do carro!");
                 conta=conta;
                 printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
                 scanf("%d",&choice);
                 {
                if(choice>2)
                 {
                do
                 {
                  printf("\nopcao invalida tente novamente\n");
                  scanf("%d",&choice);
                  }while(choice>2);
                }
             }
         }
        //ESCOLHA 3-PRAIA E DEPOIS REALIZA LOOP DE COMPRA SE UTILIZADOR SELECIONAR SIM, SE NÃO JOGO PROSSEGUE
         if(num2==3)
                {
                 conta=conta-50;
                 system("cls");
                 printf("\nvalor disponivel na conta: %d euros",conta);
                 printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
                 scanf("%d",&choice);
                 {
                  if(choice>2)
                 {
                  do
                  {
                  printf("\nopcao invalida tente novamente\n");
                  scanf("%d",&choice);
                  }while(choice>2);
                }
             }
          }
        //ESCOLHA 4-TRABALHO E DEPOIS REALIZA LOOP DE COMPRA SE UTILIZADOR SELECIONAR SIM, SE NÃO JOGO PROSSEGUE
        if(num2==4)
                {
                 conta=conta+150;
                 system("cls");
                 printf("\nvalor disponivel na conta: %d euros",conta);
                 printf("\nDeseja fazer mais uma compra?\n1-sim\n2-nao\n");
                 scanf("%d",&choice);
                 {
                 if(choice>2)
                 {
                  do
                  {
                  printf("\nopcao invalida tente novamente\n");
                  scanf("%d",&choice);
                  }while(choice>2);
                }
             }
         }
        
        //SE O UTILIZADOR NÃO TIVER DINHEIRO O SUFICIENTE O JOGO ACABA
        if(conta<=0)
        do
        {
            system("cls");
            printf("\n\nNao tem dinheiro suficiente para acabar o jogo tente novamente");
            printf(" \n\nE impossivel fazeres uma vida sem dinheiro, devias ter poupado mais!");
            printf("\n\nGAME OVER!!!");
            return 0;
        }while (conta<=0);
        
        }while(choice==1);
    {
        
        int policia;
        int escolha2;
        int c;
        
        system("cls");
        printf("\nVoce estava a caminhar bebado depois da saida a noite e um agente da policia abordou-te\nBom dia Senhor documentos, por favor.\n");
        printf("\n1-entregar\n2-ignorar\n3-fugir\nO que desejas fazer:\n");
        scanf("%d",&policia);
    	
        //ESCOLHA DA AÇÃO QUE O JOGADOR TOMARA PERANTE A ABORDAGEM DA POLICIA
        for(c=0;c<3;c++)
                        c++;
        do
        {
        switch (policia)
                        {
                          case 1: {printf("\nEntregar os Documentos","%d");break;};
                          case 2: {printf("\nIgnorar","%d");break;};
                          case 3: {printf("\nFugir","%d");break;};
                          default: printf("\nOpcao invalida,Tente novamente!!\n");scanf("%d",&policia);
                        }
        }while(policia>3);    
        
        
        //ESCOLHA DA POLICIA IGUAL A 1 A POLICIA DEIXA IR EMBORA COM UM AVISO
        if(policia==1)
                    {
                     printf("\nA policia viu os Documentos e deixou-te ir embora com um aviso.");
                    }
        
        //ESCOLHA POLICIA IGUAL A VAIS EMBORA COM UM PREMIO DA POLICIA 
        if(policia==2)
                    {
                     printf("\nO policia deu te um tapa por desrespeito as autoridades e acabaste por ir para casa de taxi");
                    }

        //ESCOLHA POLICIA FOR IGUAL A 3 UTILIZADOR  REALIZARA AINDA MAIS ESCOLHAS 
        if(policia==3)
                    {
                    printf("\n\nA policia apanhou-te, poderas ir preso durante 2 dias ou pagar uma fianca de 1000 euros");
                    printf("\n\nSeu saldo na conta e de %d",conta); 
                    printf("\n\nVoce deseja pagar a fianca e ir embora ou ficar preso 30 dias? \n1.pagar fianca \n2.fugir");
                    scanf("%d",&escolha2);
        do
        {
          switch(escolha2)
                        {
                         case 1: {printf("\nVoce pagou a fianca com sucesso, ira sair da policia com um registo criminal.");break;};
                         case 2: {printf("\nFicara preso 2 dias por desrespeito perante as autoridades.");break;};
                         default:printf("\nopcao invalida tente novamente!!\n");scanf("%d",&escolha2);
                        }
        }while(escolha2>2);                                
         
        //JOGO TERMINA SE JOGADOR NAO TIVER DINHEIRO SUFICIENTE
        if(escolha2==1 && conta<1000)
        {
          do
           {
            printf("\n\nNao tem dinheiro suficiente para pagar a fianca da prisao.");
            printf(" \n\nE impossivel fazeres uma vida sem dinheiro, devias ter poupado mais!");
            printf("\n\nGAME OVER!!!\n");
            return 0;
           }while (conta<0);
        }
        
        //PAGAR FIANCA SE ESCOLHA FOR IGUAL A 1
        if(escolha2==1)
                      {
                        do
                         {
                          printf("\nvoce pagou a fianca com sucesso, ira sair da policia com um registo criminal");
                          conta=conta-1000;
                         }while(escolha2==1);
                       }
        
        //SE ESCOLHA IGUAL A 2 FICA PRESO DURANTE 30 DIAS E O VALOR NA CONTA DO UTILIZADOR MANTEM-SE
        if(escolha2==2)
                      {
                        do
                        {
                        printf("\nO cidadao ira ficar preso durante 30 dias por desrespeito as autoridades");
                         conta=conta;
                        }while(escolha2==2);
                      }
                  }
        
        //PROTECAO CONTRA ERROS NA SELEÇÃO DA ABORDAGEM POLICIAL
        if(policia>3)
                    {
                      do
                        {
                        printf("\nopcao invalida tente novamente\n");
                        scanf("%d",&policia);      
                        }while(policia>3);
                    } 
               }
        
        //REALIZAÇÃO DA FUNÇÃO(PARAMETROS) DECLARADA INICALMENTE
        printf("\n");
        system("pause");
        int viagem2;
        char str1[40] = "GrandTheftCity";
        char str2[40] = "EUA";
        char str3[40] = "Dubai";
        
        printf("\nApos os incidentes o cidadao decidiu realizar uma trip:\n Para qual destino o Utilizador deseja ir \n1.Eua\n2.Dubai\n");
        scanf("%d",&viagem2);         
       
       //REALIZA A TROCA DOS DESTINO GRANDTHEFTCITY PARA OS EUA
        if(viagem2==2)
                   {
                    swap3(str1,str2,str3);
                    printf("Estas a ir de %s para  %s",str1, str3);
                    getchar();
                   }
        //REALIZA TROCA DE DESTINO GRANDTHEFTCITY PARA O DUBAI
        if(viagem2==1)
                   {
                   swap3(str1,str2,str3);       
                   printf("Estas a ir de %s para  %s",str1, str2);
                   getchar();
                   }
        else if(viagem2>2)
                        {
                          do
                           {
                             system("cls");
                             printf("\nopcao invalida tente novamente\n");
                             printf("\nApos os incidentes o cidadao decidiu realizar uma trip:\n Para qual destino o Utilizador deseja ir \n1.Eua\n2.Dubai\n");
                             scanf("%d",&viagem2);
                           }while(viagem2>2);
                        }
        //FIM DO JOGO
        printf("\n");
        system("pause");
        system("cls");
        printf("\nMEUS PARABENS O JOGADOR CONSEGUIU PROSSEGUIR ATE AO FINAL DO JOG0!!\n");
        printf("ESPERO QUE TENHA GOSTADO!!!\nVOLTE SEMPRE!!");
        return 0;

}

      


