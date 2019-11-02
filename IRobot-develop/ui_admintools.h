/********************************************************************************
** Form generated from reading UI file 'admintools.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINTOOLS_H
#define UI_ADMINTOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_adminTools
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *listCustomers;
    QPushButton *listKeyCustomers;
    QPushButton *listCustomerOrders;
    QPushButton *addMember;
    QPushButton *deleteMember;
    QPushButton *editCustomer;
    QPushButton *exit;
    QTableView *tableView;

    void setupUi(QDialog *adminTools)
    {
        if (adminTools->objectName().isEmpty())
            adminTools->setObjectName(QStringLiteral("adminTools"));
        adminTools->resize(727, 464);
        adminTools->setMinimumSize(QSize(727, 464));
        adminTools->setMaximumSize(QSize(727, 464));
        adminTools->setAutoFillBackground(false);
        horizontalLayout = new QHBoxLayout(adminTools);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(adminTools);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label);

        listCustomers = new QPushButton(adminTools);
        listCustomers->setObjectName(QStringLiteral("listCustomers"));

        verticalLayout->addWidget(listCustomers);

        listKeyCustomers = new QPushButton(adminTools);
        listKeyCustomers->setObjectName(QStringLiteral("listKeyCustomers"));

        verticalLayout->addWidget(listKeyCustomers);

        listCustomerOrders = new QPushButton(adminTools);
        listCustomerOrders->setObjectName(QStringLiteral("listCustomerOrders"));

        verticalLayout->addWidget(listCustomerOrders);

        addMember = new QPushButton(adminTools);
        addMember->setObjectName(QStringLiteral("addMember"));

        verticalLayout->addWidget(addMember);

        deleteMember = new QPushButton(adminTools);
        deleteMember->setObjectName(QStringLiteral("deleteMember"));

        verticalLayout->addWidget(deleteMember);

        editCustomer = new QPushButton(adminTools);
        editCustomer->setObjectName(QStringLiteral("editCustomer"));

        verticalLayout->addWidget(editCustomer);


        verticalLayout_2->addLayout(verticalLayout);

        exit = new QPushButton(adminTools);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout_2->addWidget(exit);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        tableView = new QTableView(adminTools);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(adminTools);

        QMetaObject::connectSlotsByName(adminTools);
    } // setupUi

    void retranslateUi(QDialog *adminTools)
    {
        adminTools->setWindowTitle(QApplication::translate("adminTools", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("adminTools", "Administrator", Q_NULLPTR));
        listCustomers->setText(QApplication::translate("adminTools", "List Customers", Q_NULLPTR));
        listKeyCustomers->setText(QApplication::translate("adminTools", "List Key Customers", Q_NULLPTR));
        listCustomerOrders->setText(QApplication::translate("adminTools", "List Customer Orders", Q_NULLPTR));
        addMember->setText(QApplication::translate("adminTools", "Customer Creation", Q_NULLPTR));
        deleteMember->setText(QApplication::translate("adminTools", "Customer Deletion", Q_NULLPTR));
        editCustomer->setText(QApplication::translate("adminTools", "Customer Edit", Q_NULLPTR));
        exit->setText(QApplication::translate("adminTools", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class adminTools: public Ui_adminTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINTOOLS_H
