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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDisplay;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QGridLayout *layoutDigitos;
    QPushButton *boton7;
    QPushButton *boton8;
    QPushButton *boton9;
    QPushButton *boton4;
    QPushButton *boton5;
    QPushButton *boton6;
    QPushButton *boton1;
    QPushButton *boton2;
    QPushButton *boton3;
    QPushButton *botonPunto;
    QPushButton *boton0;
    QVBoxLayout *verticalLayout;
    QPushButton *botonDividir;
    QPushButton *botonMultiplicar;
    QPushButton *botonRestar;
    QPushButton *botonSumar;
    QPushButton *botonIgual;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QString::fromUtf8("Calculadora"));
        Calculadora->resize(526, 361);
        verticalLayout_2 = new QVBoxLayout(Calculadora);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        labelDisplay = new QLabel(Calculadora);
        labelDisplay->setObjectName(QString::fromUtf8("labelDisplay"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu Condensed"));
        font.setPointSize(60);
        font.setBold(true);
        font.setWeight(75);
        labelDisplay->setFont(font);
        labelDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(labelDisplay);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        layoutDigitos = new QGridLayout();
        layoutDigitos->setObjectName(QString::fromUtf8("layoutDigitos"));
        boton7 = new QPushButton(Calculadora);
        boton7->setObjectName(QString::fromUtf8("boton7"));

        layoutDigitos->addWidget(boton7, 0, 0, 1, 1);

        boton8 = new QPushButton(Calculadora);
        boton8->setObjectName(QString::fromUtf8("boton8"));

        layoutDigitos->addWidget(boton8, 0, 1, 1, 1);

        boton9 = new QPushButton(Calculadora);
        boton9->setObjectName(QString::fromUtf8("boton9"));

        layoutDigitos->addWidget(boton9, 0, 2, 1, 1);

        boton4 = new QPushButton(Calculadora);
        boton4->setObjectName(QString::fromUtf8("boton4"));

        layoutDigitos->addWidget(boton4, 1, 0, 1, 1);

        boton5 = new QPushButton(Calculadora);
        boton5->setObjectName(QString::fromUtf8("boton5"));

        layoutDigitos->addWidget(boton5, 1, 1, 1, 1);

        boton6 = new QPushButton(Calculadora);
        boton6->setObjectName(QString::fromUtf8("boton6"));

        layoutDigitos->addWidget(boton6, 1, 2, 1, 1);

        boton1 = new QPushButton(Calculadora);
        boton1->setObjectName(QString::fromUtf8("boton1"));

        layoutDigitos->addWidget(boton1, 2, 0, 1, 1);

        boton2 = new QPushButton(Calculadora);
        boton2->setObjectName(QString::fromUtf8("boton2"));

        layoutDigitos->addWidget(boton2, 2, 1, 1, 1);

        boton3 = new QPushButton(Calculadora);
        boton3->setObjectName(QString::fromUtf8("boton3"));

        layoutDigitos->addWidget(boton3, 2, 2, 1, 1);

        botonPunto = new QPushButton(Calculadora);
        botonPunto->setObjectName(QString::fromUtf8("botonPunto"));

        layoutDigitos->addWidget(botonPunto, 3, 2, 1, 1);

        boton0 = new QPushButton(Calculadora);
        boton0->setObjectName(QString::fromUtf8("boton0"));

        layoutDigitos->addWidget(boton0, 3, 0, 1, 2);


        horizontalLayout->addLayout(layoutDigitos);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        botonDividir = new QPushButton(Calculadora);
        botonDividir->setObjectName(QString::fromUtf8("botonDividir"));

        verticalLayout->addWidget(botonDividir);

        botonMultiplicar = new QPushButton(Calculadora);
        botonMultiplicar->setObjectName(QString::fromUtf8("botonMultiplicar"));

        verticalLayout->addWidget(botonMultiplicar);

        botonRestar = new QPushButton(Calculadora);
        botonRestar->setObjectName(QString::fromUtf8("botonRestar"));

        verticalLayout->addWidget(botonRestar);

        botonSumar = new QPushButton(Calculadora);
        botonSumar->setObjectName(QString::fromUtf8("botonSumar"));

        verticalLayout->addWidget(botonSumar);


        horizontalLayout->addLayout(verticalLayout);

        botonIgual = new QPushButton(Calculadora);
        botonIgual->setObjectName(QString::fromUtf8("botonIgual"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(botonIgual->sizePolicy().hasHeightForWidth());
        botonIgual->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(botonIgual);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Dialog", nullptr));
        labelDisplay->setText(QString());
        boton7->setText(QApplication::translate("Calculadora", "7", nullptr));
        boton8->setText(QApplication::translate("Calculadora", "8", nullptr));
        boton9->setText(QApplication::translate("Calculadora", "9", nullptr));
        boton4->setText(QApplication::translate("Calculadora", "4", nullptr));
        boton5->setText(QApplication::translate("Calculadora", "5", nullptr));
        boton6->setText(QApplication::translate("Calculadora", "6", nullptr));
        boton1->setText(QApplication::translate("Calculadora", "1", nullptr));
        boton2->setText(QApplication::translate("Calculadora", "2", nullptr));
        boton3->setText(QApplication::translate("Calculadora", "3", nullptr));
        botonPunto->setText(QApplication::translate("Calculadora", ".", nullptr));
        boton0->setText(QApplication::translate("Calculadora", "0", nullptr));
        botonDividir->setText(QApplication::translate("Calculadora", "/", nullptr));
        botonMultiplicar->setText(QApplication::translate("Calculadora", "*", nullptr));
        botonRestar->setText(QApplication::translate("Calculadora", "-", nullptr));
        botonSumar->setText(QApplication::translate("Calculadora", "+", nullptr));
        botonIgual->setText(QApplication::translate("Calculadora", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
