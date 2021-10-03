// lab1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "monfichier2.h"

using namespace std;
int comptSurface = 0;
int comptVolume = 0;
// const double Pi = 3.14159;

int surface(double const &ray)
{
    comptSurface++;
    cout << "La surface est: " << (Pi * pow(ray, 2)) << endl;
    return comptSurface;
}

int volume(double const &ray, double const &haut)
{
    comptVolume++;
    double surf = (Pi * pow(ray, 2));
    cout << "Le volume est: " << (surf * haut) << endl;
    return comptVolume;
}

char menu()
{
    cout << endl
         << "Que aouhaitez - vous faire ?: " << endl;
    cout << " - Calculer la surface du disque de rayon (Tapez 1): " << endl;
    cout << " - Calculer le volume du cylindre de rayon et hauteur (Tapez 2): " << endl;
    cout << " - Quittez le programme (Tapez 3): ";
    char choix;
    cin >> choix;
    cout << endl
         << "Votre choix: " << choix << endl;

    return choix;
}
