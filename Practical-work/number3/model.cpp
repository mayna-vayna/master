#include "model.h"


#include <QJsonObject>

Model::Model(QObject *parent) : QObject(parent)
{

}

Model::Model(QJsonObject object) {
    this->id = object.value("id").toInt();
    this->name = object.value("name").toString();
    this->surname = object.value("surname").toString();


}
