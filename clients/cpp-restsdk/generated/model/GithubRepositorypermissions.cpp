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



#include "GithubRepositorypermissions.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

GithubRepositorypermissions::GithubRepositorypermissions()
{
    m_Admin = false;
    m_AdminIsSet = false;
    m_Push = false;
    m_PushIsSet = false;
    m_Pull = false;
    m_PullIsSet = false;
    m__class = utility::conversions::to_string_t("");
    m__classIsSet = false;
}

GithubRepositorypermissions::~GithubRepositorypermissions()
{
}

void GithubRepositorypermissions::validate()
{
    // TODO: implement validation
}

web::json::value GithubRepositorypermissions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_AdminIsSet)
    {
        val[utility::conversions::to_string_t("admin")] = ModelBase::toJson(m_Admin);
    }
    if(m_PushIsSet)
    {
        val[utility::conversions::to_string_t("push")] = ModelBase::toJson(m_Push);
    }
    if(m_PullIsSet)
    {
        val[utility::conversions::to_string_t("pull")] = ModelBase::toJson(m_Pull);
    }
    if(m__classIsSet)
    {
        val[utility::conversions::to_string_t("_class")] = ModelBase::toJson(m__class);
    }

    return val;
}

void GithubRepositorypermissions::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("admin")))
    {
        setAdmin(ModelBase::boolFromJson(val[utility::conversions::to_string_t("admin")]));
    }
    if(val.has_field(utility::conversions::to_string_t("push")))
    {
        setPush(ModelBase::boolFromJson(val[utility::conversions::to_string_t("push")]));
    }
    if(val.has_field(utility::conversions::to_string_t("pull")))
    {
        setPull(ModelBase::boolFromJson(val[utility::conversions::to_string_t("pull")]));
    }
    if(val.has_field(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromJson(val[utility::conversions::to_string_t("_class")]));
    }
}

void GithubRepositorypermissions::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_AdminIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("admin"), m_Admin));
    }
    if(m_PushIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("push"), m_Push));
    }
    if(m_PullIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pull"), m_Pull));
    }
    if(m__classIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("_class"), m__class));
    }
}

void GithubRepositorypermissions::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("admin")))
    {
        setAdmin(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("admin"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("push")))
    {
        setPush(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("push"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("pull")))
    {
        setPull(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("pull"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("_class")))
    {
        setClass(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("_class"))));
    }
}

bool GithubRepositorypermissions::isAdmin() const
{
    return m_Admin;
}


void GithubRepositorypermissions::setAdmin(bool value)
{
    m_Admin = value;
    m_AdminIsSet = true;
}
bool GithubRepositorypermissions::adminIsSet() const
{
    return m_AdminIsSet;
}

void GithubRepositorypermissions::unsetAdmin()
{
    m_AdminIsSet = false;
}

bool GithubRepositorypermissions::isPush() const
{
    return m_Push;
}


void GithubRepositorypermissions::setPush(bool value)
{
    m_Push = value;
    m_PushIsSet = true;
}
bool GithubRepositorypermissions::pushIsSet() const
{
    return m_PushIsSet;
}

void GithubRepositorypermissions::unsetPush()
{
    m_PushIsSet = false;
}

bool GithubRepositorypermissions::isPull() const
{
    return m_Pull;
}


void GithubRepositorypermissions::setPull(bool value)
{
    m_Pull = value;
    m_PullIsSet = true;
}
bool GithubRepositorypermissions::pullIsSet() const
{
    return m_PullIsSet;
}

void GithubRepositorypermissions::unsetPull()
{
    m_PullIsSet = false;
}

utility::string_t GithubRepositorypermissions::getClass() const
{
    return m__class;
}


void GithubRepositorypermissions::setClass(utility::string_t value)
{
    m__class = value;
    m__classIsSet = true;
}
bool GithubRepositorypermissions::_classIsSet() const
{
    return m__classIsSet;
}

void GithubRepositorypermissions::unset_class()
{
    m__classIsSet = false;
}

}
}
}
}
