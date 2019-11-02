/********************************************************************************
** Form generated from reading UI file 'pamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAMPHLET_H
#define UI_PAMPHLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pamphlet
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameEdit;
    QLineEdit *addressEdit;
    QLineEdit *cityEdit;
    QLineEdit *stateEdit;
    QLineEdit *zipEdit;
    QComboBox *interestLevel;
    QPushButton *submitButton;

    void setupUi(QWidget *Pamphlet)
    {
        if (Pamphlet->objectName().isEmpty())
            Pamphlet->setObjectName(QStringLiteral("Pamphlet"));
        Pamphlet->resize(375, 173);
        gridLayout = new QGridLayout(Pamphlet);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(Pamphlet);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(Pamphlet);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(Pamphlet);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(Pamphlet);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(Pamphlet);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(Pamphlet);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameEdit = new QLineEdit(Pamphlet);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        verticalLayout->addWidget(nameEdit);

        addressEdit = new QLineEdit(Pamphlet);
        addressEdit->setObjectName(QStringLiteral("addressEdit"));

        verticalLayout->addWidget(addressEdit);

        cityEdit = new QLineEdit(Pamphlet);
        cityEdit->setObjectName(QStringLiteral("cityEdit"));

        verticalLayout->addWidget(cityEdit);

        stateEdit = new QLineEdit(Pamphlet);
        stateEdit->setObjectName(QStringLiteral("stateEdit"));

        verticalLayout->addWidget(stateEdit);

        zipEdit = new QLineEdit(Pamphlet);
        zipEdit->setObjectName(QStringLiteral("zipEdit"));

        verticalLayout->addWidget(zipEdit);

        interestLevel = new QComboBox(Pamphlet);
        interestLevel->setObjectName(QStringLiteral("interestLevel"));
        interestLevel->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(interestLevel);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        submitButton = new QPushButton(Pamphlet);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        verticalLayout_3->addWidget(submitButton);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(Pamphlet);

        interestLevel->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Pamphlet);
    } // setupUi

    void retranslateUi(QWidget *Pamphlet)
    {
        Pamphlet->setWindowTitle(QApplication::translate("Pamphlet", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Pamphlet", "Company Name", Q_NULLPTR));
        label_2->setText(QApplication::translate("Pamphlet", "Street Address", Q_NULLPTR));
        label_3->setText(QApplication::translate("Pamphlet", "City", Q_NULLPTR));
        label_4->setText(QApplication::translate("Pamphlet", "State Abreviation", Q_NULLPTR));
        label_5->setText(QApplication::translate("Pamphlet", "Zip Code", Q_NULLPTR));
        label_6->setText(QApplication::translate("Pamphlet", "Interest Level", Q_NULLPTR));
        interestLevel->clear();
        interestLevel->insertItems(0, QStringList()
         << QApplication::translate("Pamphlet", "very interested", Q_NULLPTR)
         << QApplication::translate("Pamphlet", "somewhat interested", Q_NULLPTR)
         << QApplication::translate("Pamphlet", "not interested", Q_NULLPTR)
        );
        submitButton->setText(QApplication::translate("Pamphlet", "Submit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Pamphlet: public Ui_Pamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAMPHLET_H
