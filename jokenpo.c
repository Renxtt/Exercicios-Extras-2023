#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include  <time.h>
#include <string.h>


main(void){
	setlocale(LC_ALL,"portuguese");
	int nub, nub2, nub3, num, num2, num3, vari, random; 
	char perg[40];
	nub=1;
	nub2=2;
	nub3=3;
	num=1;
	num2=2;
	num3=3;

	srand(time(NULL));
	random=rand() % 3+1;
	printf("%78s", "ola bem vindo ao JoKenPo!!");
	printf("\n%58s", "Jo");
	printf("\n%65s", "Ken");
	printf("\n%72s", "Po");
	printf("\n%72s", "Digite 1,2 ou 3:");
	printf("\n%67s", "Pedra-1");
	printf("\n%67s", "Papel-2");
	printf("\n%68s", "Tesoura-3");
	printf("\n\t\t\t\t\t\t\tescolha sua arma:");
	scanf("%d", &vari);
	if(random==vari){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);
		printf("\nDeu Impate");
	
	}else if(random==1 && vari==2){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);
		printf("\nentre Pedra e Papel ganha a Papel");
		printf("\nVocê venceu");
	
	}else if(random==1 && vari==3){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);		
		printf("\nentre Pedra e Tesoura ganha a Pedra");
		printf("\no pc ganhou");
	
	}else if(random==2 && vari==1){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);		
		printf("\nentre Papel e pedra ganha a Papel");
		printf("\no pc ganhou");
	
	}else if(random==2 && vari==3){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);
		printf("\nentre Papel e Tesoura ganha a Tesoura");
		printf("\nVocê venceu");
	
	}else if(random==3 && vari==1){
		
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);
		printf("\nentre Tesoura e Pedra ganha a Pedra");
		printf("\nVocê venceu");
	
	}else if(random==3 && vari==2){
		printf("\nnúmero do programa:%d", random);
		printf("\nSeu número:%d", vari);	
		printf("\nentre Tesoura e Papel ganha a Tesoura");
		printf("\no pc ganhou");
	}
	printf("\nQuer recomeçar?:");
	scanf("%s", &perg);
	while(strcmp(perg,"Sim")==0||strcmp(perg, "sim")==0||strcmp(perg,"s")==0||strcmp(perg,"S")==0){
		random=rand() % 3+1;
		printf("%78s", "ola bem vindo ao JoKenPo!!");
		printf("\n%58s", "Jo");
		printf("\n%65s", "Ken");
		printf("\n%72s", "Po");
		printf("\n%72s", "Digite 1,2 ou 3:");
		printf("\n%67s", "Pedra-1");
		printf("\n%67s", "Papel-2");
		printf("\n%68s", "Tesoura-3");
		printf("\n\t\t\t\t\t\t\tescolha sua arma:");
		scanf("%d", &vari);
		if(random==vari){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);
			printf("\nDeu Impate");
		
		}else if(random==1 && vari==2){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);
			printf("\nentre Pedra e Papel ganha a Papel");
			printf("\nVocê venceu");
		
		}else if(random==1 && vari==3){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);		
			printf("\nentre Pedra e Tesoura ganha a Pedra");
			printf("\no pc ganhou");
		
		}else if(random==2 && vari==1){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);		
			printf("\nentre Papel e pedra ganha a Papel");
			printf("\no pc ganhou");
		
		}else if(random==2 && vari==3){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);
			printf("\nentre Papel e Tesoura ganha a Tesoura");
			printf("\nVocê venceu");
		
		}else if(random==3 && vari==1){
			
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);
			printf("\nentre Tesoura e Pedra ganha a Pedra");
			printf("\nVocê venceu");
		
		}else if(random==3 && vari==2){
			printf("\nnúmero do programa:%d", random);
			printf("\nSeu número:%d", vari);	
			printf("\nentre Tesoura e Papel ganha a Tesoura");
			printf("\no pc ganhou");
		}
		printf("\nQuer recomeçar?:");
		scanf("%s", &perg);
		//TODO
	}
	
	
	return 0;
}
