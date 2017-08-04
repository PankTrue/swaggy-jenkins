/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "FavoriteImpl.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

FavoriteImpl::FavoriteImpl(QString* json) {
    init();
    this->fromJson(*json);
}

FavoriteImpl::FavoriteImpl() {
    init();
}

FavoriteImpl::~FavoriteImpl() {
    this->cleanup();
}

void
FavoriteImpl::init() {
    _class = new QString("");
    _links = new FavoriteImpllinks();
    item = new PipelineImpl();
}

void
FavoriteImpl::cleanup() {
    
    if(_class != nullptr) {
        delete _class;
    }

    if(_links != nullptr) {
        delete _links;
    }

    if(item != nullptr) {
        delete item;
    }
}

FavoriteImpl*
FavoriteImpl::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
FavoriteImpl::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&_class, pJson["_class"], "QString", "QString");
    ::Swagger::setValue(&_links, pJson["_links"], "FavoriteImpllinks", "FavoriteImpllinks");
    ::Swagger::setValue(&item, pJson["item"], "PipelineImpl", "PipelineImpl");
}

QString
FavoriteImpl::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
FavoriteImpl::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("_class"), _class, obj, QString("QString"));

    toJsonValue(QString("_links"), _links, obj, QString("FavoriteImpllinks"));

    toJsonValue(QString("item"), item, obj, QString("PipelineImpl"));

    return obj;
}

QString*
FavoriteImpl::getClass() {
    return _class;
}
void
FavoriteImpl::setClass(QString* _class) {
    this->_class = _class;
}

FavoriteImpllinks*
FavoriteImpl::getLinks() {
    return _links;
}
void
FavoriteImpl::setLinks(FavoriteImpllinks* _links) {
    this->_links = _links;
}

PipelineImpl*
FavoriteImpl::getItem() {
    return item;
}
void
FavoriteImpl::setItem(PipelineImpl* item) {
    this->item = item;
}


}
