/*monfichier3a.cpp : Ex3a Devoir1 CSI2772A*/

#include <iostream>
#include <vector>

using namespace std;

/* Fonction de selection rechercheIndex qui renvoie l'indice de la valeur max d'un tableau
**
*/
int rechercheIndex(vector<int> T, int imax)
{
	if (T.size() < imax - 1)
	{
		cout << "Erreur ! Tableau trop petit ! " << endl;
		return -1;
	}
	int res = 0;
	for (int i = 1; i <= imax; i++)
		if (T[i] > T[res])
			res = i;
	return res;
}

/* Fonction saisieTab pour saisir les valeurs de votre tableau
**
*/
vector<int> saisieTab()
{
	int taille;
	cout << " Entrer la taille de votre tableau: ";
	cin >> taille;
	vector<int> res(taille, 0);
	cout << " Saisir les valeurs de votre tableau: \n";
	for (int i = 0; i < taille; i++)
	{
		cout << " val[ " << i << "] =";
		cin >> res[i];
	}
	cout << "\n";
	return res;
}

/* Fonction trier avec Passage par valeur
**
*/
vector<int> trier(vector<int> T)
{
	vector<int> tmp = T;					 // vecteur qu'on peut changer
	for (int j = 0; j < tmp.size() - 1; j++) // loop pour trier
	{
		if (tmp[j] > tmp[j + 1]) // si c'est plus grand on swap
		{
			int temp = tmp[j]; // swap
			tmp[j] = tmp[j + 1];
			tmp[j + 1] = temp;

			j = -1; // apres j++ ca devient 0
		}
	}

	// vérifions que c'est trié
	if (rechercheIndex(tmp, tmp.size()) == tmp.size() - 1) // on regarde si le maximum est dans la derniere indice (on appelle recherecheIndex)
	{
		return tmp;
	}

	exit(0);
}

/* Fonction principale main
**
*/
int main()
{
	vector<int> tab;
	vector<int> tabTrie;
	tab = saisieTab();
	cout << "Les valeurs de mon tableau sont : ";
	for (int i = 0; i < tab.size(); i++)
	{
		cout << "\n"
			 << tab[i];
	}
	cout << "\n";

	tabTrie = trier(tab);
	cout << "\nLes valeurs de mon tableau trie sont : ";
	for (int i = 0; i < tabTrie.size(); i++)
	{
		cout << "\n"
			 << tabTrie[i];
	}

	cout << "\n";
}
