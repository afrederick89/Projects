/********************************************************************************
** Form generated from reading UI file 'invalidentry.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDENTRY_H
#define UI_INVALIDENTRY_H

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

class Ui_InvalidEntry
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *InvalidEntry)
    {
        if (InvalidEntry->objectName().isEmpty())
            InvalidEntry->setObjectName(QStringLiteral("InvalidEntry"));
        InvalidEntry->resize(335, 114);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        InvalidEntry->setPalette(palette);
        formLayout = new QFormLayout(InvalidEntry);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        groupBox = new QGroupBox(InvalidEntry);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);


        formLayout->setWidget(0, QFormLayout::LabelRole, groupBox);

        pushButton = new QPushButton(InvalidEntry);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);


        retranslateUi(InvalidEntry);

        QMetaObject::connectSlotsByName(InvalidEntry);
    } // setupUi

    void retranslateUi(QDialog *InvalidEntry)
    {
        InvalidEntry->setWindowTitle(QApplication::translate("InvalidEntry", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("InvalidEntry", "Error!", Q_NULLPTR));
        label->setText(QApplication::translate("InvalidEntry", "Invalid Username and Password.\n"
"Please try again or contact customer support for assistance.", Q_NULLPTR));
        pushButton->setText(QApplication::translate("InvalidEntry", "Retry", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class InvalidEntry: public Ui_InvalidEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVALIDENTRY_H
