/********************************************************************************
** Form generated from reading UI file 'customernotfound.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERNOTFOUND_H
#define UI_CUSTOMERNOTFOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customernotfound
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *retry;

    void setupUi(QDialog *customernotfound)
    {
        if (customernotfound->objectName().isEmpty())
            customernotfound->setObjectName(QStringLiteral("customernotfound"));
        customernotfound->resize(345, 137);
        customernotfound->setMinimumSize(QSize(345, 137));
        customernotfound->setMaximumSize(QSize(345, 137));
        verticalLayout = new QVBoxLayout(customernotfound);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(customernotfound);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(customernotfound);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(groupBox);

        retry = new QPushButton(customernotfound);
        retry->setObjectName(QStringLiteral("retry"));

        verticalLayout->addWidget(retry);


        retranslateUi(customernotfound);

        QMetaObject::connectSlotsByName(customernotfound);
    } // setupUi

    void retranslateUi(QDialog *customernotfound)
    {
        customernotfound->setWindowTitle(QApplication::translate("customernotfound", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("customernotfound", "Customer not found", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("customernotfound", "Error!", Q_NULLPTR));
        label_2->setText(QApplication::translate("customernotfound", "Customer not found. Please check spelling.", Q_NULLPTR));
        retry->setText(QApplication::translate("customernotfound", "Retry", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customernotfound: public Ui_customernotfound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERNOTFOUND_H
