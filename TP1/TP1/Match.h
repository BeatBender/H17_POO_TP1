#pragma once
#ifndef MATCH_H_
#define MATCH_H
#include <list>
#include "Equipe.h"
#include "Periode.h"
#include "Resultat.h"

class Match
{
public:
	Match();
	~Match();

private:
	Equipe equipeLocal, equipeInvite;
	list <Periode> periodes;
	Resultat resultat;
};

#endif