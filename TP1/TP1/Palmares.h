#include "Date.h"
#ifndef PALMARES_H_
#define PALMARES_H_

using namespace std;

class Palmares
{
public:
	Palmares();
	~Palmares();

	void SetPalmares();
	string GetPalmares();
	Date GetDatePalmares();

private:
	string titre;
	Date date_obtention;
};

#endif