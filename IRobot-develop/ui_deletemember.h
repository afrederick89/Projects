/********************************************************************************
** Form generated from reading UI file 'deletemember.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEMEMBER_H
#define UI_DELETEMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_deletemember
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_1;
    QLabel *nameLabel;
    QLineEdit *nameLineEdit;
    QPushButton *accept;
    QPushButton *exit;

    void setupUi(QDialog *deletemember)
    {
        if (deletemember->objectName().isEmpty())
            deletemember->setObjectName(QStringLiteral("deletemember"));
        deletemember->resize(397, 142);
        deletemember->setMinimumSize(QSize(397, 142));
        deletemember->setMaximumSize(QSize(397, 142));
        verticalLayout = new QVBoxLayout(deletemember);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(deletemember);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setSpacing(20);
        horizontalLayout_1->setObjectName(QStringLiteral("horizontalLayout_1"));
        horizontalLayout_1->setContentsMargins(20, -1, 0, -1);
        nameLabel = new QLabel(deletemember);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        horizontalLayout_1->addWidget(nameLabel);

        nameLineEdit = new QLineEdit(deletemember);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        horizontalLayout_1->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout_1);

        accept = new QPushButton(deletemember);
        accept->setObjectName(QStringLiteral("accept"));

        verticalLayout->addWidget(accept);

        exit = new QPushButton(deletemember);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout->addWidget(exit);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(deletemember);

        QMetaObject::connectSlotsByName(deletemember);
    } // setupUi

    void retranslateUi(QDialog *deletemember)
    {
        deletemember->setWindowTitle(QApplication::translate("deletemember", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("deletemember", "Customer Deletion", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("deletemember", "Name:", Q_NULLPTR));
        accept->setText(QApplication::translate("deletemember", "Accept", Q_NULLPTR));
        exit->setText(QApplication::translate("deletemember", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deletemember: public Ui_deletemember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEMEMBER_H
