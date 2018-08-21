#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GithubRespositoryContainerlinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GithubRespositoryContainerlinks::GithubRespositoryContainerlinks()
{
	//__init();
}

GithubRespositoryContainerlinks::~GithubRespositoryContainerlinks()
{
	//__cleanup();
}

void
GithubRespositoryContainerlinks::__init()
{
	//self = new Link();
	//_class = std::string();
}

void
GithubRespositoryContainerlinks::__cleanup()
{
	//if(self != NULL) {
	//
	//delete self;
	//self = NULL;
	//}
	//if(_class != NULL) {
	//
	//delete _class;
	//_class = NULL;
	//}
	//
}

void
GithubRespositoryContainerlinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *selfKey = "self";
	node = json_object_get_member(pJsonObject, selfKey);
	if (node !=NULL) {
	

		if (isprimitive("Link")) {
			jsonToValue(&self, node, "Link", "Link");
		} else {
			
			Link* obj = static_cast<Link*> (&self);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *_classKey = "_class";
	node = json_object_get_member(pJsonObject, _classKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_class, node, "std::string", "");
		} else {
			
		}
	}
}

GithubRespositoryContainerlinks::GithubRespositoryContainerlinks(char* json)
{
	this->fromJson(json);
}

char*
GithubRespositoryContainerlinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Link")) {
		Link obj = getSelf();
		node = converttoJson(&obj, "Link", "");
	}
	else {
		
		Link obj = static_cast<Link> (getSelf());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *selfKey = "self";
	json_object_set_member(pJsonObject, selfKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getClass();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_classKey = "_class";
	json_object_set_member(pJsonObject, _classKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Link
GithubRespositoryContainerlinks::getSelf()
{
	return self;
}

void
GithubRespositoryContainerlinks::setSelf(Link  self)
{
	this->self = self;
}

std::string
GithubRespositoryContainerlinks::getClass()
{
	return _class;
}

void
GithubRespositoryContainerlinks::setClass(std::string  _class)
{
	this->_class = _class;
}


