#pragma once
#ifndef ENTRAINEUR_H_
#define ENTRAINEUR_H_
#include <string>
#include <vector>
#include "TitresGagne.h"

using namespace std;

class Entraineur
{
public:
	Entraineur();
	~Entraineur();

private:
	string nom, prenom, lieu_obtention_grade;
	vector<TitresGagne> titres;

};
#endif