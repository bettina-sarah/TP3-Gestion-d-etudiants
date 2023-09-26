#include <string>
#include <iostream>
#include <vector>
#include "Operations_Etudiants.h";

using namespace std;

int NombreEtudiantsInscrits = 0; // variable globale incrementé visible dans le main, extern dans le main

extern const string NomCollege = "CEGEP ACME";

static string NomDirecteur = "Directeur Cool"; 

//!!tous les types et structures et les données (vecteurs) des étudiants ne devraient être visible que dans le module des étudiants.

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
		"\n\nEntrez le nom du nouvel étudiant";
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
	
	for (int i = 0; i < ListeEtudiants.size(); i++) // en cas d'erreur du code inseré ?? rien mettre comme erreur?
	{
		if (ListeEtudiants[i].IDEtudiant == CodeEtudiant)
		{
			cout << "\n+++ Informations de l'étudiant choisi +++ \n";
			cout << "\n\nNom de l'étudiant: " << ListeEtudiants[i].NomComplet << "\tProgramme dans lequel l'étudiant est inscrit: " << ListeEtudiants[i].Programme;
		}
	}
}

void AfficherTousEtudiants()
{
	cout << "==========" << NomCollege << "==========\n\n"
		"LISTE DE TOUS LES ÉTUDIANTS\n\n"
		"Code de l'étudiant\tNom de l'étudiant\tProgramme dans lequel l'étudiant est inscrit\n\n";
	for (int i = 0; i < ListeEtudiants.size(); i++)
	{
		cout << ListeEtudiants[i].IDEtudiant << "\t\t\t" << ListeEtudiants[i].NomComplet << "\t\t\t" << ListeEtudiants[i].Programme<<"\n";
	}

}