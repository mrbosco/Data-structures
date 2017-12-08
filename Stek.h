#pragma once

#include "Cvor.h"

template <class Tip>
class Stek
{
	
public:
	virtual void dodaj(Tip v) = 0;

	virtual Tip ukloni() = 0;
	
	virtual Tip vrh() = 0;

	virtual bool isPrazan() = 0;

	virtual void print(string pre = "", string post = ", ") = 0;
	
	virtual bool sadrzi(Tip susjed) = 0;
};

