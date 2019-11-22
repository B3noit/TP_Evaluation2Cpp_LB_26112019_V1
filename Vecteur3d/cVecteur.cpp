#include "cVecteur.h"

//Constructeur "par d�faut" sans param�tres les valeurs sont initialis�es � 0
cVecteur::cVecteur()
{
	this->f_X = 0;
	this->f_Y = 0;
	this->f_Z = 0;
}

//Constructeur avec param�tres
cVecteur::cVecteur(float f_X, float f_Y, float f_Z)
{
	this->f_X = f_X;
	this->f_Y = f_Y;
	this->f_Z = f_Z;
}

