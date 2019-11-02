/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *SideBar;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *FeatureButtons;
    QPushButton *Request_Pamplet;
    QSpacerItem *verticalSpacer;
    QGroupBox *CustLogin;
    QGridLayout *CustLayout;
    QPushButton *CustomerLogin_Button;
    QVBoxLayout *CustomerData;
    QHBoxLayout *CustEntry;
    QLineEdit *CustUN;
    QLineEdit *CustPW;
    QHBoxLayout *CustLabels;
    QLabel *Label_CUSTUN;
    QLabel *Label_CUSTPW;
    QGroupBox *AdminLogin;
    QGridLayout *AdminLayout;
    QVBoxLayout *UNPW;
    QHBoxLayout *LineEdits;
    QLineEdit *AdminUN;
    QLineEdit *AdminPW;
    QHBoxLayout *AdminLabels;
    QLabel *Uname;
    QLabel *Pword;
    QPushButton *AdminLogin_Button;
    QPushButton *Exit_Button;
    QTabWidget *tabWidget;
    QWidget *About_Tab;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *AboutText;
    QWidget *Products_Tab;
    QVBoxLayout *verticalLayout;
    QTextEdit *Products_Text;
    QWidget *Contact_Tab;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *Contact_Text;
    QWidget *Help_Tab;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *Help_Text;
    QWidget *Testimonial_tab;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *Testimonial_text;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(974, 543);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(974, 543));
        MainWindow->setMaximumSize(QSize(974, 543));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(214, 214, 214, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        SideBar = new QWidget(centralWidget);
        SideBar->setObjectName(QStringLiteral("SideBar"));
        SideBar->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(SideBar->sizePolicy().hasHeightForWidth());
        SideBar->setSizePolicy(sizePolicy1);
        SideBar->setMinimumSize(QSize(150, 525));
        SideBar->setMaximumSize(QSize(150, 600));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(180, 180, 180, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        SideBar->setPalette(palette1);
        SideBar->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(SideBar);
        verticalLayout_5->setSpacing(9);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_5->setContentsMargins(0, 5, 0, 3);
        FeatureButtons = new QVBoxLayout();
        FeatureButtons->setSpacing(16);
        FeatureButtons->setObjectName(QStringLiteral("FeatureButtons"));
        FeatureButtons->setSizeConstraint(QLayout::SetFixedSize);
        Request_Pamplet = new QPushButton(SideBar);
        Request_Pamplet->setObjectName(QStringLiteral("Request_Pamplet"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Request_Pamplet->sizePolicy().hasHeightForWidth());
        Request_Pamplet->setSizePolicy(sizePolicy2);
        Request_Pamplet->setMinimumSize(QSize(148, 23));
        Request_Pamplet->setMaximumSize(QSize(148, 23));

        FeatureButtons->addWidget(Request_Pamplet);


        verticalLayout_5->addLayout(FeatureButtons);

        verticalSpacer = new QSpacerItem(20, 255, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer);

        CustLogin = new QGroupBox(SideBar);
        CustLogin->setObjectName(QStringLiteral("CustLogin"));
        CustLogin->setEnabled(true);
        sizePolicy1.setHeightForWidth(CustLogin->sizePolicy().hasHeightForWidth());
        CustLogin->setSizePolicy(sizePolicy1);
        CustLogin->setMinimumSize(QSize(150, 100));
        CustLogin->setMaximumSize(QSize(150, 100));
        CustLogin->setToolTipDuration(0);
        CustLogin->setAutoFillBackground(true);
        CustLogin->setAlignment(Qt::AlignCenter);
        CustLayout = new QGridLayout(CustLogin);
        CustLayout->setSpacing(6);
        CustLayout->setContentsMargins(11, 11, 11, 11);
        CustLayout->setObjectName(QStringLiteral("CustLayout"));
        CustLayout->setSizeConstraint(QLayout::SetFixedSize);
        CustLayout->setHorizontalSpacing(0);
        CustLayout->setVerticalSpacing(3);
        CustLayout->setContentsMargins(2, 2, 2, 0);
        CustomerLogin_Button = new QPushButton(CustLogin);
        CustomerLogin_Button->setObjectName(QStringLiteral("CustomerLogin_Button"));
        CustomerLogin_Button->setMinimumSize(QSize(144, 23));
        CustomerLogin_Button->setMaximumSize(QSize(144, 23));

        CustLayout->addWidget(CustomerLogin_Button, 2, 0, 1, 1);

        CustomerData = new QVBoxLayout();
        CustomerData->setSpacing(6);
        CustomerData->setObjectName(QStringLiteral("CustomerData"));
        CustEntry = new QHBoxLayout();
        CustEntry->setSpacing(6);
        CustEntry->setObjectName(QStringLiteral("CustEntry"));
        CustUN = new QLineEdit(CustLogin);
        CustUN->setObjectName(QStringLiteral("CustUN"));
        CustUN->setMinimumSize(QSize(67, 20));
        CustUN->setMaximumSize(QSize(67, 20));

        CustEntry->addWidget(CustUN);

        CustPW = new QLineEdit(CustLogin);
        CustPW->setObjectName(QStringLiteral("CustPW"));
        CustPW->setMinimumSize(QSize(67, 20));
        CustPW->setMaximumSize(QSize(67, 20));
        CustPW->setEchoMode(QLineEdit::Password);

        CustEntry->addWidget(CustPW);


        CustomerData->addLayout(CustEntry);

        CustLabels = new QHBoxLayout();
        CustLabels->setSpacing(6);
        CustLabels->setObjectName(QStringLiteral("CustLabels"));
        Label_CUSTUN = new QLabel(CustLogin);
        Label_CUSTUN->setObjectName(QStringLiteral("Label_CUSTUN"));
        Label_CUSTUN->setMinimumSize(QSize(67, 21));
        Label_CUSTUN->setMaximumSize(QSize(67, 21));
        Label_CUSTUN->setAlignment(Qt::AlignCenter);

        CustLabels->addWidget(Label_CUSTUN);

        Label_CUSTPW = new QLabel(CustLogin);
        Label_CUSTPW->setObjectName(QStringLiteral("Label_CUSTPW"));
        Label_CUSTPW->setMinimumSize(QSize(67, 21));
        Label_CUSTPW->setMaximumSize(QSize(67, 21));
        Label_CUSTPW->setAlignment(Qt::AlignCenter);

        CustLabels->addWidget(Label_CUSTPW);


        CustomerData->addLayout(CustLabels);


        CustLayout->addLayout(CustomerData, 1, 0, 1, 1);


        verticalLayout_5->addWidget(CustLogin);

        AdminLogin = new QGroupBox(SideBar);
        AdminLogin->setObjectName(QStringLiteral("AdminLogin"));
        sizePolicy1.setHeightForWidth(AdminLogin->sizePolicy().hasHeightForWidth());
        AdminLogin->setSizePolicy(sizePolicy1);
        AdminLogin->setMinimumSize(QSize(150, 100));
        AdminLogin->setMaximumSize(QSize(150, 100));
        QPalette palette2;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        QBrush brush4(QColor(177, 177, 177, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush5(QColor(216, 216, 216, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush5);
        QBrush brush6(QColor(88, 88, 88, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush6);
        QBrush brush7(QColor(118, 118, 118, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush5);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush7);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
        AdminLogin->setPalette(palette2);
        AdminLogin->setContextMenuPolicy(Qt::DefaultContextMenu);
        AdminLogin->setToolTipDuration(0);
        AdminLogin->setLayoutDirection(Qt::LeftToRight);
        AdminLogin->setAutoFillBackground(true);
        AdminLogin->setAlignment(Qt::AlignCenter);
        AdminLogin->setFlat(false);
        AdminLogin->setCheckable(false);
        AdminLayout = new QGridLayout(AdminLogin);
        AdminLayout->setSpacing(6);
        AdminLayout->setContentsMargins(11, 11, 11, 11);
        AdminLayout->setObjectName(QStringLiteral("AdminLayout"));
        AdminLayout->setSizeConstraint(QLayout::SetFixedSize);
        AdminLayout->setHorizontalSpacing(0);
        AdminLayout->setVerticalSpacing(3);
        AdminLayout->setContentsMargins(2, 2, 2, 0);
        UNPW = new QVBoxLayout();
        UNPW->setSpacing(6);
        UNPW->setObjectName(QStringLiteral("UNPW"));
        LineEdits = new QHBoxLayout();
        LineEdits->setSpacing(4);
        LineEdits->setObjectName(QStringLiteral("LineEdits"));
        AdminUN = new QLineEdit(AdminLogin);
        AdminUN->setObjectName(QStringLiteral("AdminUN"));
        sizePolicy1.setHeightForWidth(AdminUN->sizePolicy().hasHeightForWidth());
        AdminUN->setSizePolicy(sizePolicy1);
        AdminUN->setMinimumSize(QSize(68, 20));
        AdminUN->setMaximumSize(QSize(68, 20));

        LineEdits->addWidget(AdminUN);

        AdminPW = new QLineEdit(AdminLogin);
        AdminPW->setObjectName(QStringLiteral("AdminPW"));
        sizePolicy1.setHeightForWidth(AdminPW->sizePolicy().hasHeightForWidth());
        AdminPW->setSizePolicy(sizePolicy1);
        AdminPW->setMinimumSize(QSize(68, 20));
        AdminPW->setMaximumSize(QSize(68, 20));
        AdminPW->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        AdminPW->setEchoMode(QLineEdit::Password);

        LineEdits->addWidget(AdminPW);


        UNPW->addLayout(LineEdits);

        AdminLabels = new QHBoxLayout();
        AdminLabels->setSpacing(4);
        AdminLabels->setObjectName(QStringLiteral("AdminLabels"));
        Uname = new QLabel(AdminLogin);
        Uname->setObjectName(QStringLiteral("Uname"));
        Uname->setMinimumSize(QSize(68, 21));
        Uname->setMaximumSize(QSize(68, 21));
        Uname->setAlignment(Qt::AlignCenter);

        AdminLabels->addWidget(Uname);

        Pword = new QLabel(AdminLogin);
        Pword->setObjectName(QStringLiteral("Pword"));
        Pword->setMinimumSize(QSize(68, 21));
        Pword->setMaximumSize(QSize(68, 21));
        Pword->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        Pword->setAlignment(Qt::AlignCenter);

        AdminLabels->addWidget(Pword);


        UNPW->addLayout(AdminLabels);


        AdminLayout->addLayout(UNPW, 0, 0, 1, 1);

        AdminLogin_Button = new QPushButton(AdminLogin);
        AdminLogin_Button->setObjectName(QStringLiteral("AdminLogin_Button"));
        AdminLogin_Button->setMinimumSize(QSize(144, 23));
        AdminLogin_Button->setMaximumSize(QSize(144, 23));

        AdminLayout->addWidget(AdminLogin_Button, 1, 0, 1, 1);


        verticalLayout_5->addWidget(AdminLogin);

        Exit_Button = new QPushButton(SideBar);
        Exit_Button->setObjectName(QStringLiteral("Exit_Button"));

        verticalLayout_5->addWidget(Exit_Button);


        horizontalLayout->addWidget(SideBar);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(800, 525));
        tabWidget->setMaximumSize(QSize(800, 526));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setElideMode(Qt::ElideNone);
        About_Tab = new QWidget();
        About_Tab->setObjectName(QStringLiteral("About_Tab"));
        verticalLayout_2 = new QVBoxLayout(About_Tab);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        AboutText = new QTextEdit(About_Tab);
        AboutText->setObjectName(QStringLiteral("AboutText"));
        AboutText->setMinimumSize(QSize(776, 481));
        AboutText->setReadOnly(true);

        verticalLayout_2->addWidget(AboutText);

        tabWidget->addTab(About_Tab, QString());
        Products_Tab = new QWidget();
        Products_Tab->setObjectName(QStringLiteral("Products_Tab"));
        verticalLayout = new QVBoxLayout(Products_Tab);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Products_Text = new QTextEdit(Products_Tab);
        Products_Text->setObjectName(QStringLiteral("Products_Text"));
        Products_Text->setReadOnly(true);

        verticalLayout->addWidget(Products_Text);

        tabWidget->addTab(Products_Tab, QString());
        Contact_Tab = new QWidget();
        Contact_Tab->setObjectName(QStringLiteral("Contact_Tab"));
        verticalLayout_3 = new QVBoxLayout(Contact_Tab);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Contact_Text = new QTextEdit(Contact_Tab);
        Contact_Text->setObjectName(QStringLiteral("Contact_Text"));
        Contact_Text->setMinimumSize(QSize(776, 481));
        Contact_Text->setMaximumSize(QSize(776, 482));
        Contact_Text->setReadOnly(true);

        verticalLayout_3->addWidget(Contact_Text);

        tabWidget->addTab(Contact_Tab, QString());
        Help_Tab = new QWidget();
        Help_Tab->setObjectName(QStringLiteral("Help_Tab"));
        Help_Tab->setToolTipDuration(0);
        verticalLayout_4 = new QVBoxLayout(Help_Tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Help_Text = new QTextEdit(Help_Tab);
        Help_Text->setObjectName(QStringLiteral("Help_Text"));
        Help_Text->setMinimumSize(QSize(776, 481));
        Help_Text->setReadOnly(true);

        verticalLayout_4->addWidget(Help_Text);

        tabWidget->addTab(Help_Tab, QString());
        Testimonial_tab = new QWidget();
        Testimonial_tab->setObjectName(QStringLiteral("Testimonial_tab"));
        verticalLayout_6 = new QVBoxLayout(Testimonial_tab);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        Testimonial_text = new QTextEdit(Testimonial_tab);
        Testimonial_text->setObjectName(QStringLiteral("Testimonial_text"));
        Testimonial_text->setReadOnly(true);

        verticalLayout_6->addWidget(Testimonial_text);

        tabWidget->addTab(Testimonial_tab, QString());

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(AboutText, Request_Pamplet);
        QWidget::setTabOrder(Request_Pamplet, CustUN);
        QWidget::setTabOrder(CustUN, CustPW);
        QWidget::setTabOrder(CustPW, CustomerLogin_Button);
        QWidget::setTabOrder(CustomerLogin_Button, AdminUN);
        QWidget::setTabOrder(AdminUN, AdminPW);
        QWidget::setTabOrder(AdminPW, AdminLogin_Button);
        QWidget::setTabOrder(AdminLogin_Button, Products_Text);
        QWidget::setTabOrder(Products_Text, Contact_Text);
        QWidget::setTabOrder(Contact_Text, Help_Text);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Request_Pamplet->setText(QApplication::translate("MainWindow", "Request Pamplet", Q_NULLPTR));
        CustLogin->setTitle(QApplication::translate("MainWindow", "Customer Login", Q_NULLPTR));
        CustomerLogin_Button->setText(QApplication::translate("MainWindow", "Customer Login", Q_NULLPTR));
        Label_CUSTUN->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        Label_CUSTPW->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        AdminLogin->setTitle(QApplication::translate("MainWindow", "Administrator", Q_NULLPTR));
        Uname->setText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        Pword->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        AdminLogin_Button->setText(QApplication::translate("MainWindow", "Admin Login", Q_NULLPTR));
        Exit_Button->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        AboutText->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:25px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-size:12pt; font-weight:600; color:#313131; background-color:#ffffff;\">About us</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:25px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'open-sans,sans-serif'; font-size:12pt; font-weight:696; color:#313131; background-color:#ffffff;\">What we provide</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#313131; background-color:#ffffff;\">iRobot Co. manufactures high-quality, innovative, and cost-effective bomb disposal robots</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'open-sans,sans-serif'; font-size:12pt; font-weight:696; color:#313131; background-color:#ffffff;\">Why you should buy our products</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:36px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;\">All iRobot Co. robots are made on-site within its 50,000 square-foot manufacturing facility from our design and prototyping to machine shop, assembly and quality assurance.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-l"
                        "eft:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;\">Many products are created based on customer feedback, enabling the company to constantly work on developing new and custom solutions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;\">Strongly</span><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323;\"> customer fo"
                        "cused and solutions-oriented, iRobot Co. has earned the confidence of civilian law enforcement agencies worldwide. iRobot Co.</span><span style=\" font-family:'Rubik,sans-serif'; font-size:12pt; font-weight:296; color:#232323; background-color:#ffffff;\"> robots are used worldwide in more than 40 countries </span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(About_Tab), QApplication::translate("MainWindow", "About", Q_NULLPTR));
        Products_Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Our Products</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Mini Robot- $5,000.00</span></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Designed for rapid tactical missions.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Quick to deploy for searching rooms, hallways, stairwells and confined spaces. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Includes an extendible rotating claw arm that simplifies opening door handles.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- With rubber tracks and articulating front and rear flippers, the iMini effortlessly climbs stairs. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#363636;\">Medium Robot - $6,000.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- The Medium Robot</sp"
                        "an><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323;\"> is a medium-sized robot designed for remote handling.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Uniquely equipped with two robotic arms (a heavy-duty robotic claw and twin-disruptor turret).</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Six color cameras help facilitate all kinds of surveillance missions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block"
                        "-indent:0; text-indent:0px; font-family:'Rubik,sans-serif'; font-size:8pt; font-weight:296; color:#363636;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#363636;\">Large Robot - $8,000.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- The Large Robot is the most powerful of all iRobots with a lift  capacity of 200 lbs.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- Provides automatic pre-set positioning to facilitate rapid deployment. </span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- 3D avatar that offers real-time positional feedback on the actual position of the robot.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; background-color:#ffffff;\"><span style=\" font-family:'Rubik,sans-serif'; font-size:10pt; font-weight:296; color:#232323; background-color:#ffffff;\">- The design allows for reduced maintenance costs through easy platform upgrades, field repair, and parts replacement.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:"
                        "0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#363636;\">Logistics and Maintenance</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 1 year:  $2,000.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 2 year:  $3,500.00</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- 5 year:  $4,200.00</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span s"
                        "tyle=\" font-size:12pt; font-weight:600; color:#363636;\">Guaruntee Policy</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#363636;\">-</span><span style=\" font-size:10pt; color:#363636;\"> All iRobot Co. robots gauruntees your money back if you are unsatisfied with our product.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; color:#363636;\"><br /></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Products_Tab), QApplication::translate("MainWindow", "Products", Q_NULLPTR));
        Contact_Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">iRobot Co.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px; font-size:11pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; background-color:#ffffff; vertical-align:top;\">3474 Empresa Dr Suite 150, </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; background-color:#ffffff; vertical-align:top;\">San Luis Obispo, CA 93401</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Roboto,arial,sans-serif'; font-size:11pt; color:#232323; vertical-align:top;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a name=\"L33\"></a><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;\">(</span><span style=\" font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;\">805)-123-4567</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Consolas,Liberation Mono,Menlo,Courier,monospace'; font-size:11pt; color:#232323; vertical-align:top;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; color:#232323; vertical-align:top;\">www.iRobot.com</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Contact_Tab), QApplication::translate("MainWindow", "Contact", Q_NULLPTR));
        Help_Text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">Program Help</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; text-decoration: underline;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Requesting a Pamphlet</span></p>\n"
"<p style=\" margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">- </span><span style=\" font-size:10pt;\">Click on the button on the left that says &quot;Request Pamphlet&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Enter The information that the software asks you for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Click &quot;Receve Pamphlet&quot; and it will be sent to your address ASAP</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">Purchase a Robot</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- To purchase one of our robots, first click on the &quot;Purchase&quot; Button to the left of the screen</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Enter your company name and your Id in the spaces provided</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">- Select what robot, how many, and what kind of maintenance plan you would like to purchase</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-s"
                        "ize:10pt;\">- Click the purchase button on the bottom of the screen, and your robot(s) will be sent to you ASAP</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-"
                        "bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px; font-size:12pt; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">If you have any further questions, contact us at www.irobot.com</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Help_Tab), QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        Testimonial_text->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(Testimonial_tab), QApplication::translate("MainWindow", "Testimonials", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
