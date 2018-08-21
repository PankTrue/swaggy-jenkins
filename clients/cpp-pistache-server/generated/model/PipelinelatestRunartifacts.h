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
 * PipelinelatestRunartifacts.h
 *
 * 
 */

#ifndef PipelinelatestRunartifacts_H_
#define PipelinelatestRunartifacts_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PipelinelatestRunartifacts
    : public ModelBase
{
public:
    PipelinelatestRunartifacts();
    virtual ~PipelinelatestRunartifacts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PipelinelatestRunartifacts members

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
    int32_t getSize() const;
    void setSize(int32_t const value);
    bool sizeIsSet() const;
    void unsetSize();
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
    std::string getClass() const;
    void setClass(std::string const& value);
    bool classIsSet() const;
    void unset_class();

protected:
    std::string m_Name;
    bool m_NameIsSet;
    int32_t m_Size;
    bool m_SizeIsSet;
    std::string m_Url;
    bool m_UrlIsSet;
    std::string m__class;
    bool m__classIsSet;
};

}
}
}
}

#endif /* PipelinelatestRunartifacts_H_ */