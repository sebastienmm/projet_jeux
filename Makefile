CC =gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = main.o fonction-niveau.o fonction-mode-joueur.o fonction-principale.o fonction-chercher.o

trouver_nombre.exe = $(OBJ)
	$(CC)$(CDFLAGS)$(LDFLAGS) -o trouver_nombre.exe

main.o = main.c fonction-niveau.h fonction-mode-joueur.h fonction-principale.h fonction-chercher.h
fonction-niveau.o = fonction-niveau.c fonction-niveau.h
fonction-mode-joueur.o = fonction-mode-joueur.c fonction-mode-joueur.h
fonction-principale.o = fonction-principale.c fonction-chercher.h fonction-mode-joueur.h onction-niveau.h
fonction-chercher.o = fonction-chercher.c  fonction-chercher.h




