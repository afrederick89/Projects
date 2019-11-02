#ifndef CUSTOMHASHEDMAP_H
#define CUSTOMHASHEDMAP_H
#include <QVector>
#include "souvenirtable.h"
/*
 * struct Souvenir {
    const static int COLUMN_COUNT = 3;
    Souvenir(QString teamName, QString stadiumName, QString itemName, double itemCost){
        this->teamName = teamName;
        this->stadiumName = stadiumName;
        this->itemName = itemName;
        this->itemCost = itemCost;
    }
    Souvenir() {}
    QString teamName;
    QString stadiumName;
    QString itemName;
    double itemCost;
};
*/

class CustomHashedMap
{
private:
    QVector<Souvenir> bucket;

public:
    CustomHashedMap();
//    put(Souvenir key, Team value)

};

#endif // CUSTOMHASHEDMAP_H
