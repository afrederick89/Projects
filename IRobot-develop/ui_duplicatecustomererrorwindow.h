/********************************************************************************
** Form generated from reading UI file 'duplicatecustomererrorwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUPLICATECUSTOMERERRORWINDOW_H
#define UI_DUPLICATECUSTOMERERRORWINDOW_H

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

QT_BEGIN_NAMESPACE

class Ui_DuplicateCustomerErrorWindow
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *retry;

    void setupUi(QDialog *DuplicateCustomerErrorWindow)
    {
        if (DuplicateCustomerErrorWindow->objectName().isEmpty())
            DuplicateCustomerErrorWindow->setObjectName(QStringLiteral("DuplicateCustomerErrorWindow"));
        DuplicateCustomerErrorWindow->resize(375, 144);
        groupBox = new QGroupBox(DuplicateCustomerErrorWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 314, 67));
        groupBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        retry = new QPushButton(DuplicateCustomerErrorWindow);
        retry->setObjectName(QStringLiteral("retry"));
        retry->setGeometry(QRect(20, 90, 80, 21));

        retranslateUi(DuplicateCustomerErrorWindow);

        QMetaObject::connectSlotsByName(DuplicateCustomerErrorWindow);
    } // setupUi

    void retranslateUi(QDialog *DuplicateCustomerErrorWindow)
    {
        DuplicateCustomerErrorWindow->setWindowTitle(QApplication::translate("DuplicateCustomerErrorWindow", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DuplicateCustomerErrorWindow", "Error!", Q_NULLPTR));
        label->setText(QApplication::translate("DuplicateCustomerErrorWindow", "Invalid Username and Password.\n"
"Please try again or contact customer support for assistance.", Q_NULLPTR));
        retry->setText(QApplication::translate("DuplicateCustomerErrorWindow", "Retry", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DuplicateCustomerErrorWindow: public Ui_DuplicateCustomerErrorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUPLICATECUSTOMERERRORWINDOW_H
