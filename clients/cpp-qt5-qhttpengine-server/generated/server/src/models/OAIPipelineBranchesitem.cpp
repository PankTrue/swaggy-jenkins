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


#include "OAIPipelineBranchesitem.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIPipelineBranchesitem::OAIPipelineBranchesitem(QString json) {
    this->fromJson(json);
}

OAIPipelineBranchesitem::OAIPipelineBranchesitem() {
    this->init();
}

OAIPipelineBranchesitem::~OAIPipelineBranchesitem() {
    
}

void
OAIPipelineBranchesitem::init() {
    m_display_name_isSet = false;
    m_estimated_duration_in_millis_isSet = false;
    m_name_isSet = false;
    m_weather_score_isSet = false;
    m_latest_run_isSet = false;
    m_organization_isSet = false;
    m_pull_request_isSet = false;
    m_total_number_of_pull_requests_isSet = false;
    m__class_isSet = false;
}

void
OAIPipelineBranchesitem::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIPipelineBranchesitem::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    ::OpenAPI::fromJsonValue(estimated_duration_in_millis, json[QString("estimatedDurationInMillis")]);
    
    ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    ::OpenAPI::fromJsonValue(weather_score, json[QString("weatherScore")]);
    
    ::OpenAPI::fromJsonValue(latest_run, json[QString("latestRun")]);
    
    ::OpenAPI::fromJsonValue(organization, json[QString("organization")]);
    
    ::OpenAPI::fromJsonValue(pull_request, json[QString("pullRequest")]);
    
    ::OpenAPI::fromJsonValue(total_number_of_pull_requests, json[QString("totalNumberOfPullRequests")]);
    
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
}

QString
OAIPipelineBranchesitem::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIPipelineBranchesitem::asJsonObject() const {
    QJsonObject obj;
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	if(m_estimated_duration_in_millis_isSet){
        obj.insert(QString("estimatedDurationInMillis"), ::OpenAPI::toJsonValue(estimated_duration_in_millis));
    }
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(m_weather_score_isSet){
        obj.insert(QString("weatherScore"), ::OpenAPI::toJsonValue(weather_score));
    }
	if(latest_run.isSet()){
        obj.insert(QString("latestRun"), ::OpenAPI::toJsonValue(latest_run));
    }
	if(m_organization_isSet){
        obj.insert(QString("organization"), ::OpenAPI::toJsonValue(organization));
    }
	if(pull_request.isSet()){
        obj.insert(QString("pullRequest"), ::OpenAPI::toJsonValue(pull_request));
    }
	if(m_total_number_of_pull_requests_isSet){
        obj.insert(QString("totalNumberOfPullRequests"), ::OpenAPI::toJsonValue(total_number_of_pull_requests));
    }
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
    return obj;
}

QString
OAIPipelineBranchesitem::getDisplayName() const {
    return display_name;
}
void
OAIPipelineBranchesitem::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

qint32
OAIPipelineBranchesitem::getEstimatedDurationInMillis() const {
    return estimated_duration_in_millis;
}
void
OAIPipelineBranchesitem::setEstimatedDurationInMillis(const qint32 &estimated_duration_in_millis) {
    this->estimated_duration_in_millis = estimated_duration_in_millis;
    this->m_estimated_duration_in_millis_isSet = true;
}

QString
OAIPipelineBranchesitem::getName() const {
    return name;
}
void
OAIPipelineBranchesitem::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}

qint32
OAIPipelineBranchesitem::getWeatherScore() const {
    return weather_score;
}
void
OAIPipelineBranchesitem::setWeatherScore(const qint32 &weather_score) {
    this->weather_score = weather_score;
    this->m_weather_score_isSet = true;
}

OAIPipelineBranchesitemlatestRun
OAIPipelineBranchesitem::getLatestRun() const {
    return latest_run;
}
void
OAIPipelineBranchesitem::setLatestRun(const OAIPipelineBranchesitemlatestRun &latest_run) {
    this->latest_run = latest_run;
    this->m_latest_run_isSet = true;
}

QString
OAIPipelineBranchesitem::getOrganization() const {
    return organization;
}
void
OAIPipelineBranchesitem::setOrganization(const QString &organization) {
    this->organization = organization;
    this->m_organization_isSet = true;
}

OAIPipelineBranchesitempullRequest
OAIPipelineBranchesitem::getPullRequest() const {
    return pull_request;
}
void
OAIPipelineBranchesitem::setPullRequest(const OAIPipelineBranchesitempullRequest &pull_request) {
    this->pull_request = pull_request;
    this->m_pull_request_isSet = true;
}

qint32
OAIPipelineBranchesitem::getTotalNumberOfPullRequests() const {
    return total_number_of_pull_requests;
}
void
OAIPipelineBranchesitem::setTotalNumberOfPullRequests(const qint32 &total_number_of_pull_requests) {
    this->total_number_of_pull_requests = total_number_of_pull_requests;
    this->m_total_number_of_pull_requests_isSet = true;
}

QString
OAIPipelineBranchesitem::getClass() const {
    return _class;
}
void
OAIPipelineBranchesitem::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}


bool
OAIPipelineBranchesitem::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_estimated_duration_in_millis_isSet){ isObjectUpdated = true; break;}
    
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_weather_score_isSet){ isObjectUpdated = true; break;}
    
        if(latest_run.isSet()){ isObjectUpdated = true; break;}
    
        if(m_organization_isSet){ isObjectUpdated = true; break;}
    
        if(pull_request.isSet()){ isObjectUpdated = true; break;}
    
        if(m_total_number_of_pull_requests_isSet){ isObjectUpdated = true; break;}
    
        if(m__class_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
