part of openapi.api;




class BaseRemoteAccessApi {
  final ApiClient apiClient;

  BaseRemoteAccessApi([ApiClient? apiClient]) : apiClient = apiClient ?? defaultApiClient;

  /// 
  ///
  /// Retrieve CSRF protection token
  Future<DefaultCrumbIssuer> getCrumb() async {
    Object? postBody = null;

    // verify required params are set

    // create path and map variables
    String path = "/crumbIssuer/api/json".replaceAll("{format}","json");

    // query params
    List<QueryParam> queryParams = [];
    Map<String, String> headerParams = {};
    Map<String, String> formParams = {};

    List<String> contentTypes = [];

    String contentType = contentTypes.length > 0 ? contentTypes[0] : "application/json";
    List<String> authNames = ["jenkins_auth"];

    if(contentType.startsWith("multipart/form-data")) {
      bool hasFields = false;
    }
    else {
    }

    var response = await apiClient.invokeAPI(path,
                                             'GET',
                                             queryParams,
                                             postBody!,
                                             headerParams,
                                             formParams,
                                             contentType,
                                             authNames);

    if(response.statusCode >= 400) {
      throw new ApiException(response.statusCode, response.body);
    } else if(response.body != null) {
      return apiClient.deserialize(response.body, 'DefaultCrumbIssuer') as DefaultCrumbIssuer;
    } else {
      return null!;
    }
  }
}
