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

#include "RemoteAccessApi.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

RemoteAccessApi::RemoteAccessApi(Pistache::Address addr)
    : httpEndpoint(std::make_shared<Pistache::Http::Endpoint>(addr))
{ };

void RemoteAccessApi::init(size_t thr = 2) {
    auto opts = Pistache::Http::Endpoint::options()
        .threads(thr)
        .flags(Pistache::Tcp::Options::InstallSignalHandler);
    httpEndpoint->init(opts);
    setupRoutes();
}

void RemoteAccessApi::start() {
    httpEndpoint->setHandler(router.handler());
    httpEndpoint->serve();
}

void RemoteAccessApi::shutdown() {
    httpEndpoint->shutdown();
}

void RemoteAccessApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Get(router, base + "/computer/api/json", Routes::bind(&RemoteAccessApi::get_computer_handler, this));
    Routes::Get(router, base + "/crumbIssuer/api/json", Routes::bind(&RemoteAccessApi::get_crumb_handler, this));
    Routes::Get(router, base + "/api/json", Routes::bind(&RemoteAccessApi::get_jenkins_handler, this));
    Routes::Get(router, base + "/job/:name/api/json", Routes::bind(&RemoteAccessApi::get_job_handler, this));
    Routes::Get(router, base + "/job/:name/config.xml", Routes::bind(&RemoteAccessApi::get_job_config_handler, this));
    Routes::Get(router, base + "/job/:name/lastBuild/api/json", Routes::bind(&RemoteAccessApi::get_job_last_build_handler, this));
    Routes::Get(router, base + "/job/:name/:number/logText/progressiveText", Routes::bind(&RemoteAccessApi::get_job_progressive_text_handler, this));
    Routes::Get(router, base + "/queue/api/json", Routes::bind(&RemoteAccessApi::get_queue_handler, this));
    Routes::Get(router, base + "/queue/item/:number/api/json", Routes::bind(&RemoteAccessApi::get_queue_item_handler, this));
    Routes::Get(router, base + "/view/:name/api/json", Routes::bind(&RemoteAccessApi::get_view_handler, this));
    Routes::Get(router, base + "/view/:name/config.xml", Routes::bind(&RemoteAccessApi::get_view_config_handler, this));
    Routes::Head(router, base + "/api/json", Routes::bind(&RemoteAccessApi::head_jenkins_handler, this));
    Routes::Post(router, base + "/createItem", Routes::bind(&RemoteAccessApi::post_create_item_handler, this));
    Routes::Post(router, base + "/createView", Routes::bind(&RemoteAccessApi::post_create_view_handler, this));
    Routes::Post(router, base + "/job/:name/build", Routes::bind(&RemoteAccessApi::post_job_build_handler, this));
    Routes::Post(router, base + "/job/:name/config.xml", Routes::bind(&RemoteAccessApi::post_job_config_handler, this));
    Routes::Post(router, base + "/job/:name/doDelete", Routes::bind(&RemoteAccessApi::post_job_delete_handler, this));
    Routes::Post(router, base + "/job/:name/disable", Routes::bind(&RemoteAccessApi::post_job_disable_handler, this));
    Routes::Post(router, base + "/job/:name/enable", Routes::bind(&RemoteAccessApi::post_job_enable_handler, this));
    Routes::Post(router, base + "/job/:name/lastBuild/stop", Routes::bind(&RemoteAccessApi::post_job_last_build_stop_handler, this));
    Routes::Post(router, base + "/view/:name/config.xml", Routes::bind(&RemoteAccessApi::post_view_config_handler, this));

    // Default handler, called when a route is not found
    router.addCustomHandler(Routes::bind(&RemoteAccessApi::remote_access_api_default_handler, this));
}

void RemoteAccessApi::get_computer_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the query params
    auto depth = request.query().get("depth");
    
    try {
      this->get_computer(depth, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_crumb_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_crumb(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_jenkins_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_jenkins(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_job_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_job(name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_job_config_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_job_config(name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_job_last_build_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_job_last_build(name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_job_progressive_text_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    auto number = request.param(":number").as<std::string>();
    
    // Getting the query params
    auto start = request.query().get("start");
    
    try {
      this->get_job_progressive_text(name, number, start, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_queue_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->get_queue(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_queue_item_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto number = request.param(":number").as<std::string>();
    
    try {
      this->get_queue_item(number, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_view_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_view(name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::get_view_config_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    try {
      this->get_view_config(name, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::head_jenkins_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    try {
      this->head_jenkins(response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_create_item_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param

    std::string body;
    
    // Getting the query params
    auto name = request.query().get("name");
    auto from = request.query().get("from");
    auto mode = request.query().get("mode");
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");
    auto contentType = request.headers().tryGetRaw("Content-Type");

    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());

      // The conversion is done automatically by the json library
      body = request_body;
      this->post_create_item(name, from, mode, body, jenkinsCrumb, contentType, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_create_view_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {

    // Getting the body param

    std::string body;
    
    // Getting the query params
    auto name = request.query().get("name");
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");
    auto contentType = request.headers().tryGetRaw("Content-Type");

    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());

      // The conversion is done automatically by the json library
      body = request_body;
      this->post_create_view(name, body, jenkinsCrumb, contentType, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_build_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the query params
    auto json = request.query().get("json");
    auto token = request.query().get("token");
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      this->post_job_build(name, json, token, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_config_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the body param

    std::string body;
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());

      // The conversion is done automatically by the json library
      body = request_body;
      this->post_job_config(name, body, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_delete_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      this->post_job_delete(name, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_disable_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      this->post_job_disable(name, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_enable_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      this->post_job_enable(name, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_job_last_build_stop_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      this->post_job_last_build_stop(name, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}
void RemoteAccessApi::post_view_config_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto name = request.param(":name").as<std::string>();
    
    // Getting the body param

    std::string body;
    
    // Getting the header params
    auto jenkinsCrumb = request.headers().tryGetRaw("Jenkins-Crumb");

    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());

      // The conversion is done automatically by the json library
      body = request_body;
      this->post_view_config(name, body, jenkinsCrumb, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void RemoteAccessApi::remote_access_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}
