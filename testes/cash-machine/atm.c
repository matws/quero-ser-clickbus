#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

    int ususario1=0, opcion=1, lp=0;
	float saldo=(10000 + rand() % 30000);
	char retiro;
	
	void menu()
	{
		printf ("\n\n ");
		printf ("\n\n ");
		printf("\n|||||||||||||||||||| [1]Consulta ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| [2]Retiro de efectivo ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| [3]Tiempo aire ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| [4]Tranferencia ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| [5]Cambio NIP ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| [6]Salir ||||||||||||||||||||||"); 
		printf("\n|||||||||||||||||||| Seleciona una opción ||||||||||||||||||||||"); 
		printf("\n "); }
	}
	
	void opciones(int lp) 
	{  switch(lp) 
		{
			case 1: 
				printf("\n Su saldo es de %f",saldo); 
			break; 
			
			case 2: 
				printf("\n Selecione la cantidad que desea retirar"); 
				printf("\n [a]==> $100 $1000<==[d]"); 
				printf("\n [b]==> $200 $2000<==[e]"); 
				printf("\n [c]==> $500 $3000<==[f]"); 
				printf("\n Si desea otra cantidad precione [g]"); 
				printf("\n"); 
			
			scanf("%s",&retiro); 
				
					if(retiro=='a') 
					{ 
						saldo-=100; 
							printf("\n se han retirodo $100"); 
					} 
					
					else if(retiro=='b') 
					{ 
						saldo-=200; 
							printf("\n se han retirodo $200"); 
					}	 
				
					else if(retiro=='c') 
					{ 
						saldo-=500; 
							printf("\n se han retirodo $500"); 
					} 
					
					else if(retiro=='d') 
					{ 
						saldo-=1000; 
							printf("\n se han retirodo $1000"); 
					}
		
					else if(retiro=='e') 
					{ 
						saldo-=2000; 
							printf("\n se han retirodo $2000"); 
					} 
					else if(retiro=='f') 
					{ 
						saldo-=3000; 
							printf("\n se han retirodo $3000"); 
					} 
					else if(retiro=='g') 
					{ 
						int cosa=1; 
						int retiro=0; 
						float res=0; 
						while (cosa==1) 
						{  printf("\n Introduce la cantidad en multiplos de 100 no mayor a 4000"); 
							printf("\n"); scanf("%i",&retiro); 
							if(retiro>=100 && retiro <=4000) 
							{ 
								res=retiro%100; 
								if (res==0) 
									{ 
										saldo-=retiro; 
										printf("\n se retiro la cantidad de : %d", retiro); 
										cosa=0; 
									} 
								else 
									{ 
										printf("\n escriba una cantidad valida "); 
									}  
							} 
								else 
								{
									printf("\n cantidad erronea"); 
								}  
						} 
					}  
					else 
					{ 
						printf("\n Opcion no valida"); 
					}  
					break;  
					
					case 3: 
						int c=0; 
						char j; 
						while(c==0) 
							{ printf("\n[a]==> Telcel");
								printf("\n[b]==> Iusacell "); 
								printf("\n[c]==> Movistar"); 
								printf("\n"); scanf("%s",&j); 
						
						if(j=='a') 
							{  
							} 
						else if(j=='b') 
						{ } else if(j=='c') { } 
							else 
								{ 
									printf("\n opcion no valida "); 
								}  
							}  
					break;  
					
					case 4: 
						printf("\nTransferencia realizada"); 
					break;  
					
					case 5: 
						printf("\nSalida"); 
					break; 
						default: 
							printf("\nerror"); break;  
		}  
	} 
	
	main() 
		{ 
			printf("\n\nIngrese PIN"); 
			printf("\n"); 
			scanf("%d",&usuario1); 
		
		while(opcion==1) 
			{ 
				if(usuario1==1234) 
				{ 
					menu(); 
					scanf("%d",&lp); 
					if(lp>0 && lp<=5) 
					{ 
						opciones(lp); 
					} 
					else 
					{ 
						opcion=0; 
						printf("\n Eligió salir del programa"); 
					} 
				} 
				else  
				{ 
					printf("\nEl PIN es erroneo,si desea intentarlo de nuevo presione 1 si desea salir presione 0"); 
					scanf("%d",&opcion); 
				} 
			} 
	return 0;  
	}		
