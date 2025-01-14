part of openapi.api;

class OAuth implements Authentication {
  String accessToken;

  OAuth({required this.accessToken}) {
  }

  @override
  void applyToParams(List<QueryParam> queryParams, Map<String, String> headerParams) {
    if (accessToken != null) {
      headerParams["Authorization"] = "Bearer " + accessToken;
    }
  }

  void setAccessToken(String accessToken) {
    this.accessToken = accessToken;
  }
}
