#pragma once
class cVecteur
{
private: //Accessible que dans la classe elle m�me
	//Donn�es membres de la classe (coordonn�es du vecteur)
	float f_X;
	float f_Y;
	float f_Z;

public://Accessible partout, dans et � l'ext�rieur de la classe


	//Constructeur "par d�faut" sans param�tres
	cVecteur();

	//Constructeur avec param�tres
	cVecteur(float f_X, float f_Y, float f_Z);
};





