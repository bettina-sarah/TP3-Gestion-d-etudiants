#include <iostream>
#include <conio.h>

using namespace std;

void main(void) {
	setlocale(LC_ALL, "fr_CA");

	// Variables locales
	bool QuitterMenu = false;
	char ChoixMenu = ' ';

	// Boucler sur le menu
	do {
		// Vider l'�cran
		system("cls");

		// Afficher le menu
		cout << "========= MENU DE GESTION D'�TUDIANTS ET DE COURS =========" << endl;
		cout << "\t1- Cr�er un �tudiant" << endl;
		cout << "\t2- Afficher les informations d�un �tudiant" << endl;
		cout << "\t3- Afficher les informations de tous les �tudiants" << endl;
		cout << "\tQ - Quitter" << endl;
		cout << "S�lectionnez une option: ";
		cin >> ChoixMenu;

		// Gestion des options de menu
		switch (ChoixMenu) {
		case '1':
			system("cls");



			cout << "Appuyez sur une touche pour continuer...";
			_getche();
			break;
		case '2':
			system("cls");



			cout << "Appuyez sur une touche pour continuer...";
			_getche();
			break;
		case '3':
			system("cls");



			cout << "Appuyez sur une touche pour continuer...";
			_getche();
			break;
		case 'q':
		case 'Q':
			system("cls");
			cout << "Au revoir!" << endl;
			cout << "Appuyez sur une touche pour terminer.";
			QuitterMenu = true;
			_getche();
			break;
		default:
			system("cls");
			cout << "Option invalide.  Appuyez sur une touche pour faire un autre choix.";
			_getche();
			break;
		}
	} while (!QuitterMenu);
}
