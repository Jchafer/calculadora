#include "Calculadora.h"
#include <QDebug>

Calculadora::Calculadora(QWidget *parent) : QDialog(parent){
    setupUi(this);
    
    connect(boton1, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton2, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton3, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton4, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton5, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton6, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton7, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton8, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton9, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(boton0, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(botonSumar, SIGNAL(clicked()), 
            this, SLOT(slotOperacion()));
    connect(botonRestar, SIGNAL(clicked()), 
            this, SLOT(slotOperacion()));
    connect(botonMultiplicar, SIGNAL(clicked()), 
            this, SLOT(slotOperacion()));
    connect(botonDividir, SIGNAL(clicked()), 
            this, SLOT(slotOperacion()));
    connect(botonPunto, SIGNAL(clicked()), 
            this, SLOT(slotDigito()));
    connect(botonIgual, SIGNAL(clicked()), 
            this, SLOT(slotIgual()));
    
}

void Calculadora::slotDigito(){
        
    QObject * culpable = sender();
    
    QPushButton * bc = qobject_cast <QPushButton*> (culpable);
    QString nuevoTexto = labelDisplay->text() + bc->text();

    labelDisplay->setText(nuevoTexto);

    //qDebug() <<"LLegas aqui"<<endl;
}

/*void Calculadora::slotSumar(){
    float num = labelDisplay->text().toFloat();
    qDebug() <<"LLegas aqui"<<endl;

    primerValor = num;
    operacion = 's';
    labelDisplay ->setText("");
}*/

void Calculadora::slotOperacion(){
    num = ((QString)labelDisplay->text()).toInt();
    operacion = qobject_cast<QPushButton*>(sender())->text().at(0).toLatin1();
    labelDisplay->setText("");
}

void Calculadora::slotIgual(){
    switch (operacion)
    {
        case '+':
            labelDisplay->setText(QString::number(num + ((QString)labelDisplay->text()).toInt()));
            break;
        case '-':
            labelDisplay->setText(QString::number(num - ((QString)labelDisplay->text()).toInt()));
            break;
        case '*':
            labelDisplay->setText(QString::number(num * ((QString)labelDisplay->text()).toInt()));
            break;
        case '/':
            labelDisplay->setText(QString::number(num / ((QString)labelDisplay->text()).toInt()));
            break;
        default:
            break;
    }
}

void Calculadora::slotBorrar(){
    num = 0;
    labelDisplay->setText("");
}

