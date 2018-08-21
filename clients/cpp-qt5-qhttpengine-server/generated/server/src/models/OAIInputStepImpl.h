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
 * OAIInputStepImpl.h
 *
 * 
 */

#ifndef OAIInputStepImpl_H
#define OAIInputStepImpl_H

#include <QJsonObject>


#include "OAIInputStepImpllinks.h"
#include "OAIStringParameterDefinition.h"
#include <QList>
#include <QString>

#include "OAIObject.h"

namespace OpenAPI {

class OAIInputStepImpl: public OAIObject {
public:
    OAIInputStepImpl();
    OAIInputStepImpl(QString json);
    ~OAIInputStepImpl() override;
    void init();

    QString asJson () const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getClass() const;
    void setClass(const QString &_class);

    OAIInputStepImpllinks getLinks() const;
    void setLinks(const OAIInputStepImpllinks &_links);

    QString getId() const;
    void setId(const QString &id);

    QString getMessage() const;
    void setMessage(const QString &message);

    QString getOk() const;
    void setOk(const QString &ok);

    QList<OAIStringParameterDefinition> getParameters() const;
    void setParameters(const QList<OAIStringParameterDefinition> &parameters);

    QString getSubmitter() const;
    void setSubmitter(const QString &submitter);

    virtual bool isSet() const override;

private:
    QString _class;
    bool m__class_isSet;

    OAIInputStepImpllinks _links;
    bool m__links_isSet;

    QString id;
    bool m_id_isSet;

    QString message;
    bool m_message_isSet;

    QString ok;
    bool m_ok_isSet;

    QList<OAIStringParameterDefinition> parameters;
    bool m_parameters_isSet;

    QString submitter;
    bool m_submitter_isSet;

};

}

#endif // OAIInputStepImpl_H