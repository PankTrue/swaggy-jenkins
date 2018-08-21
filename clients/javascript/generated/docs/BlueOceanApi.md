# SwaggyJenkins.BlueOceanApi

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**deletePipelineQueueItem**](BlueOceanApi.md#deletePipelineQueueItem) | **DELETE** /blue/rest/organizations/{organization}/pipelines/{pipeline}/queue/{queue} | 
[**getAuthenticatedUser**](BlueOceanApi.md#getAuthenticatedUser) | **GET** /blue/rest/organizations/{organization}/user/ | 
[**getClasses**](BlueOceanApi.md#getClasses) | **GET** /blue/rest/classes/{class} | 
[**getJsonWebKey**](BlueOceanApi.md#getJsonWebKey) | **GET** /jwt-auth/jwks/{key} | 
[**getJsonWebToken**](BlueOceanApi.md#getJsonWebToken) | **GET** /jwt-auth/token | 
[**getOrganisation**](BlueOceanApi.md#getOrganisation) | **GET** /blue/rest/organizations/{organization} | 
[**getOrganisations**](BlueOceanApi.md#getOrganisations) | **GET** /blue/rest/organizations/ | 
[**getPipeline**](BlueOceanApi.md#getPipeline) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline} | 
[**getPipelineActivities**](BlueOceanApi.md#getPipelineActivities) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/activities | 
[**getPipelineBranch**](BlueOceanApi.md#getPipelineBranch) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/ | 
[**getPipelineBranchRun**](BlueOceanApi.md#getPipelineBranchRun) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches/{branch}/runs/{run} | 
[**getPipelineBranches**](BlueOceanApi.md#getPipelineBranches) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/branches | 
[**getPipelineFolder**](BlueOceanApi.md#getPipelineFolder) | **GET** /blue/rest/organizations/{organization}/pipelines/{folder}/ | 
[**getPipelineFolderPipeline**](BlueOceanApi.md#getPipelineFolderPipeline) | **GET** /blue/rest/organizations/{organization}/pipelines/{folder}/pipelines/{pipeline} | 
[**getPipelineQueue**](BlueOceanApi.md#getPipelineQueue) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/queue | 
[**getPipelineRun**](BlueOceanApi.md#getPipelineRun) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run} | 
[**getPipelineRunLog**](BlueOceanApi.md#getPipelineRunLog) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/log | 
[**getPipelineRunNode**](BlueOceanApi.md#getPipelineRunNode) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node} | 
[**getPipelineRunNodeStep**](BlueOceanApi.md#getPipelineRunNodeStep) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step} | 
[**getPipelineRunNodeStepLog**](BlueOceanApi.md#getPipelineRunNodeStepLog) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps/{step}/log | 
[**getPipelineRunNodeSteps**](BlueOceanApi.md#getPipelineRunNodeSteps) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes/{node}/steps | 
[**getPipelineRunNodes**](BlueOceanApi.md#getPipelineRunNodes) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/nodes | 
[**getPipelineRuns**](BlueOceanApi.md#getPipelineRuns) | **GET** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs | 
[**getPipelines**](BlueOceanApi.md#getPipelines) | **GET** /blue/rest/organizations/{organization}/pipelines/ | 
[**getSCM**](BlueOceanApi.md#getSCM) | **GET** /blue/rest/organizations/{organization}/scm/{scm} | 
[**getSCMOrganisationRepositories**](BlueOceanApi.md#getSCMOrganisationRepositories) | **GET** /blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories | 
[**getSCMOrganisationRepository**](BlueOceanApi.md#getSCMOrganisationRepository) | **GET** /blue/rest/organizations/{organization}/scm/{scm}/organizations/{scmOrganisation}/repositories/{repository} | 
[**getSCMOrganisations**](BlueOceanApi.md#getSCMOrganisations) | **GET** /blue/rest/organizations/{organization}/scm/{scm}/organizations | 
[**getUser**](BlueOceanApi.md#getUser) | **GET** /blue/rest/organizations/{organization}/users/{user} | 
[**getUserFavorites**](BlueOceanApi.md#getUserFavorites) | **GET** /blue/rest/users/{user}/favorites | 
[**getUsers**](BlueOceanApi.md#getUsers) | **GET** /blue/rest/organizations/{organization}/users/ | 
[**postPipelineRun**](BlueOceanApi.md#postPipelineRun) | **POST** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/replay | 
[**postPipelineRuns**](BlueOceanApi.md#postPipelineRuns) | **POST** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs | 
[**putPipelineFavorite**](BlueOceanApi.md#putPipelineFavorite) | **PUT** /blue/rest/organizations/{organization}/pipelines/{pipeline}/favorite | 
[**putPipelineRun**](BlueOceanApi.md#putPipelineRun) | **PUT** /blue/rest/organizations/{organization}/pipelines/{pipeline}/runs/{run}/stop | 
[**search**](BlueOceanApi.md#search) | **GET** /blue/rest/search/ | 
[**searchClasses**](BlueOceanApi.md#searchClasses) | **GET** /blue/rest/classes/ | 


<a name="deletePipelineQueueItem"></a>
# **deletePipelineQueueItem**
> deletePipelineQueueItem(organization, pipeline, queue)



Delete queue item from an organization pipeline queue

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var queue = "queue_example"; // String | Name of the queue item
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully.');
  }
};
apiInstance.deletePipelineQueueItem(organization, pipeline, queue, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **queue** | **String**| Name of the queue item | 

### Return type

null (empty response body)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

<a name="getAuthenticatedUser"></a>
# **getAuthenticatedUser**
> User getAuthenticatedUser(organization)



Retrieve authenticated user details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getAuthenticatedUser(organization, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 

### Return type

[**User**](User.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getClasses"></a>
# **getClasses**
> String getClasses(_class)



Get a list of class names supported by a given class

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var _class = "_class_example"; // String | Name of the class
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getClasses(_class, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **_class** | **String**| Name of the class | 

### Return type

**String**

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getJsonWebKey"></a>
# **getJsonWebKey**
> String getJsonWebKey(key)



Retrieve JSON Web Key

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var key = 56; // Number | Key ID received as part of JWT header field kid
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getJsonWebKey(key, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **key** | **Number**| Key ID received as part of JWT header field kid | 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getJsonWebToken"></a>
# **getJsonWebToken**
> String getJsonWebToken(opts)



Retrieve JSON Web Token

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var opts = {
  'expiryTimeInMins': 56, // Number | Token expiry time in minutes, default: 30 minutes
  'maxExpiryTimeInMins': 56 // Number | Maximum token expiry time in minutes, default: 480 minutes
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getJsonWebToken(opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **expiryTimeInMins** | **Number**| Token expiry time in minutes, default: 30 minutes | [optional] 
 **maxExpiryTimeInMins** | **Number**| Maximum token expiry time in minutes, default: 480 minutes | [optional] 

### Return type

**String**

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrganisation"></a>
# **getOrganisation**
> Organisation getOrganisation(organization)



Retrieve organization details

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getOrganisation(organization, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 

### Return type

[**Organisation**](Organisation.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getOrganisations"></a>
# **getOrganisations**
> Organisations getOrganisations()



Retrieve all organizations details

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getOrganisations(callback);
```

### Parameters
This endpoint does not need any parameter.

### Return type

[**Organisations**](Organisations.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipeline"></a>
# **getPipeline**
> Pipeline getPipeline(organization, pipeline)



Retrieve pipeline details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipeline(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**Pipeline**](Pipeline.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineActivities"></a>
# **getPipelineActivities**
> PipelineActivities getPipelineActivities(organization, pipeline)



Retrieve all activities details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineActivities(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**PipelineActivities**](PipelineActivities.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineBranch"></a>
# **getPipelineBranch**
> BranchImpl getPipelineBranch(organization, pipeline, branch)



Retrieve branch details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var branch = "branch_example"; // String | Name of the branch
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineBranch(organization, pipeline, branch, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **branch** | **String**| Name of the branch | 

### Return type

[**BranchImpl**](BranchImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineBranchRun"></a>
# **getPipelineBranchRun**
> PipelineRun getPipelineBranchRun(organization, pipeline, branch, run)



Retrieve branch run details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var branch = "branch_example"; // String | Name of the branch
var run = "run_example"; // String | Name of the run
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineBranchRun(organization, pipeline, branch, run, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **branch** | **String**| Name of the branch | 
 **run** | **String**| Name of the run | 

### Return type

[**PipelineRun**](PipelineRun.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineBranches"></a>
# **getPipelineBranches**
> MultibranchPipeline getPipelineBranches(organization, pipeline)



Retrieve all branches details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineBranches(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**MultibranchPipeline**](MultibranchPipeline.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineFolder"></a>
# **getPipelineFolder**
> PipelineFolderImpl getPipelineFolder(organization, folder)



Retrieve pipeline folder for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var folder = "folder_example"; // String | Name of the folder
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineFolder(organization, folder, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **folder** | **String**| Name of the folder | 

### Return type

[**PipelineFolderImpl**](PipelineFolderImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineFolderPipeline"></a>
# **getPipelineFolderPipeline**
> PipelineImpl getPipelineFolderPipeline(organization, pipeline, folder)



Retrieve pipeline details for an organization folder

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var folder = "folder_example"; // String | Name of the folder
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineFolderPipeline(organization, pipeline, folder, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **folder** | **String**| Name of the folder | 

### Return type

[**PipelineImpl**](PipelineImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineQueue"></a>
# **getPipelineQueue**
> PipelineQueue getPipelineQueue(organization, pipeline)



Retrieve queue details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineQueue(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**PipelineQueue**](PipelineQueue.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRun"></a>
# **getPipelineRun**
> PipelineRun getPipelineRun(organization, pipeline, run)



Retrieve run details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRun(organization, pipeline, run, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 

### Return type

[**PipelineRun**](PipelineRun.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunLog"></a>
# **getPipelineRunLog**
> String getPipelineRunLog(organization, pipeline, run, opts)



Get log for a pipeline run

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var opts = {
  'start': 56, // Number | Start position of the log
  'download': true // Boolean | Set to true in order to download the file, otherwise it's passed as a response body
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunLog(organization, pipeline, run, opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **start** | **Number**| Start position of the log | [optional] 
 **download** | **Boolean**| Set to true in order to download the file, otherwise it&#39;s passed as a response body | [optional] 

### Return type

**String**

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunNode"></a>
# **getPipelineRunNode**
> PipelineRunNode getPipelineRunNode(organization, pipeline, run, node)



Retrieve run node details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var node = "node_example"; // String | Name of the node
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunNode(organization, pipeline, run, node, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **node** | **String**| Name of the node | 

### Return type

[**PipelineRunNode**](PipelineRunNode.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunNodeStep"></a>
# **getPipelineRunNodeStep**
> PipelineStepImpl getPipelineRunNodeStep(organization, pipeline, run, node, step)



Retrieve run node details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var node = "node_example"; // String | Name of the node
var step = "step_example"; // String | Name of the step
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunNodeStep(organization, pipeline, run, node, step, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **node** | **String**| Name of the node | 
 **step** | **String**| Name of the step | 

### Return type

[**PipelineStepImpl**](PipelineStepImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunNodeStepLog"></a>
# **getPipelineRunNodeStepLog**
> String getPipelineRunNodeStepLog(organization, pipeline, run, node, step)



Get log for a pipeline run node step

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var node = "node_example"; // String | Name of the node
var step = "step_example"; // String | Name of the step
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunNodeStepLog(organization, pipeline, run, node, step, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **node** | **String**| Name of the node | 
 **step** | **String**| Name of the step | 

### Return type

**String**

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunNodeSteps"></a>
# **getPipelineRunNodeSteps**
> PipelineRunNodeSteps getPipelineRunNodeSteps(organization, pipeline, run, node)



Retrieve run node steps details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var node = "node_example"; // String | Name of the node
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunNodeSteps(organization, pipeline, run, node, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **node** | **String**| Name of the node | 

### Return type

[**PipelineRunNodeSteps**](PipelineRunNodeSteps.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRunNodes"></a>
# **getPipelineRunNodes**
> PipelineRunNodes getPipelineRunNodes(organization, pipeline, run)



Retrieve run nodes details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRunNodes(organization, pipeline, run, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 

### Return type

[**PipelineRunNodes**](PipelineRunNodes.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelineRuns"></a>
# **getPipelineRuns**
> PipelineRuns getPipelineRuns(organization, pipeline)



Retrieve all runs details for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelineRuns(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**PipelineRuns**](PipelineRuns.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getPipelines"></a>
# **getPipelines**
> Pipelines getPipelines(organization)



Retrieve all pipelines details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getPipelines(organization, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 

### Return type

[**Pipelines**](Pipelines.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSCM"></a>
# **getSCM**
> GithubScm getSCM(organization, scm)



Retrieve SCM details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var scm = "scm_example"; // String | Name of SCM
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getSCM(organization, scm, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **scm** | **String**| Name of SCM | 

### Return type

[**GithubScm**](GithubScm.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSCMOrganisationRepositories"></a>
# **getSCMOrganisationRepositories**
> ScmOrganisations getSCMOrganisationRepositories(organization, scm, scmOrganisation, opts)



Retrieve SCM organization repositories details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var scm = "scm_example"; // String | Name of SCM
var scmOrganisation = "scmOrganisation_example"; // String | Name of the SCM organization
var opts = {
  'credentialId': "credentialId_example", // String | Credential ID
  'pageSize': 56, // Number | Number of items in a page
  'pageNumber': 56 // Number | Page number
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getSCMOrganisationRepositories(organization, scm, scmOrganisation, opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **scm** | **String**| Name of SCM | 
 **scmOrganisation** | **String**| Name of the SCM organization | 
 **credentialId** | **String**| Credential ID | [optional] 
 **pageSize** | **Number**| Number of items in a page | [optional] 
 **pageNumber** | **Number**| Page number | [optional] 

### Return type

[**ScmOrganisations**](ScmOrganisations.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSCMOrganisationRepository"></a>
# **getSCMOrganisationRepository**
> ScmOrganisations getSCMOrganisationRepository(organization, scm, scmOrganisation, repository, opts)



Retrieve SCM organization repository details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var scm = "scm_example"; // String | Name of SCM
var scmOrganisation = "scmOrganisation_example"; // String | Name of the SCM organization
var repository = "repository_example"; // String | Name of the SCM repository
var opts = {
  'credentialId': "credentialId_example" // String | Credential ID
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getSCMOrganisationRepository(organization, scm, scmOrganisation, repository, opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **scm** | **String**| Name of SCM | 
 **scmOrganisation** | **String**| Name of the SCM organization | 
 **repository** | **String**| Name of the SCM repository | 
 **credentialId** | **String**| Credential ID | [optional] 

### Return type

[**ScmOrganisations**](ScmOrganisations.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getSCMOrganisations"></a>
# **getSCMOrganisations**
> ScmOrganisations getSCMOrganisations(organization, scm, opts)



Retrieve SCM organizations details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var scm = "scm_example"; // String | Name of SCM
var opts = {
  'credentialId': "credentialId_example" // String | Credential ID
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getSCMOrganisations(organization, scm, opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **scm** | **String**| Name of SCM | 
 **credentialId** | **String**| Credential ID | [optional] 

### Return type

[**ScmOrganisations**](ScmOrganisations.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getUser"></a>
# **getUser**
> User getUser(organization, user)



Retrieve user details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var user = "user_example"; // String | Name of the user
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getUser(organization, user, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **user** | **String**| Name of the user | 

### Return type

[**User**](User.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getUserFavorites"></a>
# **getUserFavorites**
> UserFavorites getUserFavorites(user)



Retrieve user favorites details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var user = "user_example"; // String | Name of the user
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getUserFavorites(user, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **user** | **String**| Name of the user | 

### Return type

[**UserFavorites**](UserFavorites.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="getUsers"></a>
# **getUsers**
> User getUsers(organization)



Retrieve users details for an organization

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.getUsers(organization, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 

### Return type

[**User**](User.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postPipelineRun"></a>
# **postPipelineRun**
> QueueItemImpl postPipelineRun(organization, pipeline, run)



Replay an organization pipeline run

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.postPipelineRun(organization, pipeline, run, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 

### Return type

[**QueueItemImpl**](QueueItemImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="postPipelineRuns"></a>
# **postPipelineRuns**
> QueueItemImpl postPipelineRuns(organization, pipeline)



Start a build for an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.postPipelineRuns(organization, pipeline, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 

### Return type

[**QueueItemImpl**](QueueItemImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="putPipelineFavorite"></a>
# **putPipelineFavorite**
> FavoriteImpl putPipelineFavorite(organization, pipeline, body)



Favorite/unfavorite a pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var body = new SwaggyJenkins.Body(); // Body | Set JSON string body to {"favorite": true} to favorite, set value to false to unfavorite
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.putPipelineFavorite(organization, pipeline, body, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **body** | [**Body**](Body.md)| Set JSON string body to {&quot;favorite&quot;: true} to favorite, set value to false to unfavorite | 

### Return type

[**FavoriteImpl**](FavoriteImpl.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

<a name="putPipelineRun"></a>
# **putPipelineRun**
> PipelineRun putPipelineRun(organization, pipeline, run, opts)



Stop a build of an organization pipeline

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var organization = "organization_example"; // String | Name of the organization
var pipeline = "pipeline_example"; // String | Name of the pipeline
var run = "run_example"; // String | Name of the run
var opts = {
  'blocking': "blocking_example", // String | Set to true to make blocking stop, default: false
  'timeOutInSecs': 56 // Number | Timeout in seconds, default: 10 seconds
};
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.putPipelineRun(organization, pipeline, run, opts, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **organization** | **String**| Name of the organization | 
 **pipeline** | **String**| Name of the pipeline | 
 **run** | **String**| Name of the run | 
 **blocking** | **String**| Set to true to make blocking stop, default: false | [optional] 
 **timeOutInSecs** | **Number**| Timeout in seconds, default: 10 seconds | [optional] 

### Return type

[**PipelineRun**](PipelineRun.md)

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="search"></a>
# **search**
> String search(q)



Search for any resource details

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var q = "q_example"; // String | Query string
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.search(q, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **String**| Query string | 

### Return type

**String**

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

<a name="searchClasses"></a>
# **searchClasses**
> String searchClasses(q)



Get classes details

### Example
```javascript
var SwaggyJenkins = require('swaggy-jenkins');
var defaultClient = SwaggyJenkins.ApiClient.instance;

// Configure HTTP basic authorization: jenkins_auth
var jenkins_auth = defaultClient.authentications['jenkins_auth'];
jenkins_auth.username = 'YOUR USERNAME';
jenkins_auth.password = 'YOUR PASSWORD';

var apiInstance = new SwaggyJenkins.BlueOceanApi();
var q = "q_example"; // String | Query string containing an array of class names
var callback = function(error, data, response) {
  if (error) {
    console.error(error);
  } else {
    console.log('API called successfully. Returned data: ' + data);
  }
};
apiInstance.searchClasses(q, callback);
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **q** | **String**| Query string containing an array of class names | 

### Return type

**String**

### Authorization

[jenkins_auth](../README.md#jenkins_auth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

