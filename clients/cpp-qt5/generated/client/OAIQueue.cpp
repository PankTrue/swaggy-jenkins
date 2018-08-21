/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIQueue.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIQueue::OAIQueue(QString json) {
    init();
    this->fromJson(json);
}

OAIQueue::OAIQueue() {
    init();
}

OAIQueue::~OAIQueue() {
    this->cleanup();
}

void
OAIQueue::init() {
    _class = new QString("");
    m__class_isSet = false;
    items = new QList<OAIQueueBlockedItem*>();
    m_items_isSet = false;
}

void
OAIQueue::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(items != nullptr) { 
        auto arr = items;
        for(auto o: *arr) { 
            delete o;
        }
        delete items;
    }
}

OAIQueue*
OAIQueue::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIQueue::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&items, pJson["items"], "QList", "OAIQueueBlockedItem");
}

QString
OAIQueue::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIQueue::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(items->size() > 0){
        toJsonArray((QList<void*>*)items, obj, "items", "OAIQueueBlockedItem");
    }

    return obj;
}

QString*
OAIQueue::getClass() {
    return _class;
}
void
OAIQueue::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAIQueueBlockedItem*>*
OAIQueue::getItems() {
    return items;
}
void
OAIQueue::setItems(QList<OAIQueueBlockedItem*>* items) {
    this->items = items;
    this->m_items_isSet = true;
}


bool
OAIQueue::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(items->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}
