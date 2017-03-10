#pragma once
#ifndef RUPTURE_H_
#define RUPTURE_H_
#include "Joueur.h"
#include <string>

using namespace std;

class Rupture
{
public:
	Rupture();
	~Rupture();

private:
	Joueur joueur;
	string raison;
	Club nouvClub;
	float penalite;
};

#endif