#pragma once
#ifndef DATE_H_
#define DATE_H_
#include <string>

using namespace std;

class Date
{
public:
	Date();
	~Date();

	void SetAnnee(string);
	void SetMois(string);
	void SetJour(string);
	

private:
	string jour, mois, annee;
};
#endif