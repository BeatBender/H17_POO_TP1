#pragma once
#ifndef RESULTAT_H_
#define RESULTAT_H_

class Resultat
{
public:
	Resultat();
	~Resultat();

	void SetNbButsTotalLocal();
	void SetNbButsTotalInvite();

private:
	int nbButsTotalLocal, nbButsTotalInvite;
};

#endif