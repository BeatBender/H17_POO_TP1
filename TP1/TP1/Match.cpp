#include "Match.h"
#include <iostream>

using namespace std;

Match::Match()
{

}

Match::~Match()
{

}

void Match::SetEquipeLocal()
{
	this->equipeLocal.SetClub();
}

void Match::SetEquipeInvite()
{
	this->equipeInvite.SetClub();
}

void Match::SetPeriode()
{
	Periode *periode = new Periode;
	periode->SetDuree();
	periode->SetNbButsLocal();
	periode->SetNbButsInvite();
	periodes.push_back(periode);
}

void Match::SetResultat()
{
	this->resultat.SetNbButsTotalLocal();
	this->resultat.SetNbButsTotalInvite();
}