#pragma once
#ifndef RENCONTRE_H_
#define RENCONTRE_H_
#include "Date.h"
#include "Club.h"
#include "Match.h"

class Rencontre
{
public:
	Rencontre();
	~Rencontre();

private:
	Date dateRencontre;
	Club clubLocal, clubInvite;
	Match resultat;
};

#endif
