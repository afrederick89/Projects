/********************************************************************************
** Form generated from reading UI file 'addmember.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMEMBER_H
#define UI_ADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_addmember
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *customerCreationLabel;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *addressLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLineEdit;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QRadioButton *veryInterestedRadioButton;
    QRadioButton *somewhatInterestedRadioButton;
    QRadioButton *notInterestedRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QRadioButton *keyToHaveRadioButton;
    QRadioButton *niceToHaveRadioButton;
    QPushButton *accept;
    QPushButton *exit;
    QButtonGroup *interestLevelButtonGroup;
    QButtonGroup *importanceLevelButtonGroup;

    void setupUi(QDialog *addmember)
    {
        if (addmember->objectName().isEmpty())
            addmember->setObjectName(QStringLiteral("addmember"));
        addmember->resize(434, 219);
        addmember->setMinimumSize(QSize(434, 219));
        addmember->setMaximumSize(QSize(434, 219));
        gridLayout = new QGridLayout(addmember);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        customerCreationLabel = new QLabel(addmember);
        customerCreationLabel->setObjectName(QStringLiteral("customerCreationLabel"));
        QFont font;
        font.setPointSize(20);
        customerCreationLabel->setFont(font);

        horizontalLayout->addWidget(customerCreationLabel);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameLabel = new QLabel(addmember);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        addressLabel = new QLabel(addmember);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        verticalLayout_2->addWidget(addressLabel);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLineEdit = new QLineEdit(addmember);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        addressLineEdit = new QLineEdit(addmember);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        verticalLayout->addWidget(addressLineEdit);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(addmember);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        veryInterestedRadioButton = new QRadioButton(addmember);
        interestLevelButtonGroup = new QButtonGroup(addmember);
        interestLevelButtonGroup->setObjectName(QStringLiteral("interestLevelButtonGroup"));
        interestLevelButtonGroup->addButton(veryInterestedRadioButton);
        veryInterestedRadioButton->setObjectName(QStringLiteral("veryInterestedRadioButton"));
        veryInterestedRadioButton->setChecked(true);

        horizontalLayout_3->addWidget(veryInterestedRadioButton);

        somewhatInterestedRadioButton = new QRadioButton(addmember);
        interestLevelButtonGroup->addButton(somewhatInterestedRadioButton);
        somewhatInterestedRadioButton->setObjectName(QStringLiteral("somewhatInterestedRadioButton"));

        horizontalLayout_3->addWidget(somewhatInterestedRadioButton);

        notInterestedRadioButton = new QRadioButton(addmember);
        interestLevelButtonGroup->addButton(notInterestedRadioButton);
        notInterestedRadioButton->setObjectName(QStringLiteral("notInterestedRadioButton"));

        horizontalLayout_3->addWidget(notInterestedRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(20);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(20, -1, 0, -1);
        label_3 = new QLabel(addmember);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        keyToHaveRadioButton = new QRadioButton(addmember);
        importanceLevelButtonGroup = new QButtonGroup(addmember);
        importanceLevelButtonGroup->setObjectName(QStringLiteral("importanceLevelButtonGroup"));
        importanceLevelButtonGroup->addButton(keyToHaveRadioButton);
        keyToHaveRadioButton->setObjectName(QStringLiteral("keyToHaveRadioButton"));
        keyToHaveRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(keyToHaveRadioButton);

        niceToHaveRadioButton = new QRadioButton(addmember);
        importanceLevelButtonGroup->addButton(niceToHaveRadioButton);
        niceToHaveRadioButton->setObjectName(QStringLiteral("niceToHaveRadioButton"));

        horizontalLayout_4->addWidget(niceToHaveRadioButton);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        accept = new QPushButton(addmember);
        accept->setObjectName(QStringLiteral("accept"));

        gridLayout->addWidget(accept, 1, 0, 1, 1);

        exit = new QPushButton(addmember);
        exit->setObjectName(QStringLiteral("exit"));

        gridLayout->addWidget(exit, 2, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLineEdit);
        addressLabel->setBuddy(nameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(addmember);

        QMetaObject::connectSlotsByName(addmember);
    } // setupUi

    void retranslateUi(QDialog *addmember)
    {
        addmember->setWindowTitle(QApplication::translate("addmember", "Dialog", Q_NULLPTR));
        customerCreationLabel->setText(QApplication::translate("addmember", "Customer Creation", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("addmember", "Name:", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("addmember", "Address:", Q_NULLPTR));
        label_2->setText(QApplication::translate("addmember", "Interest Level:", Q_NULLPTR));
        veryInterestedRadioButton->setText(QApplication::translate("addmember", "Very Interested", Q_NULLPTR));
        somewhatInterestedRadioButton->setText(QApplication::translate("addmember", "Somewhat Interested", Q_NULLPTR));
        notInterestedRadioButton->setText(QApplication::translate("addmember", "Not Interested ", Q_NULLPTR));
        label_3->setText(QApplication::translate("addmember", "Importance Level:", Q_NULLPTR));
        keyToHaveRadioButton->setText(QApplication::translate("addmember", "Key", Q_NULLPTR));
        niceToHaveRadioButton->setText(QApplication::translate("addmember", "Nice to Have", Q_NULLPTR));
        accept->setText(QApplication::translate("addmember", "Accept", Q_NULLPTR));
        exit->setText(QApplication::translate("addmember", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addmember: public Ui_addmember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMEMBER_H
