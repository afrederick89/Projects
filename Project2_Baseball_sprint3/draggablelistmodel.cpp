#include "draggablelistmodel.h"

DraggableListModel::DraggableListModel(QObject *parent)
{

}

DraggableListModel::DraggableListModel(const QStringList &strings, QObject *parent)
{
    this->setStringList(strings);
}

Qt::ItemFlags DraggableListModel::flags (const QModelIndex & index) const {
    Qt::ItemFlags defaultFlags = QStringListModel::flags(index);
    if (index.isValid()){
        return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsDragEnabled;
    }
    return defaultFlags;
}
