#ifndef INVALIDADDCUSTOMERNAME_H
#define INVALIDADDCUSTOMERNAME_H

#include <QDialog>

namespace Ui {
class InvalidAddCustomerName;
}

class InvalidAddCustomerName: public QDialog
{
    Q_OBJECT

public:
    explicit InvalidAddCustomerName(QWidget *parent = 0);
    ~InvalidAddCustomerName();

private slots:

    /// displays error message. hides itself
    void on_retry_clicked();

private:
    Ui::InvalidAddCustomerName *ui;
};

#endif // INVALIDADDCUSTOMERNAME_H
