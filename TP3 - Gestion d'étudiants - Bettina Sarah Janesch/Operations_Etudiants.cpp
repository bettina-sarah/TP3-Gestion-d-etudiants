#include <string>
#include <iostream>
#include <vector>
#include "Operations_Etudiants.h";

using namespace std;

int NombreEtudiantsInscrits = 0; // variable globale increment� visible dans le main, extern dans le main

extern const string NomCollege = "CEGEP ACME";

static string NomDirecteur = "Directeur Cool"; 

//!!tous les types et structures et les donn�es (vecteurs) des �tudiants ne devraient �tre visible que dans le module des �tudiants.

vector <Etudiant_s> ListeEtudiants;

static int CodeEtudiantCourant()
{
	static int CodeCourant = 0;
	CodeCourant += 42001;

	return CodeCourant;
	//CodeCourant++;
}
