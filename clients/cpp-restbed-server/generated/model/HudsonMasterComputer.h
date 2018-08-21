/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.2.1-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * HudsonMasterComputer.h
 *
 * 
 */

#ifndef HudsonMasterComputer_H_
#define HudsonMasterComputer_H_



#include <string>
#include "HudsonMasterComputermonitorData.h"
#include "Label1.h"
#include <vector>
#include "HudsonMasterComputerexecutors.h"
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  HudsonMasterComputer
{
public:
    HudsonMasterComputer();
    virtual ~HudsonMasterComputer();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// HudsonMasterComputer members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getDisplayName() const;
    void setDisplayName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<HudsonMasterComputerexecutors>> getExecutors() const;
    void setExecutors(std::vector<std::shared_ptr<HudsonMasterComputerexecutors>> value);
    /// <summary>
    /// 
    /// </summary>
    std::string getIcon() const;
    void setIcon(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getIconClassName() const;
    void setIconClassName(std::string value);
    /// <summary>
    /// 
    /// </summary>
    bool isIdle() const;
    void setIdle(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isJnlpAgent() const;
    void setJnlpAgent(bool value);
    /// <summary>
    /// 
    /// </summary>
    bool isLaunchSupported() const;
    void setLaunchSupported(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Label1> getLoadStatistics() const;
    void setLoadStatistics(std::shared_ptr<Label1> value);
    /// <summary>
    /// 
    /// </summary>
    bool isManualLaunchAllowed() const;
    void setManualLaunchAllowed(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<HudsonMasterComputermonitorData> getMonitorData() const;
    void setMonitorData(std::shared_ptr<HudsonMasterComputermonitorData> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getNumExecutors() const;
    void setNumExecutors(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isOffline() const;
    void setOffline(bool value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOfflineCause() const;
    void setOfflineCause(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getOfflineCauseReason() const;
    void setOfflineCauseReason(std::string value);
    /// <summary>
    /// 
    /// </summary>
    bool isTemporarilyOffline() const;
    void setTemporarilyOffline(bool value);

protected:
    std::string m__class;
    std::string m_DisplayName;
    std::vector<std::shared_ptr<HudsonMasterComputerexecutors>> m_Executors;
    std::string m_Icon;
    std::string m_IconClassName;
    bool m_Idle;
    bool m_JnlpAgent;
    bool m_LaunchSupported;
    std::shared_ptr<Label1> m_LoadStatistics;
    bool m_ManualLaunchAllowed;
    std::shared_ptr<HudsonMasterComputermonitorData> m_MonitorData;
    int32_t m_NumExecutors;
    bool m_Offline;
    std::string m_OfflineCause;
    std::string m_OfflineCauseReason;
    bool m_TemporarilyOffline;
};

}
}
}
}

#endif /* HudsonMasterComputer_H_ */