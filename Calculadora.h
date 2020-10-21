#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QDialog>
#include "ui_Calculadora.h"

class Calculadora: public QDialog, public Ui::Calculadora{

    Q_OBJECT
    
public:
    Calculadora(QWidget *parent = 0);

public slots:
    void slotDigito();
};

#endif