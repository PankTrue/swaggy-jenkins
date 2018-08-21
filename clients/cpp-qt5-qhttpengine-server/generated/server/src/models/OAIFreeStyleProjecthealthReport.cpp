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


#include "OAIFreeStyleProjecthealthReport.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIFreeStyleProjecthealthReport::OAIFreeStyleProjecthealthReport(QString json) {
    this->fromJson(json);
}

OAIFreeStyleProjecthealthReport::OAIFreeStyleProjecthealthReport() {
    this->init();
}

OAIFreeStyleProjecthealthReport::~OAIFreeStyleProjecthealthReport() {
    
}

void
OAIFreeStyleProjecthealthReport::init() {
    m_description_isSet = false;
    m_icon_class_name_isSet = false;
    m_icon_url_isSet = false;
    m_score_isSet = false;
    m__class_isSet = false;
}

void
OAIFreeStyleProjecthealthReport::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIFreeStyleProjecthealthReport::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(description, json[QString("description")]);
    
    ::OpenAPI::fromJsonValue(icon_class_name, json[QString("iconClassName")]);
    
    ::OpenAPI::fromJsonValue(icon_url, json[QString("iconUrl")]);
    
    ::OpenAPI::fromJsonValue(score, json[QString("score")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIFreeStyleProjecthealthReport::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIFreeStyleProjecthealthReport::asJsonObject() const {
    QJsonObject obj;
	if(m_description_isSet){
        obj.insert(QString("description"), ::OpenAPI::toJsonValue(description));
    }
	if(m_icon_class_name_isSet){
        obj.insert(QString("iconClassName"), ::OpenAPI::toJsonValue(icon_class_name));
    }
	if(m_icon_url_isSet){
        obj.insert(QString("iconUrl"), ::OpenAPI::toJsonValue(icon_url));
    }
	if(m_score_isSet){
        obj.insert(QString("score"), ::OpenAPI::toJsonValue(score));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

QString
OAIFreeStyleProjecthealthReport::getDescription() const {
    return description;
}
void
OAIFreeStyleProjecthealthReport::setDescription(const QString &description) {
    this->description = description;
    this->m_description_isSet = true;
}

QString
OAIFreeStyleProjecthealthReport::getIconClassName() const {
    return icon_class_name;
}
void
OAIFreeStyleProjecthealthReport::setIconClassName(const QString &icon_class_name) {
    this->icon_class_name = icon_class_name;
    this->m_icon_class_name_isSet = true;
}

QString
OAIFreeStyleProjecthealthReport::getIconUrl() const {
    return icon_url;
}
void
OAIFreeStyleProjecthealthReport::setIconUrl(const QString &icon_url) {
    this->icon_url = icon_url;
    this->m_icon_url_isSet = true;
}

qint32
OAIFreeStyleProjecthealthReport::getScore() const {
    return score;
}
void
OAIFreeStyleProjecthealthReport::setScore(const qint32 &score) {
    this->score = score;
    this->m_score_isSet = true;
}

QString
OAIFreeStyleProjecthealthReport::getClass() const {
    return _class;
}
void
OAIFreeStyleProjecthealthReport::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIFreeStyleProjecthealthReport::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_description_isSet){ isObjectUpdated = true; break;}
    
        if(m_icon_class_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_icon_url_isSet){ isObjectUpdated = true; break;}
    
        if(m_score_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
