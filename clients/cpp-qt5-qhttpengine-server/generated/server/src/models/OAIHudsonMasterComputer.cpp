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


#include "OAIHudsonMasterComputer.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIHudsonMasterComputer::OAIHudsonMasterComputer(QString json) {
    this->fromJson(json);
}

OAIHudsonMasterComputer::OAIHudsonMasterComputer() {
    this->init();
}

OAIHudsonMasterComputer::~OAIHudsonMasterComputer() {
    
}

void
OAIHudsonMasterComputer::init() {
    m__class_isSet = false;
    m_display_name_isSet = false;
    m_executors_isSet = false;
    m_icon_isSet = false;
    m_icon_class_name_isSet = false;
    m_idle_isSet = false;
    m_jnlp_agent_isSet = false;
    m_launch_supported_isSet = false;
    m_load_statistics_isSet = false;
    m_manual_launch_allowed_isSet = false;
    m_monitor_data_isSet = false;
    m_num_executors_isSet = false;
    m_offline_isSet = false;
    m_offline_cause_isSet = false;
    m_offline_cause_reason_isSet = false;
    m_temporarily_offline_isSet = false;
}

void
OAIHudsonMasterComputer::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIHudsonMasterComputer::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(_class, json[QString("_class")]);
    
    ::OpenAPI::fromJsonValue(display_name, json[QString("displayName")]);
    
    
    ::OpenAPI::fromJsonValue(executors, json[QString("executors")]);
    ::OpenAPI::fromJsonValue(icon, json[QString("icon")]);
    
    ::OpenAPI::fromJsonValue(icon_class_name, json[QString("iconClassName")]);
    
    ::OpenAPI::fromJsonValue(idle, json[QString("idle")]);
    
    ::OpenAPI::fromJsonValue(jnlp_agent, json[QString("jnlpAgent")]);
    
    ::OpenAPI::fromJsonValue(launch_supported, json[QString("launchSupported")]);
    
    ::OpenAPI::fromJsonValue(load_statistics, json[QString("loadStatistics")]);
    
    ::OpenAPI::fromJsonValue(manual_launch_allowed, json[QString("manualLaunchAllowed")]);
    
    ::OpenAPI::fromJsonValue(monitor_data, json[QString("monitorData")]);
    
    ::OpenAPI::fromJsonValue(num_executors, json[QString("numExecutors")]);
    
    ::OpenAPI::fromJsonValue(offline, json[QString("offline")]);
    
    ::OpenAPI::fromJsonValue(offline_cause, json[QString("offlineCause")]);
    
    ::OpenAPI::fromJsonValue(offline_cause_reason, json[QString("offlineCauseReason")]);
    
    ::OpenAPI::fromJsonValue(temporarily_offline, json[QString("temporarilyOffline")]);
    
}

QString
OAIHudsonMasterComputer::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIHudsonMasterComputer::asJsonObject() const {
    QJsonObject obj;
	if(m__class_isSet){
        obj.insert(QString("_class"), ::OpenAPI::toJsonValue(_class));
    }
	if(m_display_name_isSet){
        obj.insert(QString("displayName"), ::OpenAPI::toJsonValue(display_name));
    }
	
    if(executors.size() > 0){
        obj.insert(QString("executors"), ::OpenAPI::toJsonValue(executors));
    } 
	if(m_icon_isSet){
        obj.insert(QString("icon"), ::OpenAPI::toJsonValue(icon));
    }
	if(m_icon_class_name_isSet){
        obj.insert(QString("iconClassName"), ::OpenAPI::toJsonValue(icon_class_name));
    }
	if(m_idle_isSet){
        obj.insert(QString("idle"), ::OpenAPI::toJsonValue(idle));
    }
	if(m_jnlp_agent_isSet){
        obj.insert(QString("jnlpAgent"), ::OpenAPI::toJsonValue(jnlp_agent));
    }
	if(m_launch_supported_isSet){
        obj.insert(QString("launchSupported"), ::OpenAPI::toJsonValue(launch_supported));
    }
	if(load_statistics.isSet()){
        obj.insert(QString("loadStatistics"), ::OpenAPI::toJsonValue(load_statistics));
    }
	if(m_manual_launch_allowed_isSet){
        obj.insert(QString("manualLaunchAllowed"), ::OpenAPI::toJsonValue(manual_launch_allowed));
    }
	if(monitor_data.isSet()){
        obj.insert(QString("monitorData"), ::OpenAPI::toJsonValue(monitor_data));
    }
	if(m_num_executors_isSet){
        obj.insert(QString("numExecutors"), ::OpenAPI::toJsonValue(num_executors));
    }
	if(m_offline_isSet){
        obj.insert(QString("offline"), ::OpenAPI::toJsonValue(offline));
    }
	if(m_offline_cause_isSet){
        obj.insert(QString("offlineCause"), ::OpenAPI::toJsonValue(offline_cause));
    }
	if(m_offline_cause_reason_isSet){
        obj.insert(QString("offlineCauseReason"), ::OpenAPI::toJsonValue(offline_cause_reason));
    }
	if(m_temporarily_offline_isSet){
        obj.insert(QString("temporarilyOffline"), ::OpenAPI::toJsonValue(temporarily_offline));
    }
    return obj;
}

