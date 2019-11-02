#ifndef INVALIDENTRY_H
#define INVALIDENTRY_H

#include <QDialog>
/** \class InvalidEntry
 * InvalidEntry class - Creates a popup window to let the user know they have encountered an error
 */
namespace Ui {
class InvalidEntry;
}

class InvalidEntry : public QDialog
{
    Q_OBJECT

public:
    explicit InvalidEntry(QWidget *parent = 0); ///Constructor
    ~InvalidEntry();

private slots:
    /// displays error message. hides itself
    void on_pushButton_clicked();

private:
    Ui::InvalidEntry *ui;
};

#endif // INVALIDENTRY_H
