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
 * BranchImpl.h
 *
 * 
 */

#ifndef BranchImpl_H_
#define BranchImpl_H_


#include "ModelBase.h"

#include "BranchImpllinks.h"
#include "BranchImplpermissions.h"
#include <string>
#include "PipelineRunImpl.h"
#include "StringParameterDefinition.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  BranchImpl
    : public ModelBase
{
public:
    BranchImpl();
    virtual ~BranchImpl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// BranchImpl members

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
    std::string getDisplayName() const;
    void setDisplayName(std::string const& value);
    bool displayNameIsSet() const;
    void unsetDisplayName();
    /// <summary>
    /// 
    /// </summary>
    int32_t getEstimatedDurationInMillis() const;
    void setEstimatedDurationInMillis(int32_t const value);
    bool estimatedDurationInMillisIsSet() const;
    void unsetEstimatedDurationInMillis();
    /// <summary>
    /// 
    /// </summary>
    std::string getFullDisplayName() const;
    void setFullDisplayName(std::string const& value);
    bool fullDisplayNameIsSet() const;
    void unsetFullDisplayName();
    /// <summary>
    /// 
    /// </summary>
    std::string getFullName() const;
    void setFullName(std::string const& value);
    bool fullNameIsSet() const;
    void unsetFullName();
    /// <summary>
    /// 
    /// </summary>
    std::string getName() const;
    void setName(std::string const& value);
    bool nameIsSet() const;
    void unsetName();
    /// <summary>
    /// 
    /// </summary>
    std::string getOrganization() const;
    void setOrganization(std::string const& value);
    bool organizationIsSet() const;
    void unsetOrganization();
    /// <summary>
    /// 
    /// </summary>
    std::vector<StringParameterDefinition>& getParameters();
    bool parametersIsSet() const;
    void unsetParameters();
    /// <summary>
    /// 
    /// </summary>
    BranchImplpermissions getPermissions() const;
    void setPermissions(BranchImplpermissions const& value);
    bool permissionsIsSet() const;
    void unsetPermissions();
    /// <summary>
    /// 
    /// </summary>
    int32_t getWeatherScore() const;
    void setWeatherScore(int32_t const value);
    bool weatherScoreIsSet() const;
    void unsetWeatherScore();
    /// <summary>
    /// 
    /// </summary>
    std::string getPullRequest() const;
    void setPullRequest(std::string const& value);
    bool pullRequestIsSet() const;
    void unsetPullRequest();
    /// <summary>
    /// 
    /// </summary>
    BranchImpllinks getLinks() const;
    void setLinks(BranchImpllinks const& value);
    bool linksIsSet() const;
    void unset_links();
    /// <summary>
    /// 
    /// </summary>
    PipelineRunImpl getLatestRun() const;
    void setLatestRun(PipelineRunImpl const& value);
    bool latestRunIsSet() const;
    void unsetLatestRun();

protected:
    std::string m__class;
    bool m__classIsSet;
    std::string m_DisplayName;
    bool m_DisplayNameIsSet;
    int32_t m_EstimatedDurationInMillis;
    bool m_EstimatedDurationInMillisIsSet;
    std::string m_FullDisplayName;
    bool m_FullDisplayNameIsSet;
    std::string m_FullName;
    bool m_FullNameIsSet;
    std::string m_Name;
    bool m_NameIsSet;
    std::string m_Organization;
    bool m_OrganizationIsSet;
    std::vector<StringParameterDefinition> m_Parameters;
    bool m_ParametersIsSet;
    BranchImplpermissions m_Permissions;
    bool m_PermissionsIsSet;
    int32_t m_WeatherScore;
    bool m_WeatherScoreIsSet;
    std::string m_PullRequest;
    bool m_PullRequestIsSet;
    BranchImpllinks m__links;
    bool m__linksIsSet;
    PipelineRunImpl m_LatestRun;
    bool m_LatestRunIsSet;
};

}
}
}
}

#endif /* BranchImpl_H_ */