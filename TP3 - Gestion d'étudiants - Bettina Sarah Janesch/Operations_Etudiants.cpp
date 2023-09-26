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
	static int CodeCourant = 42001;
	return CodeCourant++;
}

void AjouterUnEtudiant()
{
	setlocale(LC_ALL, "fr_CA");
	string NomEtudiant;
	string ProgrammeEtudiant;
	cout << "==========" << NomCollege << "=========="
		"\n\nEntrez le nom du nouvel �tudiant";
	cin >> NomEtudiant;
	cout << "\nEntrez le nom du programme";
	cin >> ProgrammeEtudiant;
	Etudiant_s NouvelEtudiant = {CodeEtudiantCourant(),NomEtudiant, ProgrammeEtudiant};
	ListeEtudiants.push_back(NouvelEtudiant);
	NombreEtudiantsInscrits++;
}

void AfficherUnEtudiant(int CodeEtudiant)
{
	setlocale(LC_ALL, "fr_CA");
	
	for (int i = 0; i < ListeEtudiants.size(); i++) // en cas d'erreur du code inser� ?? rien mettre comme erreur?
	{
		if (ListeEtudiants[i].IDEtudiant == CodeEtudiant)
		{
			cout << "\n+++ Informations de l'�tudiant choisi +++ \n";
			cout << "\n\nNom de l'�tudiant: " << ListeEtudiants[i].NomComplet << "\tProgramme dans lequel l'�tudiant est inscrit: " << ListeEtudiants[i].Programme;
		}
	}
}

void AfficherTousEtudiants()
{
	cout << "==========" << NomCollege << "==========\n\n"
		"LISTE DE TOUS LES �TUDIANTS\n\n"
		"Code de l'�tudiant\tNom de l'�tudiant\tProgramme dans lequel l'�tudiant est inscrit\n\n";
	for (int i = 0; i < ListeEtudiants.size(); i++)
	{
		cout << ListeEtudiants[i].IDEtudiant << "\t\t\t" << ListeEtudiants[i].NomComplet << "\t\t\t" << ListeEtudiants[i].Programme<<"\n";
	}

}