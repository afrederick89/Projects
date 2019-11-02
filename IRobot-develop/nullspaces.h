#ifndef NULLSPACES_H
#define NULLSPACES_H

#include <QDialog>

/*! Null Space Header.
    header file for the null space error source.
*/

namespace Ui {
class NullSpaces;
}

class NullSpaces : public QDialog
{
    Q_OBJECT

public:
    explicit NullSpaces(QWidget *parent = 0);
    ~NullSpaces();

private slots:
    void on_pushButton_clicked();

private:
    Ui::NullSpaces *ui;
};

#endif // NULLSPACES_H
