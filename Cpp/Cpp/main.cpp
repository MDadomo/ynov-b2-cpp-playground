//
//  main.cpp
//  Cpp
//
//  Created by Marie Dadomo on 13/02/2018.
//  Copyright © 2018 Marie Dadomo. All rights reserved.
//

#include <iostream> // inclut la bibliothéque iosstream
#include <cmath>
using namespace std; //indique l espace de noms on va utiliser


void direBonjour(){
   cout<<"Bonjour!"<< endl;
}


string randomLettre(string mot)
{
    string random;
    int position(0);
    while (mot.size() !=0)
    {
        position = rand() % mot.size();
        random += mot[position];
        mot.erase(position,1);
    }
    return random;
}


int main()
{
    string motJoueur1, motJoueur2,motModif;
    
    direBonjour();
    cout << "Bienvenur dans le jeu LE MOT MYSTERE !!"<< endl;
    

    
    cout << "joueur 1 veuillez saisir un mot : " << endl;
    cin >> motJoueur1;
    
    motModif = randomLettre(motJoueur1);
    
    do
    {
        cout << endl <<"Quel est le mot Mystere JOUEUR 2 ?"<< motModif << endl;
        cin >> motJoueur2;
        
        if (motJoueur1 == motJoueur2)
        {
            cout<<"Bravo ! Vous avez Trouve !"<< endl;
        }
        else
        {
            cout << "Dommage ! Essaye encore !!! " << endl;
        }
    }
    while ( motJoueur1 != motJoueur2);
    {
        return 0;
        
    }
}




