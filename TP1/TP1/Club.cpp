#include "Club.h"

using namespace std;

void Club::SetNom(string s)
{
	this->nom = s;
}

void Club::SetHistoire(string s)
{
	this->histoire = s;
}

void Club::SetCouleur(string s)
{
	this->couleur = s;
}

void Club::SetVille(string s)
{
	this->ville = s;
}

Club::Club()
{
	Club::SetNom("");
	Club::SetHistoire("");
	Club::SetCouleur("");
	ville = "";

}

Club::~Club()
{

}