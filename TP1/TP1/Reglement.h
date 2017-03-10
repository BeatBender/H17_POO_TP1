#pragma once
#ifndef REGLEMENT_H_
#define REGLEMENT_H_
#include <string>

using namespace std;

class Reglement
{
public:
	Reglement();
	~Reglement();

private:
	int montantSeuil;
	string droits;
	float montantTransfert, montantClub, montantJoueur;
};

#endif