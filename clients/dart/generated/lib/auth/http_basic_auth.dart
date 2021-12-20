part of openapi.api;

class HttpBasicAuth implements Authentication {

  String? _username;
  String? _password;

  HttpBasicAuth(String username, String password)
  {
    _username = username;
    _password = password;
  }

  @override
  void applyToParams(List<QueryParam> queryParams, Map<String, String> headerParams) {
    String str = (_username == null ? "" : _username) !+ ":" + (_password == null ? "" : _password!);
    headerParams["Authorization"] = "Basic " + base64.encode(utf8.encode(str));
  }

}