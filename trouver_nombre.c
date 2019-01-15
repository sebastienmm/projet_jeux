#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	
// variable 
	

int proposition=0;
int compteur=1;
int recommencer=1;
int choix;
int mode;
int niveau;


// fonction mode deux joueurs ou 1 joueur
int fonction_mode_joueur(int max, int min)	
{
	int nombreMystere = 0;
		
	while (mode != 1 || mode != 2)
	{
		printf ("mode = ");
		scanf ("%d",&mode);
		if (mode == 1)
		{
			//initialisation et création d'un nombre aléatoire

			srand( time ( NULL )) ;
			nombreMystere=( rand() % ( max - min + 1 )) + min ;
		
			printf ("L'ordinateur a calculé un nombre mystère.\n A toi de jouer pour le trouver !!\n ");
			printf ("Fais une première proposition comprise entre %d et %d \n", min, max);
			break;
		}
		else if(mode == 2)
		{
			printf ("Le joueur 2 doit indiquer à l'ordinateur la valeur du nombre mystère\n");
			printf ("le nombre qui doit être trouvé est :\n");
			scanf ("%d",&nombreMystere);
			printf ("Le joueur 2 a indiqué un nombre mystère.\n A toi de jouer pour le trouver !!\n ");
			break;
		}
		else
		{
			printf ("Vous n'avez pas tapé le bon choix\n");
		}
	}
	mode = 0 ;
	return nombreMystere ;
}

// Fonction permettant de trouver le nombre mystère

int fonction_chercher( int nombreMystere )
{
	do
	{
			scanf ("%d", &proposition);
			if (nombreMystere < proposition)
			{
					printf ("Le nombre mystère est plus petit,\n nouvelle proposition:\n");
					compteur++;
			}
			else if(nombreMystere > proposition)
			{
					printf ("Le nombre mystère est plus grand,\n nouvelle proposition:\n");
					compteur++;
			}
			else
			{
					printf ("Bravo tu as trouvé le nombre mystère en %d coup, il est égal à %d\n",compteur, proposition);
					compteur = 1;
			}
	}while (nombreMystere != proposition );
	return nombreMystere;
}

int main (int argc, char *argv[])
{
	//déclaration et initialisation des variables
	
	int nombreMystere=0;
	int proposition=0;
	int compteur=1;
	int recommencer=1;
	int choix;
	int mode;
	int niveau;
	int max, min;	

	//Boucle principale permettant de recommencer une partie en changeant la variable recommencer
	
	while (recommencer == 1)
	{
		recommencer = 0;	

		printf ("Vous allez commencer une partie du jeux nombre mystère !!\n");
		printf ("3 modes sont disponibles:\n    - niveau facile tapez 1 \n    - niveau moyen tapez 2 \n    - niveau difficile tapez 3 \n");
		
		//choix du niveau de difficulté

		while ( niveau != 1 || niveau != 2 || niveau != 3 )
		{
			printf ("niveau = ");
			scanf ("%d", &niveau);
			if(niveau == 1)
			{
					max=50, min=1;
					printf ("Le nombre mystère devra être trouvé entre %d et %d \n", min, max);
					break;
			}
			else if(niveau == 2)
			{
				max=100, min=1;
				printf ("Le nombre mystère devra être trouvé entre %d et %d \n", min, max);
				break;
			}
			else if(niveau == 3)
			{
				max=1000, min=1;
				printf ("Le nombre mystère devra être trouvé entre %d et %d \n", min, max);
				break;
			}
			else
			{
				printf ("Vous n'avez pas tapé le bon choix, recommencez !! \n");
			}

		}	
		printf ("Vous pouvez choisir entre les modes un joueurs ou deux joueurs :\n un joueurs => tapez 1 \n deux joueurs => tapez 2\n"); 
		
		
		fonction_mode_joueur ( max , min );
		fonction_chercher( nombreMystere );
		
		
		
		
		
		printf ("Voulez-vous recommencez une partie?\n Si oui tapez 1 si non tapez 2.\n");
		
		while (!(choix == 1 || choix == 2))
		{
			printf ("choix = ");	
			scanf ("%d", &choix);
			switch (choix)
			{
			case 1: 
				recommencer = 1;
				printf ("Une autre partie recommence\n");
				break;
			case 2: 
				recommencer = 0;
				printf ("A bientôt \n");
				break;
			default: 
				printf ("Vous devez choisir une des 2 options 1 ou 2 !!\n");
				break;
			}
		}
		choix = 0;
		
	}
	return 0;
}
