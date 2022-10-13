#ifndef RESTO_H
#define RESTO_H

#include <iostream>
#include <string.h>
#include <ctime>

using namespace std;


class client
{
    private:

    string prenom;
    string nom;
    string mode_paiement;
    string type_commande;
    
    string entrer;      ///COMMANDE///
    string plat;
    string dessert;
    int addition=0;

    string dt;

    public:

    client(string identifiant, string non, string mode)
    {
        prenom = identifiant;
        nom = non;
        mode_paiement = mode;
    }
    client(){}

    void set_prenom(string pseudo);
    void set_nom(string name);
    void set_paiement(string paiement);
    void set_type_commande(string type);
    
    void set_entrer(string debut);
    void set_plat(string milieu);
    void set_dessert(string fin);
    void set_addition(int add);

    string get_prenom();
    string get_nom();
    string get_paiement();
    string get_type_commande();

    string get_entrer();
    string get_plat();
    string get_dessert();
    int get_addition();

    void Ajouter();

    void valider_commande();
    void afficherclient();
    
    void ajouter_commande();
    void modifier_commande();
    void supprimer_commande();
    void afficher();

    void date_commande();
    void set_date_commande(string date);
    string get_date_commande();
};
#endif