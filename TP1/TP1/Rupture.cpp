#include "Rupture.h"
#include <iostream>

using namespace std;

Rupture::Rupture()
{
}

Rupture::~Rupture()
{
}

void Rupture::SetJoueur()
{
	
}

void Rupture::SetRaison()
{

}

void Rupture::SetNouvClub()
{

}

void Rupture::SetPenalite()
{

}

string Rupture::GetJoueur()
{
	return this->joueur.GetPrenom() + " " + this->joueur.GetNom();
}

string Rupture::GetRaison()
{
	return this->raison;
}

string Rupture::GetNouvClub()
{
	return this->nouvClub.GetNom();
}

float Rupture::GetPenalite()
{
	return this->penalite;
}