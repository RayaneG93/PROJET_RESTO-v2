#include "menu.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

void Menu::afficher_menu_lundi(){

    string jour = "Lundi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    cout<< "*************************************************************************"<<endl;
    cout<< "MENU LUNDI : "<<endl;

    ifstream myfile("menu.txt");
    if (myfile.is_open()) 
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }
}

void Menu::afficher_menu_mardi(){

    string jour = "Mardi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    cout<< "*************************************************************************"<<endl;
    cout<< "MENU MARDI : "<<endl;

    ifstream myfile("menu.txt");
    if (myfile.is_open()) 
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }
}

void Menu::afficher_menu_mercredi(){

    string jour = "Mercredi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    cout<< "*************************************************************************"<<endl;
    cout<< "MENU MERCREDI : "<<endl;

    ifstream myfile("menu.txt");
    if (myfile.is_open()) 
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }
}

void Menu::afficher_menu_jeudi(){

    string jour = "Jeudi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    cout<< "*************************************************************************"<<endl;
    cout<< "MENU JEUDI : "<<endl;

    ifstream myfile("menu.txt");
    if (myfile.is_open()) 
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }
}

void Menu::afficher_menu_vendredi(){

    string jour = "Vendredi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    cout<< "*************************************************************************"<<endl;
    cout<< "MENU VENDREDI : "<<endl;

    ifstream myfile("menu.txt");
    if (myfile.is_open()) 
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }
}


///////////////////////////////////////////////////////////////////////////////


void Menu::menu(){

    time_t now = time(0);
    tm *ltm = localtime(&now);

    if (ltm->tm_wday == 1 )
    {
        afficher_menu_lundi();
    }
    else if(ltm->tm_wday == 2)
    {
        afficher_menu_mardi();
    }
    else if(ltm->tm_wday == 3)
    {
        afficher_menu_mercredi();
    }
    else if(ltm->tm_wday == 4)
    {
        afficher_menu_jeudi();
    }
    else if(ltm->tm_wday == 5)
    {
        afficher_menu_vendredi();
    }
    
    
    




}