#include "resto.h"
#include "menu.h"
#include <iostream>
#include <string.h>
#include <fstream>
#include <ctime>
#include <windows.h>

using namespace std;


int main()
{   

    SetConsoleOutputCP(65001);
    int i;
    int choixC;
    int nbr_client=0;  // NOMBRE DE CLIENT
    client yencli[50]; // TABLEAU DES CLIENTS
    Menu menu; 
    
    string mdp = "rayayouye"; /// MDP GERANT
    string x; /// VARIABLE POUR MDP GERANT
    int choixg; /// CHOIX DU GERANT

    void date_commande();
    client ajouter_commande();
    client Ajouter();

    while ( i != 3)
    {
        cout << "                   ~~~~~~~~~~~~~~~~~~~~  \n";
        cout << "                   |    STREET-FOOD   |  \n";
        cout << "                   ~~~~~~~~~~~~~~~~~~~~  \n\n";
        cout << "   ~~~~~~~~~~~~~~~~~~                ~~~~~~~~~~~~~~~~~"<<endl;
        cout << "   |[1] -  CLIENT   |                |[2] -  GERANT  |"<<endl;    
        cout << "   ~~~~~~~~~~~~~~~~~~                ~~~~~~~~~~~~~~~~~"<<endl;
        cout << "                   ~~~~~~~~~~~~~~~~~~~~  \n";
        cout << "                   |[3]    QUITTER    |  \n";
        cout << "                   ~~~~~~~~~~~~~~~~~~~~  \n\n";
        cout << "\nVeuillez indiquer votre statut :"<<endl;    
        cin >> i;

        if (i == 1)
        {
            int b;
            yencli[nbr_client].Ajouter();
            nbr_client++;
            yencli[nbr_client-1].date_commande();
            do
            {
        
                menu.menu();

                cout << "       ~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "       |[1] -  COMMANDER  |         |[2] -  MODIFIER   |"<<endl;    
                cout << "       ~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "       ~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout << "       |[3] -  SUPPRIMER  |         |[4] -   VALIDER   |"<<endl;    
                cout << "       ~~~~~~~~~~~~~~~~~~~~         ~~~~~~~~~~~~~~~~~~~~"<<endl;
                yencli[nbr_client-1].afficher();

                cout<< "Que voulez-vous faire ?"<<endl;

                cin >> choixC;
                if (choixC == 1)
                {
                    yencli[nbr_client-1].ajouter_commande();
                }
                else if (choixC == 2)
                {
                    yencli[nbr_client-1].modifier_commande();
                }
                else if (choixC == 3)
                {
                    yencli[nbr_client-1].supprimer_commande();
                }
                else if (choixC == 4)
                {
                    for ( b = 0; b < nbr_client; b++)
                    {
                        yencli[b].valider_commande();
                    }
                    
                }
            }while (choixC != 4);

        }
        else if (i == 2)
        {
            int a;
            cout << "\nBONJOUR PATRON !"<<endl;
            cout << "\nEntrer votre mot de passe : "<<endl;
            cin >> x;
            if (x==mdp)
            {
                cout << "\nQue voulez-vous faire ?\n"<<endl;
                cout << "[1] Informations des clients"<<endl;
                cout << "[2] Verifier recettes du jour"<<endl;
                cin >> choixg;
                if (choixg == 1)
                {
                    for ( a = 0; a < nbr_client; a++)
                    {
                        yencli[a].afficherclient();
                    }
                }
                else if (choixg == 2)
                {

                }   
            }
            else
            {
                cout << "\nMot de passe incorrect !\n"<<endl;
            }
        }
    }
    return 0;
}

