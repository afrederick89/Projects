#include "souvenirtable.h"

SouvenirTable::SouvenirTable(QObject *parent)
    : QAbstractTableModel(parent)
{
}

SouvenirTable::SouvenirTable(const QList<Souvenir> &souvenirList,
                             QObject *parent):
    QAbstractTableModel(parent)
{
    this->souvenirList = souvenirList;
}
int SouvenirTable::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return Souvenir::COLUMN_COUNT;
}
int SouvenirTable::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return souvenirList.size();
}
QVariant SouvenirTable::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return tr("Team Name");
        case 1:
            return tr("Item Name");
        case 2:
            return tr("Item Cost");
        default:
            return QVariant();
        }
    }
    return section + 1;
}

QVariant SouvenirTable::data (const QModelIndex &index,
                             int role) const
{
    if (!index.isValid())
        return QVariant();
    if (index.row() >= souvenirList.size() || index.row() < 0)
        return QVariant();

    if(role == Qt::DisplayRole) {
        const Souvenir& souvenir = souvenirList.at(index.row());
        QLocale::setDefault(QLocale(QLocale::English, QLocale::UnitedStates));
        QLocale aEnglish;
        switch(index.column()){
        case 0:
            return souvenir.teamName;
        case 1:
            return souvenir.itemName;
        case 2:
            return souvenir.itemCost;
        default:
            return QVariant();
        }
    }
    else if (role == Qt::TextAlignmentRole){
            return Qt::AlignCenter;
    }
    return QVariant();

}
