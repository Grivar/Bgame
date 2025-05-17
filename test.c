/*
* I'm sorry babe...
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	system("cls");

	int rn_nb[] = {1,2,3,4,5};
	int size = sizeof(rn_nb) / sizeof(rn_nb[0]);

	const char *rn_wr[] = {"*She frowns at you*", "\"What do you mean?\"", "\"How was you day?\"", "\"I want a divorce\"",
"\"I want kids\"", "*she is crying*"};
	char Wsize = sizeof(rn_wr) / sizeof(rn_wr[0]);
	int Wordw = (rand() % Wsize);

	const char *rn_1wr[] = {"*give her flowers*", "\"Are you ok?\"", "\"Love you\"", "I brought food"};
	char W1size = sizeof(rn_1wr) / sizeof(rn_1wr[0]);
	int Word1 = (rand() % W1size);
	
	const char *rn_2wr[] = {"\"meow\"", "*yawn*", "\"Just chill\"", "\"Red calender again huh!?\""};
	char W2size = sizeof(rn_2wr) / sizeof(rn_2wr[0]);
	int Word2 = (rand() % W2size);

	const char *rn_3wr[] = {"*ignore her*", "\"I want a divorce\"", "\"Come on! It was just a cat.\"", "\"You kind of look like Colette from Ratatouille\""};
	char W3size = sizeof(rn_3wr) / sizeof(rn_3wr[0]);
	int Word3 = (rand() % W3size);

	int nb4t5 = (rand() % size) -1;
	int nb3t5 = (rand() % size) -2;
	int nb1t5 = (rand() % size) -3;

	int usint = 0;
	int aura = 0;

	printf("%s\n", rn_wr[Wordw]);
	printf(" - What do we do?:\n");
	printf("[1] %s\n", rn_1wr[Word1]);
	printf("[2] %s\n", rn_2wr[Word2]);
	printf("[3] %s\n", rn_3wr[Word3]);
	printf(":");
	scanf("%d", &usint);
	if (usint == 1){
		aura++;
		if (nb4t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 2){
		aura = aura + 2;
		if (nb3t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 3){
		aura = aura + 4;
		if (nb1t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	}
	printf("----------------------------------------------\n");		
	
	Wordw = (rand() % Wsize);
	Word1 = (rand() % W1size);
	Word2 = (rand() % W2size);
	Word3 = (rand() % W3size);
		
	printf("%s\n", rn_wr[Wordw]);
	printf(" - What do we do?:\n");
	printf("[1] %s\n", rn_1wr[Word1]);
	printf("[2] %s\n", rn_2wr[Word2]);
	printf("[3] %s\n", rn_3wr[Word3]);
	printf(":");
	scanf("%d", &usint);
	if (usint == 1){
		aura++;
		if (nb4t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 2){
		aura = aura + 2;
		if (nb3t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 3){
		aura = aura + 4;
		if (nb1t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	}
	printf("----------------------------------------------\n");		
	Wordw = (rand() % Wsize);
	Word1 = (rand() % W1size);
	Word2 = (rand() % W2size);
	Word3 = (rand() % W3size);

	printf("%s\n", rn_wr[Wordw]);
	printf(" - What do we do?:\n");
	printf("[1] %s\n", rn_1wr[Word1]);
	printf("[2] %s\n", rn_2wr[Word2]);
	printf("[3] %s\n", rn_3wr[Word3]);
	printf(":");
	scanf("%d", &usint);
	if (usint == 1){
		aura++;
		if (nb4t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 2){
		aura = aura + 2;
		if (nb3t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 3){
		aura = aura + 4;
		if (nb1t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	}
	printf("----------------------------------------------\n");		
	Wordw = (rand() % Wsize);
	Word1 = (rand() % W1size);
	Word2 = (rand() % W2size);
	Word3 = (rand() % W3size);

	printf("%s\n", rn_wr[Wordw]);
	printf(" - What do we do?:\n");
	printf("[1] %s\n", rn_1wr[Word1]);
	printf("[2] %s\n", rn_2wr[Word2]);
	printf("[3] %s\n", rn_3wr[Word3]);
	printf(":");
	scanf("%d", &usint);
	if (usint == 1){
		aura++;
		if (nb4t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 2){
		aura = aura + 2;
		if (nb3t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	} else if (usint == 3){
		aura = aura + 4;
		if (nb1t5 <= 0){
			printf("I KNEW YOU HATED ME!!!\n");
			return 0;
		}
	}
	printf("You survived the evening! this time...\n");
	printf("Your aura: %d\n", aura);
	return 0;
}
