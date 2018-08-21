import * as api from './api/api';
import * as angular from 'angular';

const apiModule = angular.module('api', [])
.service('BlueOceanApi', api.BlueOceanApi)
.service('RemoteAccessApi', api.RemoteAccessApi)

export default apiModule;
