#ifndef OPERATIONS_ETUDIANTS_H
#define OPERATIONS_ETUDIANTS_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Etudiant_s
{
	int IDEtudiant;
	string NomComplet;
	string Programme;
};

static int CodeEtudiantCourant();

void AjouterUnEtudiant();

void AfficherUnEtudiant(int CodeEtudiant);

void AfficherTousEtudiants();


#endif
