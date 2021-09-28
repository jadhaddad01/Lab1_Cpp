#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    // Nombre d'octets par type de valeur
    cout << "Taille en octets d'un caractere: " << sizeof(char) << endl;
    cout << "Taille en octets d'un entier: " << sizeof(int) << endl;
    cout << "Taille en octets d'un réel: " << sizeof(float) << endl;
    cout << "Taille en octets d'un double: " << sizeof(double) << endl;
    cout << "Taille en octets d'un entier court: " << sizeof(short int) << endl;
    cout << "Taille en octets d'un entier non signé: " << sizeof(unsigned int) << endl;

    // initialisation des valeurs qui vont etre demandés
    int entier;
    int decimal;
    float réel;
    char charactere;

    cout << "\n";

    // entier
    cout << "Saisissez un entier: ";
    cin >> entier;
    cout << "nombre en décimal: " << dec << entier << endl; // 2eme maniere: changer dec -> setbase(10)
    cout << "nombre en octal: " << oct << entier << endl;   // 2eme maniere: changer oct -> setbase(8)
    cout << "nombre en hexa: " << hex << entier << endl;    // 2eme maniere: changer hex -> setbase(16)

    cout << "\n";

    // decimal
    cout << "Saisissez un décimal: ";
    cin >> decimal;                                        // décimal est un int par défaut
    cout << "nombre en octal: " << oct << decimal << endl; // 2eme maniere: changer oct -> setbase(8)
    cout << "nombre en hexa: " << hex << decimal << endl;  // 2eme maniere: changer hex -> setbase(16)

    cout << "\n";

    // réel
    cout << "Saisissez un reel: ";
    cin >> réel;
    cout << setprecision(3) << setiosflags(ios::left | ios::fixed) << réel << endl;          // nombre réel SANS puissance de 10 avec 3 chiffres significatifs
    cout << setprecision(3) << setiosflags(ios::left | ios::fixed) << pow(réel, 10) << endl; // nombre réel AVEC puissance de 10 avec 3 chiffres significatifs

    cout << "\n";

    // charactere
    cout << "Saisissez un caractere: ";
    cin >> charactere;
    cout << charactere << endl;      // afficher charactere
    cout << int(charactere) << endl; // int décimal par défaut

    // retour
    return 1;
}
