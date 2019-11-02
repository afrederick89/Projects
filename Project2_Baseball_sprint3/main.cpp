#include "mainmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // connects to the database
    SQLManager::getInstance();

    QApplication a(argc, argv);
    MainMenu w;
    w.show();
    return a.exec();
}
