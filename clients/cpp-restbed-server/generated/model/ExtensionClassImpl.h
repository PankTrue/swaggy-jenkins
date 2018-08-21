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
 * ExtensionClassImpl.h
 *
 * 
 */

#ifndef ExtensionClassImpl_H_
#define ExtensionClassImpl_H_



#include "ExtensionClassImpllinks.h"
#include <string>
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ExtensionClassImpl
{
public:
    ExtensionClassImpl();
    virtual ~ExtensionClassImpl();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ExtensionClassImpl members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getClass() const;
    void setClass(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ExtensionClassImpllinks> getLinks() const;
    void setLinks(std::shared_ptr<ExtensionClassImpllinks> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getClasses() const;
    void setClasses(std::vector<std::string> value);

protected:
    std::string m__class;
    std::shared_ptr<ExtensionClassImpllinks> m__links;
    std::vector<std::string> m_Classes;
};

}
}
}
}

#endif /* ExtensionClassImpl_H_ */