QString
OAIHudsonMasterComputer::getClass() const {
    return _class;
}
void
OAIHudsonMasterComputer::setClass(const QString &_class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QString
OAIHudsonMasterComputer::getDisplayName() const {
    return display_name;
}
void
OAIHudsonMasterComputer::setDisplayName(const QString &display_name) {
    this->display_name = display_name;
    this->m_display_name_isSet = true;
}

QList<OAIHudsonMasterComputerexecutors>
OAIHudsonMasterComputer::getExecutors() const {
    return executors;
}
void
OAIHudsonMasterComputer::setExecutors(const QList<OAIHudsonMasterComputerexecutors> &executors) {
    this->executors = executors;
    this->m_executors_isSet = true;
}

QString
OAIHudsonMasterComputer::getIcon() const {
    return icon;
}
void
OAIHudsonMasterComputer::setIcon(const QString &icon) {
    this->icon = icon;
    this->m_icon_isSet = true;
}

QString
OAIHudsonMasterComputer::getIconClassName() const {
    return icon_class_name;
}
void
OAIHudsonMasterComputer::setIconClassName(const QString &icon_class_name) {
    this->icon_class_name = icon_class_name;
    this->m_icon_class_name_isSet = true;
}

bool
OAIHudsonMasterComputer::isIdle() const {
    return idle;
}
void
OAIHudsonMasterComputer::setIdle(const bool &idle) {
    this->idle = idle;
    this->m_idle_isSet = true;
}

bool
OAIHudsonMasterComputer::isJnlpAgent() const {
    return jnlp_agent;
}
void
OAIHudsonMasterComputer::setJnlpAgent(const bool &jnlp_agent) {
    this->jnlp_agent = jnlp_agent;
    this->m_jnlp_agent_isSet = true;
}

bool
OAIHudsonMasterComputer::isLaunchSupported() const {
    return launch_supported;
}
void
OAIHudsonMasterComputer::setLaunchSupported(const bool &launch_supported) {
    this->launch_supported = launch_supported;
    this->m_launch_supported_isSet = true;
}

OAILabel1
OAIHudsonMasterComputer::getLoadStatistics() const {
    return load_statistics;
}
void
OAIHudsonMasterComputer::setLoadStatistics(const OAILabel1 &load_statistics) {
    this->load_statistics = load_statistics;
    this->m_load_statistics_isSet = true;
}

bool
OAIHudsonMasterComputer::isManualLaunchAllowed() const {
    return manual_launch_allowed;
}
void
OAIHudsonMasterComputer::setManualLaunchAllowed(const bool &manual_launch_allowed) {
    this->manual_launch_allowed = manual_launch_allowed;
    this->m_manual_launch_allowed_isSet = true;
}

OAIHudsonMasterComputermonitorData
OAIHudsonMasterComputer::getMonitorData() const {
    return monitor_data;
}
void
OAIHudsonMasterComputer::setMonitorData(const OAIHudsonMasterComputermonitorData &monitor_data) {
    this->monitor_data = monitor_data;
    this->m_monitor_data_isSet = true;
}

qint32
OAIHudsonMasterComputer::getNumExecutors() const {
    return num_executors;
}
void
OAIHudsonMasterComputer::setNumExecutors(const qint32 &num_executors) {
    this->num_executors = num_executors;
    this->m_num_executors_isSet = true;
}

bool
OAIHudsonMasterComputer::isOffline() const {
    return offline;
}
void
OAIHudsonMasterComputer::setOffline(const bool &offline) {
    this->offline = offline;
    this->m_offline_isSet = true;
}

QString
OAIHudsonMasterComputer::getOfflineCause() const {
    return offline_cause;
}
void
OAIHudsonMasterComputer::setOfflineCause(const QString &offline_cause) {
    this->offline_cause = offline_cause;
    this->m_offline_cause_isSet = true;
}

QString
OAIHudsonMasterComputer::getOfflineCauseReason() const {
    return offline_cause_reason;
}
void
OAIHudsonMasterComputer::setOfflineCauseReason(const QString &offline_cause_reason) {
    this->offline_cause_reason = offline_cause_reason;
    this->m_offline_cause_reason_isSet = true;
}

bool
OAIHudsonMasterComputer::isTemporarilyOffline() const {
    return temporarily_offline;
}
void
OAIHudsonMasterComputer::setTemporarilyOffline(const bool &temporarily_offline) {
    this->temporarily_offline = temporarily_offline;
    this->m_temporarily_offline_isSet = true;
}


bool
OAIHudsonMasterComputer::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m__class_isSet){ isObjectUpdated = true; break;}
    
        if(m_display_name_isSet){ isObjectUpdated = true; break;}
    
        if(executors.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_icon_isSet){ isObjectUpdated = true; break;}
    
        if(m_icon_class_name_isSet){ isObjectUpdated = true; break;}
    
        if(m_idle_isSet){ isObjectUpdated = true; break;}
    
        if(m_jnlp_agent_isSet){ isObjectUpdated = true; break;}
    
        if(m_launch_supported_isSet){ isObjectUpdated = true; break;}
    
        if(load_statistics.isSet()){ isObjectUpdated = true; break;}
    
        if(m_manual_launch_allowed_isSet){ isObjectUpdated = true; break;}
    
        if(monitor_data.isSet()){ isObjectUpdated = true; break;}
    
        if(m_num_executors_isSet){ isObjectUpdated = true; break;}
    
        if(m_offline_isSet){ isObjectUpdated = true; break;}
    
        if(m_offline_cause_isSet){ isObjectUpdated = true; break;}
    
        if(m_offline_cause_reason_isSet){ isObjectUpdated = true; break;}
    
        if(m_temporarily_offline_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}
