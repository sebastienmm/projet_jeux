#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	//déclaration et initialisation des variables
	
	int nombreMystere=0;
	int proposition=0;
	int compteur=1;
	int recommencer=1;
	int choix=0;
	int mode=0;
	
	const int MAX=100, MIN=1;	

	//Boucle principale permettant de recommencer une partie en changeant la valeur du booleen recommencer
	
	while (recommencer == 1)
	{
		printf ("Vous allez commencer une partie du jeux nombre mystère !!\n");
		printf ("Vous pouvez choisir entre les modes un joueurs ou deux joueurs :\n un joueurs => tapez 1 \n deux joueurs => tapez 2\n"); 
		
		while (mode != 1 || mode != 2)
		{
			scanf ("%d",&mode);
			if (mode == 1)
			{
				//initialisation et création d'un nombre aléatoire

				srand( time ( NULL )) ;
				nombreMystere=( rand() % ( MAX - MIN + 1 )) + MIN ;
			
				printf ("L'ordinateur a calculé un nombre mystère.\n A toi de jouer pour le trouver !!\n ");
				printf ("Fais une première proposition comprise entre 1 et 100\n");
				break;
			}
			else if(mode == 2)
			{
				printf ("Le joueur 2 doit indiquer à l'ordinateur la valeur du nombre mystère");
				scanf ("%d",&nombreMystere);
			
				printf ("Le joueur 2 a indiqué un nombre mystère.\n A toi de jouer pour le trouver !!\n ");
				break;
			}
			else
			{
				printf ("Vous n'avez pas tapé le bon choix");
			}
		}


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
			}
		}while (nombreMystere != proposition );
		printf ("Voulez-vous recommencez une partie?\n Si oui tapez 1 si non tapez 2.\n");
		
		while (!(choix == 1 || choix == 2))
		scanf ("%d", &choix);
		switch (choix)
		{
		case 1: 
			recommencer = 1;
			printf ("Une autre partie recommence");
			break;
		case 2: 
			recommencer = 0;
			printf ("A bientôt \n");
			break;
		default: 
			printf ("Vous devez choisir une des 2 options 1 ou 2 !!");
			break;
		}
	}
	return 0;
}
