#ifndef CLUB_H_
#define CLUB_H_

#include <string>
#include <vector>
#include "Date.h"
#include "Joueur.h"
#include "Palmares.h"
#include "Stade.h"
#include "Personne.h"

using namespace std;

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
	Stade GetStade();
	vector<Personne> GetStaff();

	//Set
	void SetNom(string);
	void SetHistoire(string);
	void SetCouleur(string);
	void SetVille(string);
	void SetDate(Date);
	void SetEffectif(vector<Joueur>);
	void SetPalmares(Palmares);
	void SetStade(Stade);
	void SetStaff(vector<Personne>);


private:
	string nom, histoire, couleur, ville;
	Date annee_creation;
	vector<Joueur> effectif;
	Palmares palmares;
	Stade stade;
	vector<Personne> staff;

};

#endif