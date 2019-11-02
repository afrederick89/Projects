/********************************************************************************
** Form generated from reading UI file 'customertools.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERTOOLS_H
#define UI_CUSTOMERTOOLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_customerTools
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *C_Side;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *Options;
    QPushButton *Place_Order;
    QPushButton *Exit_button;
    QSpacerItem *C_Vspace;
    QTabWidget *C_Tabs;
    QWidget *Purchase_tab;
    QVBoxLayout *verticalLayout_2;
    QTableView *Purchase_Table;
    QWidget *Review_tab;
    QVBoxLayout *verticalLayout;
    QTextEdit *Review_text;
    QPushButton *SubmitButton;

    void setupUi(QDialog *customerTools)
    {
        if (customerTools->objectName().isEmpty())
            customerTools->setObjectName(QStringLiteral("customerTools"));
        customerTools->resize(974, 543);
        horizontalLayout = new QHBoxLayout(customerTools);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        C_Side = new QWidget(customerTools);
        C_Side->setObjectName(QStringLiteral("C_Side"));
        C_Side->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(C_Side->sizePolicy().hasHeightForWidth());
        C_Side->setSizePolicy(sizePolicy);
        C_Side->setMinimumSize(QSize(150, 525));
        C_Side->setMaximumSize(QSize(150, 600));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(180, 180, 180, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        C_Side->setPalette(palette);
        C_Side->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(C_Side);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(0, 5, 0, 3);
        Options = new QVBoxLayout();
        Options->setSpacing(16);
        Options->setObjectName(QStringLiteral("Options"));
        Options->setSizeConstraint(QLayout::SetFixedSize);
        Place_Order = new QPushButton(C_Side);
        Place_Order->setObjectName(QStringLiteral("Place_Order"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Place_Order->sizePolicy().hasHeightForWidth());
        Place_Order->setSizePolicy(sizePolicy1);
        Place_Order->setMinimumSize(QSize(148, 23));
        Place_Order->setMaximumSize(QSize(148, 23));

        Options->addWidget(Place_Order);

        Exit_button = new QPushButton(C_Side);
        Exit_button->setObjectName(QStringLiteral("Exit_button"));

        Options->addWidget(Exit_button);


        verticalLayout_5->addLayout(Options);

        C_Vspace = new QSpacerItem(20, 386, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(C_Vspace);


        horizontalLayout->addWidget(C_Side);

        C_Tabs = new QTabWidget(customerTools);
        C_Tabs->setObjectName(QStringLiteral("C_Tabs"));
        C_Tabs->setEnabled(true);
        sizePolicy.setHeightForWidth(C_Tabs->sizePolicy().hasHeightForWidth());
        C_Tabs->setSizePolicy(sizePolicy);
        C_Tabs->setMinimumSize(QSize(800, 525));
        C_Tabs->setMaximumSize(QSize(800, 526));
        C_Tabs->setTabPosition(QTabWidget::North);
        C_Tabs->setElideMode(Qt::ElideNone);
        Purchase_tab = new QWidget();
        Purchase_tab->setObjectName(QStringLiteral("Purchase_tab"));
        verticalLayout_2 = new QVBoxLayout(Purchase_tab);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Purchase_Table = new QTableView(Purchase_tab);
        Purchase_Table->setObjectName(QStringLiteral("Purchase_Table"));

        verticalLayout_2->addWidget(Purchase_Table);

        C_Tabs->addTab(Purchase_tab, QString());
        Review_tab = new QWidget();
        Review_tab->setObjectName(QStringLiteral("Review_tab"));
        verticalLayout = new QVBoxLayout(Review_tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Review_text = new QTextEdit(Review_tab);
        Review_text->setObjectName(QStringLiteral("Review_text"));
        Review_text->setReadOnly(false);

        verticalLayout->addWidget(Review_text);

        SubmitButton = new QPushButton(Review_tab);
        SubmitButton->setObjectName(QStringLiteral("SubmitButton"));

        verticalLayout->addWidget(SubmitButton);

        C_Tabs->addTab(Review_tab, QString());

        horizontalLayout->addWidget(C_Tabs);


        retranslateUi(customerTools);

        C_Tabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(customerTools);
    } // setupUi

    void retranslateUi(QDialog *customerTools)
    {
        customerTools->setWindowTitle(QApplication::translate("customerTools", "Dialog", Q_NULLPTR));
        Place_Order->setText(QApplication::translate("customerTools", "Place Order", Q_NULLPTR));
        Exit_button->setText(QApplication::translate("customerTools", "Exit", Q_NULLPTR));
        C_Tabs->setTabText(C_Tabs->indexOf(Purchase_tab), QApplication::translate("customerTools", "Purchases", Q_NULLPTR));
        Review_text->setHtml(QApplication::translate("customerTools", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Dear IRobot Team,</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        SubmitButton->setText(QApplication::translate("customerTools", "Submit Review", Q_NULLPTR));
        C_Tabs->setTabText(C_Tabs->indexOf(Review_tab), QApplication::translate("customerTools", "Review", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class customerTools: public Ui_customerTools {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERTOOLS_H
