#include <string>
#include <vector>

#ifndef CLUB_H_
#define CLUB_H_


#include "Date.h"
#include "Joueur.h"
#include "Palmares.h"
#include "Stade.h"
#include "Personne.h"
#include "Entraineur.h"

using namespace std;
class Joueur;
class Personne;
class Entraineur;

class Club
{
public:
	Club();
	~Club();

	//Get
	string GetNom();
	string GetHistoire();
	string GetCouleur();
	string GetVille();
	Date GetDate();
	vector<Joueur> GetEffectif();
	Palmares GetPalmares();
	int GetNbTitres();
	vector<Entraineur*> GetEntraineurs();
	Stade GetStade();
	vector<Personne> GetStaff();

	//Set
	void SetNom();
	void SetHistoire();
	void SetCouleur();
	void SetVille();
	void SetDate();
	void SetEffectif();
	void SetPalmares();
	void SetStade();
	void SetStaff();

	void AfficherJoueurs();


private:
	string nom, histoire, couleur, ville;
	Date annee_creation;
	vector<Joueur*> effectif;
	vector<Entraineur*> entraineurs;
	Palmares palmares;
	vector<string> titres;
	Stade stade;
	vector<Personne*> staff;

};

#endif