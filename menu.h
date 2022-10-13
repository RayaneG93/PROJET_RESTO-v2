#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string.h>
using namespace std;


class Menu
{
    private:

    string entrer;      ///COMMANDE///
    string plat;
    string dessert;
    int addition=0;

    public:
    Menu(){}

    void set_entrer(string debut);
    void set_plat(string milieu);
    void set_dessert(string fin);
    void set_addition(int add);

    string get_entrer();
    string get_plat();
    string get_dessert();
    int get_addition();

    void afficher_menu_lundi();
    void afficher_menu_mardi();
    void afficher_menu_mercredi();
    void afficher_menu_jeudi();
    void afficher_menu_vendredi();
    void menu();

};
#endif