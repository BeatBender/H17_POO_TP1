/*
	TP1 - Patrick Levesque - LEVP19099302

	Le travail fonctionne très bien. Je me suis rendu compte à moitié que je n'avais pas utilisé la classe LigueSoccer comme j'aurais dû, mais ça fonctionne.
	L'affichage se fait dans la classe Screen. Le programme est très fragile, dès qu'on entre un type de valeur autre que ce que ça devrait être, le programme
	plante. Exemple : "Maurice" pour une question "Quel est l'age de la personne?". Aussi, lorsqu'un string est demandé, on doit seulement entrer un mot, dès
	qu'on en entre un autre, les mots subséquents sont prit en compte par les autres questions. Donc si on entre 4 mots, les trois entrées suivantes utiliseront
	les trois derniers mots.
*/

#include "Screen.h"

void main()
{
	Screen ecranPrincipal;
	ecranPrincipal.InitMainMenu();

	return;
}