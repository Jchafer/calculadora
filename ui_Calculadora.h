/********************************************************************************
** Form generated from reading UI file 'Calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QPushButton *boton2;
    QPushButton *boton1;
    QLabel *labelDisplay;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(417, 479);
        boton2 = new QPushButton(Calculadora);
        boton2->setObjectName(QString::fromUtf8("boton2"));
        boton2->setGeometry(QRect(30, 400, 89, 25));
        boton1 = new QPushButton(Calculadora);
        boton1->setObjectName(QString::fromUtf8("boton1"));
        boton1->setGeometry(QRect(140, 400, 89, 25));
        labelDisplay = new QLabel(Calculadora);
        labelDisplay->setObjectName(QString::fromUtf8("labelDisplay"));
        labelDisplay->setGeometry(QRect(150, 70, 67, 17));

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Dialog", nullptr));
        boton2->setText(QApplication::translate("Calculadora", "2", nullptr));
        boton1->setText(QApplication::translate("Calculadora", "1", nullptr));
        labelDisplay->setText(QApplication::translate("Calculadora", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
