#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	//initialisation et création d'un nombre aléatoire
	printf "Calcul du nombre mystère";
	const int MAX=100, MIN=1 ;
	srand=( time ( NULL )) ;
	nombreMystere = ( rand() % ( MAX - MIN + 1 )) + MIN ;
	
	printf "L'ordinateur a calculé un nombre mystère.\n A toi de jouer pour le trouver !! ";
	Printf "Fais une première proposition comprise entre 1 et 100"
	int proposition=0;
	while (nombremystère != proposition)
	{
		scanf ("%d", &proposition);
		if (nombreMystere < proposition)
		{
			printf "Le nombre mystère est plus petit,\n nouvelle proposition:";
		}
		else
		{
			printf "Le nombre mystère est plus grand,\n nouvelle proposition:";
		}
	}
	printf "Bravo tu as trouvé le nombre mystère, il est égal à %d",proposition";
}
