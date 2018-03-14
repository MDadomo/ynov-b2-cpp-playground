//
//  FenCodeGenere.hpp
//  ZeroClassGenerator
//
//  Created by Marie Dadomo on 13/02/2018.
//  Copyright © 2018 Marie Dadomo. All rights reserved.
//

#ifndef FenCodeGenere_hpp
#define FenCodeGenere_hpp

#include <stdio.h>

#include <QtWidgets>

class FenCodeGenere : public QDialog
{
public:
    FenCodeGenere(QString &code, QWidget *parent);
    
private:
    QTextEdit *codeGenere;
    QPushButton *fermer;
};

#endif /* FenCodeGenere_hpp */
