#ifndef CUSTOMERNOTFOUND_H
#define CUSTOMERNOTFOUND_H


#include <QDialog>

namespace Ui {
class customernotfound;
}

class customernotfound : public QDialog
{
    Q_OBJECT

public:
    explicit customernotfound(QWidget *parent = 0);
    ~customernotfound();

private slots:

    /// displays error message
    void on_retry_clicked();

private:
    Ui::customernotfound *ui;
};

#endif // CUSTOMERNOTFOUND_H
