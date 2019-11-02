/********************************************************************************
** Form generated from reading UI file 'editcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCUSTOMER_H
#define UI_EDITCUSTOMER_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditCustomer
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *nameLabel;
    QLabel *addressLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *nameLineEdit;
    QLineEdit *addressLineEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QRadioButton *doNotChange_2;
    QRadioButton *keyToHaveRadioButton_2;
    QRadioButton *niceToHaveRadioButton_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QRadioButton *doNotChange;
    QRadioButton *veryInterestedRadioButton_2;
    QRadioButton *somewhatInterestedRadioButton_2;
    QRadioButton *notInterestedRadioButton_2;
    QPushButton *acceptPushButton;
    QPushButton *cancelPushButton;
    QButtonGroup *importanceLevelButtonGroup;

    void setupUi(QDialog *EditCustomer)
    {
        if (EditCustomer->objectName().isEmpty())
            EditCustomer->setObjectName(QStringLiteral("EditCustomer"));
        EditCustomer->resize(611, 210);
        EditCustomer->setMinimumSize(QSize(611, 210));
        EditCustomer->setMaximumSize(QSize(611, 210));
        verticalLayout_4 = new QVBoxLayout(EditCustomer);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        nameLabel = new QLabel(EditCustomer);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        verticalLayout_2->addWidget(nameLabel);

        addressLabel = new QLabel(EditCustomer);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        verticalLayout_2->addWidget(addressLabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nameLineEdit = new QLineEdit(EditCustomer);
        nameLineEdit->setObjectName(QStringLiteral("nameLineEdit"));

        verticalLayout->addWidget(nameLineEdit);

        addressLineEdit = new QLineEdit(EditCustomer);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        verticalLayout->addWidget(addressLineEdit);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(20);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(20, -1, 0, -1);
        label_5 = new QLabel(EditCustomer);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        doNotChange_2 = new QRadioButton(EditCustomer);
        importanceLevelButtonGroup = new QButtonGroup(EditCustomer);
        importanceLevelButtonGroup->setObjectName(QStringLiteral("importanceLevelButtonGroup"));
        importanceLevelButtonGroup->addButton(doNotChange_2);
        doNotChange_2->setObjectName(QStringLiteral("doNotChange_2"));
        doNotChange_2->setChecked(true);

        horizontalLayout_6->addWidget(doNotChange_2);

        keyToHaveRadioButton_2 = new QRadioButton(EditCustomer);
        importanceLevelButtonGroup->addButton(keyToHaveRadioButton_2);
        keyToHaveRadioButton_2->setObjectName(QStringLiteral("keyToHaveRadioButton_2"));
        keyToHaveRadioButton_2->setChecked(false);

        horizontalLayout_6->addWidget(keyToHaveRadioButton_2);

        niceToHaveRadioButton_2 = new QRadioButton(EditCustomer);
        importanceLevelButtonGroup->addButton(niceToHaveRadioButton_2);
        niceToHaveRadioButton_2->setObjectName(QStringLiteral("niceToHaveRadioButton_2"));

        horizontalLayout_6->addWidget(niceToHaveRadioButton_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, -1, 0, -1);
        label_4 = new QLabel(EditCustomer);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        doNotChange = new QRadioButton(EditCustomer);
        doNotChange->setObjectName(QStringLiteral("doNotChange"));
        doNotChange->setChecked(true);

        horizontalLayout_5->addWidget(doNotChange);

        veryInterestedRadioButton_2 = new QRadioButton(EditCustomer);
        veryInterestedRadioButton_2->setObjectName(QStringLiteral("veryInterestedRadioButton_2"));
        veryInterestedRadioButton_2->setChecked(false);

        horizontalLayout_5->addWidget(veryInterestedRadioButton_2);

        somewhatInterestedRadioButton_2 = new QRadioButton(EditCustomer);
        somewhatInterestedRadioButton_2->setObjectName(QStringLiteral("somewhatInterestedRadioButton_2"));

        horizontalLayout_5->addWidget(somewhatInterestedRadioButton_2);

        notInterestedRadioButton_2 = new QRadioButton(EditCustomer);
        notInterestedRadioButton_2->setObjectName(QStringLiteral("notInterestedRadioButton_2"));

        horizontalLayout_5->addWidget(notInterestedRadioButton_2);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        acceptPushButton = new QPushButton(EditCustomer);
        acceptPushButton->setObjectName(QStringLiteral("acceptPushButton"));

        verticalLayout_4->addWidget(acceptPushButton);

        cancelPushButton = new QPushButton(EditCustomer);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));

        verticalLayout_4->addWidget(cancelPushButton);

#ifndef QT_NO_SHORTCUT
        nameLabel->setBuddy(nameLineEdit);
        addressLabel->setBuddy(nameLineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(EditCustomer);

        QMetaObject::connectSlotsByName(EditCustomer);
    } // setupUi

    void retranslateUi(QDialog *EditCustomer)
    {
        EditCustomer->setWindowTitle(QApplication::translate("EditCustomer", "Dialog", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("EditCustomer", "Customer name:", Q_NULLPTR));
        addressLabel->setText(QApplication::translate("EditCustomer", "New Address:", Q_NULLPTR));
        label_5->setText(QApplication::translate("EditCustomer", "Importance Level:", Q_NULLPTR));
        doNotChange_2->setText(QApplication::translate("EditCustomer", "Do Not Change", Q_NULLPTR));
        keyToHaveRadioButton_2->setText(QApplication::translate("EditCustomer", "Key", Q_NULLPTR));
        niceToHaveRadioButton_2->setText(QApplication::translate("EditCustomer", "Nice to Have", Q_NULLPTR));
        label_4->setText(QApplication::translate("EditCustomer", "Interest Level:", Q_NULLPTR));
        doNotChange->setText(QApplication::translate("EditCustomer", "Do Not Change", Q_NULLPTR));
        veryInterestedRadioButton_2->setText(QApplication::translate("EditCustomer", "Very Interested", Q_NULLPTR));
        somewhatInterestedRadioButton_2->setText(QApplication::translate("EditCustomer", "Somewhat Interested", Q_NULLPTR));
        notInterestedRadioButton_2->setText(QApplication::translate("EditCustomer", "Not Interested ", Q_NULLPTR));
        acceptPushButton->setText(QApplication::translate("EditCustomer", "Accept", Q_NULLPTR));
        cancelPushButton->setText(QApplication::translate("EditCustomer", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditCustomer: public Ui_EditCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCUSTOMER_H
