/**
*
* Copyright (c) 2020 Adriano Bezerra 
*
**/

#include <stdio.h>
#include <stdlib.h>  
#include <locale.h>  
#include <time.h>  
#include <conio.h>
#include <unistd.h>   

int main(int argc, char *argv[]) 
	{

	setlocale(LC_ALL, "Portuguese"); 

	// Declaração das variveis e seus valores
	int codigo_menu, codigo_peca, codigo_dia, numero_poltrona, soma_entrada, confirma, volta, sair; 
	int total_entrada = 0, total_valor = 0, total_inteira = 0, total_meia = 0, total_publica = 0;
	int i, j, k;
	int valor50 = 50; 
	int valor55 = 55;
	int valor00 = 00; 
	int peca1_disponivel = 30, peca2_disponivel = 30, peca3_disponivel = 30, peca4_disponivel = 30, peca5_disponivel = 30, peca6_disponivel = 30; 
	int preco_totalinteira = 0, preco_totalmeia = 0, preco_totalpublica = 0; 

	//Declaração dos vetores e seus valores 
	char vetorx[30]; 
	char vetora[30]; 
	char vetorb[30]; 
	char vetorc[30]; 
	char vetord[30]; 
	char vetore[30]; 
	char vetorf[30]; 

	for(i=0; i<30; i++)
		{
		vetorx[i]= ('\-'); 
		vetora[i]= ('\-'); 
		vetorb[i]= ('\-'); 
		vetorc[i]= ('\-'); 
		vetord[i]= ('\-'); 
		vetore[i]= ('\-'); 
		vetorf[i]= ('\-'); 
	} 
	voltar: 
	
	setlocale(LC_ALL, "Portuguese"); 
	
	printf("\n      * BEM VINDO AO TEATRO * NEUTRINO *      \n"); 
	printf(" =============================================== \n\n");
	printf("|-----------------------------------------------|\n"); 
	printf("| SELECIONE UMA OPÇÃO DO MENU                   |\n"); 
	printf("|-----------------------------------------------|\n"); 
	printf("| 1 - TABELA DE ESPETÁCULOS E PREÇOS            |\n"); 
	printf("|-----------------------------------------------|\n"); 
	printf("| 2 - FECHAMENTO DE CAIXA                       |\n"); 
	printf("|-----------------------------------------------|\n"); 
	printf("| 0 - SAIR                                      |\n"); 
	printf("|-----------------------------------------------|\n\n"); 
	scanf("%d", &codigo_menu); 
	system("cls"); 

	//Variaveis que precisam ser inicializadas com um valor padrão 
	int pecax_disponivel = 0, soma_disponivel = 0, entrada_inteira = 0, entrada_meia = 0, entrada_publica = 0, valorx = 0, meiax = 0, publicax = 0, preco_compra = 0; 
	int ticket_poltrona[30][2]; 

	if(codigo_menu == 1)
		{
		printf("\n"); 
		printf("-----------------------------------------------\n");
		printf(" 1-SEG 2-TER 3-QUA 4-QUI 5-SEX 6-SÁB 7-DOM \n"); 
		printf("-----------------------------------------------\n");
		printf(" INFORME O DIA DA SEMANA: ");
		scanf("%d", &codigo_dia); 
		system("cls"); 
		
		peca:
		
		printf("|----------------------------------------------------------------------------------|\n");
		printf("|                              *TABELA DE ESPETÁCULOS*                             |\n"); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		printf("|                                                                          LUGARES |\n"); 
		printf("|  CÓDIGO	NOME                      SALA        PRE�O      HORÁRIO    VAGOS  |\n"); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		printf("|    1		A BELA E A FERA            1          R$%d,00     13:00      %0.2d    |\n", valor50, peca1_disponivel); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		printf("|    2		COMEDIANTE , CASADO E PAI  1          R$%d,00     16:30      %0.2d    |\n", valor50, peca2_disponivel); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		printf("|    3		NÓIS QUE É POBRE           2          R$%d,00     11:30      %0.2d    |\n", valor55, peca3_disponivel); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		printf("|    4		O FANTASMA DA ÒPERA        2          R$%d,00     15:30      %0.2d    |\n", valor55, peca4_disponivel); 
		printf("|----------------------------------------------------------------------------------|\n"); 
		
		if(codigo_dia == 2)
			{
			printf("   DESTINADO PARA CRIANÇAS CARENTES DA REDE PÚBLICA DE ENSINO ÀS TERÇAS FEIRAS   \n"); 
			printf("|----------------------------------------------------------------------------------|\n"); 
			printf("|    5		A BELA E A FERA            3          R$%d,00      12:30      %0.2d    |\n", valor00, peca5_disponivel); 
			printf("|----------------------------------------------------------------------------------|\n"); 
			printf("|    6		O FANTASMA DA ÓPERA        3          R$%d,00      15:00      %0.2d    |\n", valor00, peca6_disponivel); 
			printf("|----------------------------------------------------------------------------------|\n\n");
		}
		
		printf("ESCOLHA O CÓDIGO DO ESPETÁCULO DESEJADO: "); 
		scanf("%d", &codigo_peca); 
		system("cls");
		
		//Passa os valores dos vetores de cada espetáulo para o vetor generico 
		switch(codigo_peca)
			{
			case 1:
			valorx = valor50;
			meiax = valorx/2;
			pecax_disponivel = peca1_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetora[j];
			}
			break;

			case 2:
			valorx = valor50; 
			meiax = valorx/2; 
			pecax_disponivel = peca2_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetorb[j];
			}
			break;
			
			case 3:
			valorx = valor55;
			meiax = valorx/2; 
			pecax_disponivel = peca3_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetorc[j];
			}
			break;
			
			case 4:
			valorx = valor55;
			meiax = valorx/2; 
			pecax_disponivel = peca4_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetord[j];
			}
			break;
			
			case 5:
			valorx = valor00;
			publicax = valorx;
			pecax_disponivel = peca5_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetore[j];
			}
			break;
			
			case 6:
			valorx = valor00;
			publicax = valorx;	
			pecax_disponivel = peca6_disponivel;
			for(j=0; j<30; j++)
				{
				vetorx[j]=vetorf[j];
			}
			break;
		}
		
		if((codigo_peca>4)&&(codigo_dia!=2))
			{
			printf("\n|-----------------------------------------------|\n"); 
			printf("| C�DIGO N�O ENCONTRADO NA LISTA DE ESPET�CULOS |\n"); 
			printf("|-----------------------------------------------|\n"); 
			sleep(5); 
			system("cls"); 
			goto peca;
		}
		
		if(pecax_disponivel==0)
			{
			system("cls");
		 	printf("\n|----------------------------|\n");
			printf("| INGRESSOS ESGOTADOS        |\n"); 
			printf("| SELECIONE OUTRO ESPET�CULO |\n"); 
			printf("|----------------------------|\n"); 
			sleep(5); 
			system("cls"); 
			goto peca;
		} 
		
		//A quantidade dos ingressos
		ingresso:
		
		if(codigo_peca<=4)
			{
			printf("|---------------------------------------------------------------------------------"); 
			printf("\n| INFORME QUANTAS ENTRADAS SER�O INTEIRAS: "); 
			scanf("%d", &entrada_inteira); 
			printf("|---------------------------------------------------------------------------------"); 
			printf("\n| INFORME QUANTAS ENTRADAS SER�O MEIAS \n"); 
			printf("| CASO FOR ESTUDANTE / PROFESSOR DA REDE P�BLICA / CRIAN�AS DE *02 A 12 ANOS / ADULTOS A PARTIR DOS *60 ANOS: "); 
			scanf("%d", &entrada_meia); 
			printf("|---------------------------------------------------------------------------------"); 
		}
		else
		if((codigo_peca<=6)&&(codigo_dia==2))
			{
			printf("|---------------------------------------------------------------------------------"); 
			printf(" \n| INFORME QUANTAS ENTRADAS SER�O GR�TIS \n"); 
			printf("| CASO FOR CRIAN�A CARENTE DA REDE P�BLICA: "); 
			scanf("%d", &entrada_publica);
			printf("|---------------------------------------------------------------------------------");
		}
		
		// soma todos os ingress os para fazer uma compara��o com a quantidade de ingressos do espet�culo
		soma_disponivel = entrada_inteira + entrada_meia + entrada_publica;
		
		if(soma_disponivel>pecax_disponivel)
			{
			system("cls");
		  	printf("\n|-------------------------------------------|\n"); 
			printf("| SESS�O POSSUI APENAS: %0.2d LUGARES VAGOS    |\n", pecax_disponivel); 
			printf("|-------------------------------------------|\n"); 
			sleep(5); 
			system("cls"); 
			goto ingresso;
		} 
		
		// Tipos de entrada 1 inteira, 2 meia, 3 idoso, 4 publica
		soma_entrada = entrada_inteira;
		for(k= 0; k<soma_entrada; k++)
			{
			ticket_poltrona[k][1]= 1;
		}
		soma_entrada = entrada_inteira + entrada_meia;
		for(k; k<soma_entrada; k++)
			{
			ticket_poltrona[k][1]= 2;
		}
		soma_entrada = entrada_inteira + entrada_meia;
		for(k; k<soma_entrada; k++)
			{
			ticket_poltrona[k][1]= 3;
		}
		soma_entrada = entrada_inteira + entrada_meia + entrada_publica;
		for(k; k<soma_entrada; k++)
			{
			ticket_poltrona[k][1]= 4;
		}
		system("cls");
		
		// for baseado na quantidade de ingressos
		for(k=0; k<soma_entrada; k++)
			{
			
			poltrona :
			
			printf("                             * POLTRONAS *                            \n");
			printf("|---------------------------------------------------------------------|\n");
			printf("| 01%c  | 02%c  | 03%c  | 04%c  | 05%c  | 06%c  | 07%c  | 08%c  | 09%c  | 10%c  |\n", vetorx[0] , vetorx[1], vetorx[2], vetorx[3], vetorx[4], vetorx[5], vetorx[6], vetorx[7] , vetorx[8], vetorx[9]);
			printf("|---------------------------------------------------------------------|\n");
			printf("| 11%c  | 12%c  | 13%c  | 14%c  | 15%c  | 16%c  | 17%c  | 18%c  | 19%c  | 20%c  |\n", vetorx[10], vetorx[11], vetorx[12], vetorx[13], vetorx[ 14], vetorx[15], vetorx[16], vetorx[17] , vetorx[18], vetorx[19]);
			printf("|---------------------------------------------------------------------|\n"); 
			printf("| 21%c  | 22%c  | 23%c  | 24%c  | 25%c  | 26%c  | 27%c  | 28%c  | 29%c  | 30%c  |\n", vetorx[20], vetorx[21], vetorx[22], vetorx[23], vetorx[24], vetorx[25], vetorx[26], vetorx[27] , vetorx[28], vetorx[29]); 
			printf("|---------------------------------------------------------------------|\n"); 
			printf("|                                                                     |\n");
			printf("|                               (PALCO)                               |\n"); 
			printf("|                                                                     |\n");
			printf("|---------------------------------------------------------------------|\n"); 
			printf("|                  * OCUPADO | - VAGO | + SELECIONADO                 |\n"); 
			printf("|---------------------------------------------------------------------|\n"); 
			printf(" ESCOLHA O N�MERO DA POLTRONA DESEJADA: "); 
			scanf("%d", &numero_poltrona); 
		
			if((numero_poltrona>30)||(numero_poltrona<1))
				{
				system("cls");
				printf("\n|-----------------------------------------|\n"); 
				printf("| ESCOLHA UM N�MERO DE POLTRONA EXISTENTE |\n"); 
				printf("|-----------------------------------------|\n"); 
				sleep(5);
				system("cls");
				goto poltrona;
			} 
		
			// adiciona o numero da poltrona a uma matriz para mostrar no ticket
			ticket_poltrona[k][0]= numero_poltrona;
			numero_poltrona = numero_poltrona - 1; 
		
			// caso o lugares colhido ja esteja como *
			if(vetorx[numero_poltrona]==('\*'))
				{
				system("cls");
				printf("\n|---------------|\n"); 
				printf("| LUGAR OCUPADO |\n"); 
				printf("|---------------|\n"); 
				sleep(2); 
				system("cls"); 
				goto poltrona;
			}
		
			// caso o lugar escolhido ja esteja com o +
			if(vetorx[numero_poltrona]==('\+'))
				{
				system("cls"); 
				printf("\n|----------------------|\n"); 
				printf("| LUGAR J� SELECIONADO |\n"); 
				printf("|----------------------|\n"); 
				sleep(2);
				system("cls"); 
				goto poltrona;
			}
			
			vetorx[numero_poltrona] = ('\+');
			system("cls");
		} 
	
		// confirma��o da compra 
		preco_compra = entrada_inteira*valorx + entrada_meia*meiax; 
		printf("|----------------------------------------------------|\n"); 
		printf("|DESEJA CONCLUIR A COMPRA? (1 PARA SIM | 0 PARA N�O) |\n"); 
		printf("|TOTAL DA COMPRA: R$%d,00                            |\n", preco_compra); 
		printf("|----------------------------------------------------|\n\n"); 
		scanf("%d", &confirma); 

		if(confirma == 0)
			{
			system("cls");
			printf("\n|------------------|\n"); 
			printf("| COMPRA CANCELADA |\n");
			printf("|------------------|\n"); 
			sleep(2); 
			system ("cls"); 
			goto voltar;
		} 
		system("cls"); 

		// impress�o dos tickets baseado na soma dos ingressos 
		for(k= 0; k<soma_entrada; k++)
			{
			// parte fixa do ticket
			printf("|-----------------------------------------------------------|\n");
			printf("|* TEATRO NEUTRINO   DATA: %s   Hora: %s     |\n",__DATE__, __TIME__); 
			printf("|-----------------------------------------------------------|\n");
			printf("|                           TICKET                          |\n");
			// parte alterada com base no filme
			switch(codigo_peca)
				{
				case 1:
				printf("| PE�A: A BELA E A FERA                   SALA: 1           |\n"); 
				printf("| SESS�O: 13:00                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]);
				break;
		
				case 2:
				printf("| PE�A: COMEDIANTE, CASADO E PAI          SALA: 1           |\n"); 
				printf("| SESS�O: 16:30                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]); 
				break;
		
				case 3:
				printf("| PE�A: N�IS QUE � POBRE                  SALA: 2           |\n"); 
				printf("| SESS�O: 11:30                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]);
				break;
		
				case 4:
				printf("| PE�A: O FANTASMA DA �PERA               SALA:2            |\n");
				printf("| SESS�O: 15:30                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]); 
				break; 
		
				case 5: 
				printf("| PEÇA: A BELA E A FERA                   SALA: 3           |\n"); 
				printf("| SESSÃO: 12:30                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]); 
				break; 
		
				case 6: 
				printf("| PEÇA: O FANTASMA DA �PERA               SALA: 3           |\n"); 
				printf("| SESSÃO: 12:30                           POLTRONA: %0.2d      |\n", ticket_poltrona[k][0]); 
				break;
			} 
			
			// Parte alterada pelo tipo do ingresso
			switch(ticket_poltrona[k][1])
				{
				case 1: 
				printf("| PREÇO: R$%0.2d,00                          INTEIRA           |\n", valorx); 
				printf("|-----------------------------------------------------------|\n"); 
				break;
		
				case 2: 
				printf("| PREÇO: R$%0.2d,00                          MEIA ENTRADA      |\n", meiax); 
				printf("|-----------------------------------------------------------|\n\n\n"); 
				break;
		
				//case 3:
				//printf("| PRE�Ç: ISENTO                           ISENTO            |\n"); 
				//printf("|-----------------------------------------------------------|\n\n\n"); 
				//break;
		
				case 4: 
				printf("| PREÇO: R$%0.2d,00                          GRÁTIS            |\n", publicax); 
				printf("|-----------------------------------------------------------|\n\n\n"); 
				break;
			}
		} 

		// transforma os lugares escolhidos na compra em ocupados 
		for(j=0; j<30; j++)
			{
			if(vetorx[j]==('\+'))
				{
				vetorx[j]=('\*');
			}
		}

		// ingressos disponiveis
		pecax_disponivel = pecax_disponivel - soma_disponivel;
 
		// Passa os valores do vetor generico para o vetor de cada espetáculo 
		switch(codigo_peca)
			{
			case 1:
			peca1_disponivel = pecax_disponivel;
			for(j=0; j<30; j++)
				{
				vetora[j] = vetorx[j];
			}
			break;
	
			case 2:
			peca2_disponivel = pecax_disponivel;
			for(j=0; j<30; j++)
				{
				vetorb[j] = vetorx[j];
			}
			break;
	
			case 3:
			peca3_disponivel = pecax_disponivel;
			for(j=0; j<30; j++)
				{
				vetorc[j] = vetorx[j];
			}
			break;
	
			case 4:
			peca4_disponivel = pecax_disponivel;
			for(j=0; j<30; j++)
				{
				vetord[j] = vetorx[j];
			}
			break;
	
			case 5:
			peca5_disponivel = pecax_disponivel;
			for(j=0; j<30; j++)
				{	
				vetore[j] = vetorx[j];
			}
			break;
	
			case 6:
			peca6_disponivel = pecax_disponivel;
			for(j=0;j<30;j++)
				{
				vetorf[j] = vetorx[j];
			}
			break;
		}

		// Todas as somas de ingressos 
		preco_totalinteira = preco_totalinteira + entrada_inteira*valorx; 
		preco_totalmeia = preco_totalmeia + entrada_meia*meiax; 
		//preco_totalgratis = preco_totalgratis + entrada_gratis*0; 
		preco_totalpublica = preco_totalpublica + entrada_publica*0; 
		total_inteira = entrada_inteira + total_inteira; 
		total_meia = entrada_meia + total_meia; 
		//total_gratis = entrada_gratis + total_gratis; 
		total_publica = entrada_publica + total_publica; 
		total_entrada = total_inteira + total_meia + total_publica; 
		total_valor = preco_totalinteira + preco_totalmeia + preco_totalpublica;  
		printf("DIGITE 0 PARA VOLTAR AO MENU PRINCIPAL: "); 
		scanf("%d", &volta); 
		system("cls"); 
		goto voltar; 
	} 
	else 
	if(codigo_menu == 2)
		{
		
		// Fechamento de Caixa, mostra todos os ingressos vendidos e faturamento 
		printf("|------------------------------------------------------------------------|\n"); 
		printf("| FECHAMENTO DE CAIXA                                                    |\n"); 
		printf("|------------------------------------------------------------------------|\n"); 
		printf("| INGRESSOS                                            | VALOR ARRECADADO|\n"); 
		printf("|------------------------------------------------------------------------|\n");
		printf("|INGRESSOS VENDIDOS COMO INTEIRAS...............: %0.4d | R$%0.4d,00       |\n", total_inteira, preco_totalinteira); 
		printf("|INGRESSOS VENDIDOS COMO MEIAS..................: %0.4d | R$%0.4d,00       |\n", total_meia, preco_totalmeia); 
		//printf("|INGRESSOS ISENTOS (IDOSO /APOSENTADO)..........: %0.4d | R$%0.4d,00       |\n", total_gratis, preco_totalgratis); 
		printf("|INGRESSOS GRÁTIS (CRIANÇAS CARENTES)...........: %0.4d | R$%0.4d,00       |\n", total_publica, preco_totalpublica); 
		printf("|------------------------------------------------------------------------|\n");
		printf("|                                          TOTAL: %0.4d | R$%0.4d,00       |\n", total_entrada, total_valor); 
		printf("|------------------------------------------------------------------------|\n\n\n"); 
		printf("DIGITE 0 PARA VOLTAR AO MENU PRINCIPAL: "); 
		scanf("%d", &volta); 
		system("cls"); 
		goto voltar;
	} 
	else 
	if (codigo_menu == 0)
		{ 
		printf("\n|-----------------------------------------------------|\n"); 
		printf("| DESEJA MESMO SAIR DO PROGRAMA? (1 - SIM / 0 - NÃO ) |\n"); 
		printf("|-----------------------------------------------------|\n"); 
		scanf("%d", &sair); 
		if(sair == 1)
			{
			exit(0);
		} 
		else
			{
			system("cls");
			goto voltar;
		}
	}
	else
		{ 
		printf("\n|---------------------------|\n"); 
		printf("| ESCOLHA UMA OPÇÃO DO MENU |\n"); 
		printf("|---------------------------|\n"); 
		sleep(5); 
		system("cls"); 
		goto voltar; 
	}
	getch();
	return 0;
} 