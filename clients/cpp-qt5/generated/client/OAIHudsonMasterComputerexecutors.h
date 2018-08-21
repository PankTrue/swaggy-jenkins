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

/*
 * OAIHudsonMasterComputerexecutors.h
 *
 * 
 */

#ifndef OAIHudsonMasterComputerexecutors_H_
#define OAIHudsonMasterComputerexecutors_H_

#include <QJsonObject>


#include "OAIOAIFreeStyleBuild.h"
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIHudsonMasterComputerexecutors: public OAIObject {
public:
    OAIHudsonMasterComputerexecutors();
    OAIHudsonMasterComputerexecutors(QString json);
    ~OAIHudsonMasterComputerexecutors();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIHudsonMasterComputerexecutors* fromJson(QString jsonString) override;

    OAIFreeStyleBuild* getCurrentExecutable();
    void setCurrentExecutable(OAIFreeStyleBuild* current_executable);

    bool isIdle();
    void setIdle(bool idle);

    bool isLikelyStuck();
    void setLikelyStuck(bool likely_stuck);

    qint32 getNumber();
    void setNumber(qint32 number);

    qint32 getProgress();
    void setProgress(qint32 progress);

    QString* getClass();
    void setClass(QString* _class);


    virtual bool isSet() override;

private:
    OAIFreeStyleBuild* current_executable;
    bool m_current_executable_isSet;

    bool idle;
    bool m_idle_isSet;

    bool likely_stuck;
    bool m_likely_stuck_isSet;

    qint32 number;
    bool m_number_isSet;

    qint32 progress;
    bool m_progress_isSet;

    QString* _class;
    bool m__class_isSet;

};

}

#endif /* OAIHudsonMasterComputerexecutors_H_ */