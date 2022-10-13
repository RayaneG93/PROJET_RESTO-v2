#include "resto.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <ctime>


using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void client::date_commande()
{

    // date / heure actuelle basée sur le système actuel
    time_t tmm = time(0);
    // convertir en forme de chaîne
    char* dt = ctime(&tmm);
    cout << "La date et l'heure UTC sont: "<< dt << endl;


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void client::set_prenom(string pseudo){

    prenom = pseudo;

}

void client::set_nom(string name){

    nom = name;

}

void client::set_paiement(string paiement){

    mode_paiement = paiement;

}

void client::set_entrer(string debut){

    entrer = debut;

}

void client::set_plat(string milieu){

    plat = milieu;

}

void client::set_dessert(string fin){

    dessert = fin;

}

void client::set_addition(int add){

    addition = add;

}

void client::set_type_commande(string type){

    type_commande = type;

}

void client::set_date_commande(string date){

    dt = date;

}


///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

string client::get_prenom(){


    return prenom;
}

string client::get_nom(){

    return nom;
}

string client::get_paiement(){

    return mode_paiement;
}

string client::get_entrer(){


    return entrer;
}

string client::get_plat(){


    return plat;
}

string client::get_dessert(){


    return dessert;
}

int client::get_addition(){

    return addition;

}

string client::get_type_commande(){

    return type_commande;

}

string client::get_date_commande(){

    return dt;

}


////////////////////////////////////////////////AFFICHAGE////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void client::valider_commande()
{
    // date / heure actuelle basée sur le système actuel
    time_t tmm = time(0);
    // convertir en forme de chaîne
    char* dt = ctime(&tmm);

    ofstream flux;
    flux.open("commande.txt",ios::out|ios::app); /// FICHIER DES COMMANDES /// 
    if (flux)
    {
        flux << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
        flux <<"Prenom: "<< prenom<<endl;
        flux <<"Nom: "<< nom <<endl;
        flux <<"Mode de paiement: "<< mode_paiement<<endl;
        flux <<"Sur place ou emporter: "<< type_commande<<endl;
        flux <<"Commande: "<<endl;
        flux <<"    - "<< entrer <<endl;
        flux <<"    - "<< plat <<endl;
        flux <<"    - "<< dessert <<endl;
        flux <<"Addition: "<< addition <<" euro"<<endl;
        flux << dt << endl;
        flux << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    }
    else                                                                  //////AFFICHAGE CLIENT//////
    {
        cout << "ERREUR : IL Y A PLUS DE PAPIER"<<endl;
    }

    cout << "\nVOTRE COMMANDE EST EN COURS DE PREPARATION !\n\n\n"<<endl;

}

void client::afficherclient()
{

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
    cout << "PRENOM: "<< prenom <<endl;
    cout << "NOM: "<< nom <<endl;
    cout << "MODE DE PAIEMENT: "<< mode_paiement <<endl;
    cout <<"Sur place ou emporter: "<< type_commande<<endl;
    cout << "COMMANDE: "  <<endl;
    cout <<"    - "<< entrer <<endl;
    cout <<"    - "<< plat <<endl;
    cout <<"    - "<< dessert <<endl;
    cout <<"Addition: "<< addition <<" euro"<<endl;
    date_commande();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
}


/////////////////////////////////////////////GESTION COMMANDE////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void client::Ajouter()
{

    int money;
    int y;
        cout << "BIENVENUE CHEZ STREET-FOOD ! \n"<<endl;
        cout << "PRENOM : ";
        cin >> prenom;
        set_prenom(prenom);
        cout << "NOM : ";
        cin >> nom;
        set_nom(nom);
        cout << "Mode de paiement: [1] Especes | [2] Carte bleu\n";
        cin >> money;
        if (money == 1)
        {
            mode_paiement = "Especes";
            set_paiement(mode_paiement);
        }
        else if (money == 2)
        {
            mode_paiement = "Carte bleu";
            set_paiement(mode_paiement);
        }
        cout <<"Sur place ou emporter: [1] Sur place | [2] Emporter\n"<<endl;
        cin >> y;
        if (y == 1)
        {
            type_commande = "Sur place";
            set_type_commande(type_commande);
        }
        else if (y == 2)
        {
            type_commande = "Emporter";
            set_type_commande(type_commande);
        }   
        cout << "\n";
    
} 

/////////////////////////////////////////////MENU///////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void menu(){
/*  int choix;
    cout << "~~~~~~~~~~~~~~~~~~           ~~~~~~~~~~~~~~~~~"<<endl;
    cout << "|[1] - SUR PLACE |           |[2] - EMPORTER |"<<endl;    
    cout << "~~~~~~~~~~~~~~~~~~           ~~~~~~~~~~~~~~~~~"<<endl;
    cin >> choix;*/

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|MENU|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << "|                                                                    |"<<endl;    
    cout << "|   ENTRER :                                                         |"<<endl;
    cout << "|   Carpaccio de boeuf fraichement tranche 8,5 euro                  |"<<endl;
    cout << "|   Bruschetta saumon ( 2 pieces) 5,5 euro                           |"<<endl;
    cout << "|   Bouchee a la reine 8,5 euro                                      |"<<endl;
    cout << "|                                                                    |"<<endl;    
    cout << "|   PLAT :                                                           |"<<endl;
    cout << "|   Pizza Diavolata 11 euro                                          |"<<endl;
    cout << "|    (Tomate, sauce picante, Mozarella, jambon et viande hachee)     |"<<endl;
    cout << "|   Escalope Florentina 15 euro                                      |"<<endl;
    cout << "|    (Escalope, Aubergine, sauce napolitaine, Mozarella Al forno)    |"<<endl;
    cout << "|   Pates Pesto Aux choix : Tagliatelles.Penne ou Spaghetti 10 euro  |"<<endl;                   /////// MENU///////
    cout << "|    [Basilic, copeaux de Parmesan, pignons de pin)                  |"<<endl;
    cout << "|                                                                    |"<<endl;    
    cout << "|   Dessert :                                                        |"<<endl;
    cout << "|   Tiramisu 5 euro                                                  |"<<endl;
    cout << "|   Moelleux au chocolat 5 euro                                      |"<<endl;
    cout << "|   Cafe gourmand 5 euro                                             |"<<endl;
    cout << "|   Boissons Cafe 1,9 euro                                           |"<<endl;
    cout << "|   Bouteille d eau 4,9 euro                                         |"<<endl;
    cout << "|   Demi bouteille d eau 3 euro                                      |"<<endl;
    cout << "|                                                                    |"<<endl;   
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void client::ajouter_commande()
{
    int choix_entrer;
    int choix_plat;                                                                           //GESTION COMMANDE//
    int choix_dessert;
    
    cout << "Entrer : \n"<<endl;                                                        /////// ENTRER /////////
    cout << "   [1] Carpaccio de boeuf fraichement tranche 8 euro"<<endl;
    cout << "   [2] Bruschetta saumon ( 2 pieces) 5 euro"<<endl;
    cout << "   [3] Bouchee a la reine 8 euro"<<endl;
    cout << "   [4] JE NE VEUX PAS D ENTRER \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_entrer;

    if (choix_entrer == 1)
    {
        entrer = "Carpaccio de boeuf fraichement tranche";
        addition = addition+8;
        set_entrer(entrer);
        set_addition(addition);

    }
    else if (choix_entrer == 2)
    {
        entrer = "Bruschetta saumon ( 2 pieces)";
        addition = addition+5;
        set_entrer(entrer);
        set_addition(addition);
    }
    else if (choix_entrer == 3)
    {
        entrer = "Bouchee a la reine";
        addition = addition+8;
        set_entrer(entrer);
        set_addition(addition);
    }
    else if (choix_entrer == 4)
    {
        entrer = "PAS D ENTRER";
        addition = addition+0;
        set_entrer(entrer);
        set_addition(addition);

    }

    cout << "PLAT : \n"<<endl;                              //////// PLAT ////////////
    cout << "   [1] Pizza Diavolata 11 euro"<<endl;
    cout << "   [2] Escalope Florentina 15 euro"<<endl;
    cout << "   [3] Spaghetti au pesto  10 euro"<<endl;
    cout << "   [4] JE NE VEUX PAS DE PLAT \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_plat;

    if (choix_plat == 1)
    {
        plat = "Pizza Diavolata";
        addition = addition+11;
        set_plat(plat);
        set_addition(addition);

    }
    else if (choix_plat == 2)
    {
        plat = "Escalope Florentina";
        addition = addition+15;
        set_plat(plat);
        set_addition(addition);
    }
    else if (choix_plat == 3)
    {
        plat = "Spaghetti au pesto";
        addition = addition+10;
        set_plat(plat);
        set_addition(addition);
    }
    else if (choix_plat == 4)
    {
        plat = "PAS DE PLAT";
        addition = addition+0;
        set_plat(plat);
        set_addition(addition);
    }

    cout << "DESSERT : \n"<<endl;                              //////// DESSERT ////////////
    cout << "   [1] Tiramisu 5 euro "<<endl;
    cout << "   [2] Moelleux au chocolat 5 euro"<<endl;
    cout << "   [3] Cafe gourmand 5 euro"<<endl;
    cout << "   [4] Boissons Cafe 2 euro "<<endl;
    cout << "   [5] Bouteille d eau 4 euro "<<endl;
    cout << "   [6] Demi bouteille d eau 3 euro "<<endl;
    cout << "   [7] JE NE VEUX PAS DE DESSERT \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_dessert;

    if (choix_dessert == 1)
    {
        dessert = "Tiramisu";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);

    }
    else if (choix_dessert == 2)
    {
        dessert = "Moelleux au chocolat";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 3)
    {
        dessert = "Cafe gourmand";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 4)
    {
        dessert = "Boissons Cafe";
        addition = addition+2;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 5)
    {
        dessert = "Bouteille d eau";
        addition = addition+4;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 6)
    {
        dessert = "Demi bouteille d eau";
        addition = addition+3;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 7)
    {
        dessert = "PAS DE DESSERT";
        addition = addition+0;
        set_dessert(dessert);
        set_addition(addition);
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void client::modifier_commande()
{
    int choix_modif;
    int choix_entrer;
    int choix_plat;
    int choix_dessert;

    cout << "\n\nCOMMANDE: "  <<endl;
    cout <<"    - "<< entrer <<endl;
    cout <<"    - "<< plat <<endl;
    cout <<"    - "<< dessert <<endl;
    cout <<"\nAddition: "<< addition <<" euro"<<endl;
    cout << "\nQue voulez-vous modifier ? "  <<endl;
    cout <<"\n[1] Entrer | [2] Plat | [3] Dessert \n"<<endl;
    cin >> choix_modif;

    if (choix_modif == 1)
    {

    cout << "Entrer : \n"<<endl;                                                        /////// ENTRER /////////
    cout << "   [1] Carpaccio de boeuf fraichement tranche 8 euro"<<endl;
    cout << "   [2] Bruschetta saumon ( 2 pieces) 5 euro"<<endl;
    cout << "   [3] Bouchee a la reine 8 euro"<<endl;
    cout << "   [4] JE NE VEUX PAS D ENTRER \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_entrer;

    if (choix_entrer == 1)
    {
        entrer = "Carpaccio de boeuf fraichement tranche";
        addition = addition+8;
        set_entrer(entrer);
        set_addition(addition);

    }
    else if (choix_entrer == 2)
    {
        entrer = "Bruschetta saumon ( 2 pieces)";
        addition = addition+5;
        set_entrer(entrer);
        set_addition(addition);
    }
    else if (choix_entrer == 3)
    {
        entrer = "Bouchee a la reine";
        addition = addition+8;
        set_entrer(entrer);
        set_addition(addition);
    }
    else if (choix_entrer == 4)
    {
        entrer = "PAS D ENTRER";
        addition = addition+0;
        set_entrer(entrer);
        set_addition(addition);

    }
    }
    if (choix_modif == 2)
    {

    cout << "PLAT : \n"<<endl;                              //////// PLAT ////////////
    cout << "   [1] Pizza Diavolata 11 euro"<<endl;
    cout << "   [2] Escalope Florentina 15 euro"<<endl;
    cout << "   [3] Spaghetti au pesto  10 euro"<<endl;
    cout << "   [4] JE NE VEUX PAS DE PLAT \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_plat;

    if (choix_plat == 1)
    {
        plat = "Pizza Diavolata";
        addition = addition+11;
        set_plat(plat);
        set_addition(addition);

    }
    else if (choix_plat == 2)
    {
        plat = "Escalope Florentina";
        addition = addition+15;
        set_plat(plat);
        set_addition(addition);
    }
    else if (choix_plat == 3)
    {
        plat = "Spaghetti au pesto";
        addition = addition+10;
        set_plat(plat);
        set_addition(addition);
    }
    else if (choix_plat == 4)
    {
        plat = "PAS DE PLAT";
        addition = addition+0;
        set_plat(plat);
        set_addition(addition);
    }
    }
    if (choix_modif == 3)
    {
    cout << "DESSERT : \n"<<endl;                              //////// DESSERT ////////////
    cout << "   [1] Tiramisu 5 euro "<<endl;
    cout << "   [2] Moelleux au chocolat 5 euro"<<endl;
    cout << "   [3] Cafe gourmand 5 euro"<<endl;
    cout << "   [4] Boissons Cafe 2 euro "<<endl;
    cout << "   [5] Bouteille d eau 4 euro "<<endl;
    cout << "   [6] Demi bouteille d eau 3 euro "<<endl;
    cout << "   [7] JE NE VEUX PAS DE DESSERT \n"<<endl;
    cout << "Que voulez-vous : ";
    cin >> choix_dessert;

    if (choix_dessert == 1)
    {
        dessert = "Tiramisu";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);

    }
    else if (choix_dessert == 2)
    {
        dessert = "Moelleux au chocolat";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 3)
    {
        dessert = "Cafe gourmand";
        addition = addition+5;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 4)
    {
        dessert = "Boissons Cafe";
        addition = addition+2;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 5)
    {
        dessert = "Bouteille d eau";
        addition = addition+4;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 6)
    {
        dessert = "Demi bouteille d eau";
        addition = addition+3;
        set_dessert(dessert);
        set_addition(addition);
    }
    else if (choix_dessert == 7)
    {
        dessert = "PAS DE DESSERT";
        addition = addition+0;
        set_dessert(dessert);
        set_addition(addition);
    }
    }
}

void client::supprimer_commande()
{
    prenom = "///////////";
    set_prenom(prenom);
    nom = "///////////";
    set_nom(nom);
    mode_paiement = "///////////";
    set_paiement(mode_paiement);

    entrer = "///////////";
    set_entrer(entrer);
    plat = "///////////";
    set_plat(plat);
    dessert = "///////////";
    set_dessert(prenom);
    addition = 0;
    set_addition(addition);

    cout <<"\n\nVOTRE COMMANDE A BIEN ETE SUPPRIMER !\n\n"<<endl;

}

void client::afficher(){

    cout << "\n\nCOMMANDE: "  <<endl;
    cout <<"    - "<< entrer <<endl;
    cout <<"    - "<< plat <<endl;
    cout <<"    - "<< dessert <<endl;
    cout <<"\nAddition: "<< addition <<" euro"<<endl;

}