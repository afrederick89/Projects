/********************************************************************************
** Form generated from reading UI file 'invalidaddcustomername.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDADDCUSTOMERNAME_H
#define UI_INVALIDADDCUSTOMERNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_InvalidAddCustomerName
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *retry;

    void setupUi(QDialog *InvalidAddCustomerName)
    {
        if (InvalidAddCustomerName->objectName().isEmpty())
            InvalidAddCustomerName->setObjectName(QStringLiteral("InvalidAddCustomerName"));
        InvalidAddCustomerName->resize(355, 123);
        InvalidAddCustomerName->setMinimumSize(QSize(355, 123));
        InvalidAddCustomerName->setMaximumSize(QSize(355, 123));
        formLayout = new QFormLayout(InvalidAddCustomerName);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        groupBox = new QGroupBox(InvalidAddCustomerName);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox);

        retry = new QPushButton(InvalidAddCustomerName);
        retry->setObjectName(QStringLiteral("retry"));

        formLayout->setWidget(1, QFormLayout::LabelRole, retry);


        retranslateUi(InvalidAddCustomerName);

        QMetaObject::connectSlotsByName(InvalidAddCustomerName);
    } // setupUi

    void retranslateUi(QDialog *InvalidAddCustomerName)
    {
        InvalidAddCustomerName->setWindowTitle(QApplication::translate("InvalidAddCustomerName", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("InvalidAddCustomerName", "Error!", Q_NULLPTR));
        label->setText(QApplication::translate("InvalidAddCustomerName", "Invalid Username and Password.\n"
"Please try again or contact customer support for assistance.", Q_NULLPTR));
        retry->setText(QApplication::translate("InvalidAddCustomerName", "Retry", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InvalidAddCustomerName: public Ui_InvalidAddCustomerName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVALIDADDCUSTOMERNAME_H
