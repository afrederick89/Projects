#ifndef DRAGGABLELISTMODEL_H
#define DRAGGABLELISTMODEL_H
#include <QWidget>

#include <QStringListModel>

class DraggableListModel : public QStringListModel
{
public:
    DraggableListModel(QObject* parent = Q_NULLPTR);
    DraggableListModel(const QStringList & strings, QObject* parent = Q_NULLPTR);
    Qt::ItemFlags flags (const QModelIndex& index) const;
    void save();
};
#endif // DRAGGABLELISTMODEL_H
