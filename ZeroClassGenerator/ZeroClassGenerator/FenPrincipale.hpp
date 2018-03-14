//
//  FenPrincipale.hpp
//  ZeroClassGenerator
//
//  Created by Marie Dadomo on 13/02/2018.
//  Copyright © 2018 Marie Dadomo. All rights reserved.
//

#ifndef FenPrincipale_hpp
#define FenPrincipale_hpp

#include <stdio.h>
#include <QtWidgets>

class FenPrincipale : public Qwidget{
    Q_OBJECT
    
public:
    FenPrincipale();
    
    private slots:
    void genererCode();
    
private:
    QLineEdit *nom;
    QLineEdit *classeMere;
    QCheckBox *protections;
    QCheckBox *genererConstructeur;
    QCheckBox *genererDestructeur;
    QGroupBox *groupCommentaires;
    QLineEdit *auteur;
    QDateEdit *date;
    QTextEdit *role;
    QPushButton *generer;
    QPushButton *quitter;
};

#endif /* FenPrincipale_hpp */
