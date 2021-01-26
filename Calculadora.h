#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QDialog>
#include "ui_Calculadora.h"

class Calculadora: public QDialog, public Ui::Calculadora{

    Q_OBJECT
    
public:
    float num;
    char operacion;
    Calculadora(QWidget *parent = 0);    

public slots:
    void slotDigito();
    void slotOperacion();
    void slotIgual();
    void slotBorrar();
};

#endif