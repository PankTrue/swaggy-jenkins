/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#include "CauseAction.h"

namespace io {
namespace swagger {
namespace server {
namespace model {

CauseAction::CauseAction()
{
    m__class = "";
    m__classIsSet = false;
    m_CausesIsSet = false;
    
}

CauseAction::~CauseAction()
{
}

void CauseAction::validate()
{
    // TODO: implement validation
}

nlohmann::json CauseAction::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m__classIsSet)
    {
        val["_class"] = ModelBase::toJson(m__class);
    }
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Causes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            val["causes"] = jsonArray;
        }
    }
    

    return val;
}

void CauseAction::fromJson(nlohmann::json& val)
{
    if(val.find("_class") != val.end())
    {
        setClass(val.at("_class"));
        
    }
    {
        m_Causes.clear();
        nlohmann::json jsonArray;
        if(val.find("causes") != val.end())
        {
        for( auto& item : val["causes"] )
        {
            
            if(item.is_null())
            {
                m_Causes.push_back( std::shared_ptr<CauseUserIdCause>(nullptr) );
            }
            else
            {
                std::shared_ptr<CauseUserIdCause> newItem(new CauseUserIdCause());
                newItem->fromJson(item);
                m_Causes.push_back( newItem );
            }
            
        }
        }
    }
    
}


std::string CauseAction::getClass() const
{
    return m__class;
}
void CauseAction::setClass(std::string value)
{
    m__class = value;
    m__classIsSet = true;
}
bool CauseAction::classIsSet() const
{
    return m__classIsSet;
}
void CauseAction::unset_class()
{
    m__classIsSet = false;
}
std::vector<std::shared_ptr<CauseUserIdCause>>& CauseAction::getCauses()
{
    return m_Causes;
}
bool CauseAction::causesIsSet() const
{
    return m_CausesIsSet;
}
void CauseAction::unsetCauses()
{
    m_CausesIsSet = false;
}

}
}
}
}
