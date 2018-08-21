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
 * QueueBlockedItem.h
 *
 * 
 */

#ifndef QueueBlockedItem_H_
#define QueueBlockedItem_H_


#include "ModelBase.h"

#include <string>
#include "CauseAction.h"
#include "FreeStyleProject.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  QueueBlockedItem
    : public ModelBase
{
public:
    QueueBlockedItem();
    virtual ~QueueBlockedItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// QueueBlockedItem members

    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();
    /// <summary>
    /// 
    /// </summary>
    std::vector<CauseAction>& getActions();
    bool actionsIsSet() const;
    void unsetActions();
    /// <summary>
    /// 
    /// </summary>
    bool isBlocked() const;
    void setBlocked(bool const value);
    bool blockedIsSet() const;
    void unsetBlocked();
    /// <summary>
    /// 
    /// </summary>
    bool isBuildable() const;
    void setBuildable(bool const value);
    bool buildableIsSet() const;
    void unsetBuildable();
    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    void setId(int32_t const value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    int32_t getInQueueSince() const;
    void setInQueueSince(int32_t const value);
    bool inQueueSinceIsSet() const;
    void unsetInQueueSince();
    /// <summary>
    /// 
    /// </summary>
    std::string getParams() const;
    void setParams(std::string const& value);
    bool paramsIsSet() const;
    void unsetParams();
    /// <summary>
    /// 
    /// </summary>
    bool isStuck() const;
    void setStuck(bool const value);
    bool stuckIsSet() const;
    void unsetStuck();
    /// <summary>
    /// 
    /// </summary>
    FreeStyleProject getTask() const;
    void setTask(FreeStyleProject const& value);
    bool taskIsSet() const;
    void unsetTask();
    /// <summary>
    /// 
    /// </summary>
    std::string getUrl() const;
    void setUrl(std::string const& value);
    bool urlIsSet() const;
    void unsetUrl();
    /// <summary>
    /// 
    /// </summary>
    std::string getWhy() const;
    void setWhy(std::string const& value);
    bool whyIsSet() const;
    void unsetWhy();
    /// <summary>
    /// 
    /// </summary>
    int32_t getBuildableStartMilliseconds() const;
    void setBuildableStartMilliseconds(int32_t const value);
    bool buildableStartMillisecondsIsSet() const;
    void unsetBuildableStartMilliseconds();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::vector<CauseAction> m_Actions;
    bool m_ActionsIsSet;
    bool m_Blocked;
    bool m_BlockedIsSet;
    bool m_Buildable;
    bool m_BuildableIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_InQueueSince;
    bool m_InQueueSinceIsSet;
    std::string m_Params;
    bool m_ParamsIsSet;
    bool m_Stuck;
    bool m_StuckIsSet;
    FreeStyleProject m_Task;
    bool m_TaskIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
    std::string m_Why;
    bool m_WhyIsSet;
    int32_t m_BuildableStartMilliseconds;
    bool m_BuildableStartMillisecondsIsSet;
};

}
}
}
}

#endif /* QueueBlockedItem_H_ */