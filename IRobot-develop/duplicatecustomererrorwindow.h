#ifndef DUPLICATECUSTOMERERRORWINDOW_H
#define DUPLICATECUSTOMERERRORWINDOW_H

#include <QObject>
#include "ui_duplicatecustomererrorwindow.h"

namespace Ui {
class DuplicateCustomerErrorWindow;
}

class DuplicateCustomerErrorWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DuplicateCustomerErrorWindow(QWidget *parent = 0);
    ~DuplicateCustomerErrorWindow();

private slots:
    /// displays error message
    void on_retry_clicked();

private:
    Ui::DuplicateCustomerErrorWindow *ui;
};

#endif // DUPLICATECUSTOMERERRORWINDOW_H
