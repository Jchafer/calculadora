#include "Calculadora.h"
#include <QDebug>

Calculadora::Calculadora(QWidget *parent) : QDialog(parent){
    setupUi(this);

    connect(boton1, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton2, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    
}

void Calculadora::slotDigito(){
    labelDisplay->setText(labelDisplay->text() + QString::number(1));

    qDebug() <<"LLegas aqui"<<endl;
    QObject * culpable = sender();
    QPushButton * bc = qobject_cast <QPushButton*> (culpable);
    QString nuevoTexto = labelDisplay->text() + bc->text() + QString("Hola");

    labelDisplay->setText(nuevoTexto);
}

