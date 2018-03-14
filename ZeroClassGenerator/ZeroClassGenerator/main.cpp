//
//  main.cpp
//  ZeroClassGenerator
//
//  Created by Marie Dadomo on 13/02/2018.
//  Copyright © 2018 Marie Dadomo. All rights reserved.
//

#include <iostream>
#include "FenPrincipale.hpp"
#include <QApplication>


int main(int argc, char* argv[])
{

    QApplication app(argc, argv);
    
    
    FenPrincipale fenetre;
    fenetre.show();
    
    
    return app.exec();
    
}
