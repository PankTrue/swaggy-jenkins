
import 'package:openapi/api.dart';

void main()
{
  var api_client = new ApiClient("http://jenkins.corp.dominigames.com", "victorbutsaev", "pank0211");

  var client = new BaseRemoteAccessApi(api_client);
}