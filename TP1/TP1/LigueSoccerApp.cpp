/*
	TP1 - Patrick Levesque - LEVP19099302

	Le travail fonctionne tr�s bien. Je me suis rendu compte � moiti� que je n'avais pas utilis� la classe LigueSoccer comme j'aurais d�, mais �a fonctionne.
	L'affichage se fait dans la classe Screen. Le programme est tr�s fragile, d�s qu'on entre un type de valeur autre que ce que �a devrait �tre, le programme
	plante. Exemple : "Maurice" pour une question "Quel est l'age de la personne?". Aussi, lorsqu'un string est demand�, on doit seulement entrer un mot, d�s
	qu'on en entre un autre, les mots subs�quents sont prit en compte par les autres questions. Donc si on entre 4 mots, les trois entr�es suivantes utiliseront
	les trois derniers mots.
*/

#include "Screen.h"

void main()
{
	Screen ecranPrincipal;
	ecranPrincipal.InitMainMenu();

	return;
}