#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
	//initialisation et création d'un nombre aléatoire
	int nombreMystere=0;
	int proposition=0;

	const int MAX=100, MIN=1 ;
	srand( time ( NULL )) ;
	nombreMystere=( rand() % ( MAX - MIN + 1 )) + MIN ;
	
	printf ("L'ordinateur a calculé un nombre mystère.\n A toi de jouer pour le trouver !!\n ");
	printf ("Fais une première proposition comprise entre 1 et 100\n");
	
	while (nombreMystere != proposition )
	{
		scanf ("%d", &proposition);
		if (nombreMystere < proposition)
		{
			printf ("Le nombre mystère est plus petit,\n nouvelle proposition:\n");
		}
		else if(nombreMystere > proposition)
		{
			printf ("Le nombre mystère est plus grand,\n nouvelle proposition:\n");
		}
		else if( nombreMystere > proposition )

		{
			printf ("Bravo tu as trouvé le nombre mystère, il est égal à %d\n",proposition);
		}
		else
		{
			printf (" ");
		}
	}
	printf ("Bravo tu as trouvé le nombre mystère, il est égal à %d\n",proposition);
	return 0;
}
