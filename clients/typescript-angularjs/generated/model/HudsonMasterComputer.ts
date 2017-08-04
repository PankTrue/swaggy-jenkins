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

import * as models from './models';

export interface HudsonMasterComputer {
    "class"?: string;
    "displayName"?: string;
    "executors"?: Array<models.HudsonMasterComputerexecutors>;
    "icon"?: string;
    "iconClassName"?: string;
    "idle"?: boolean;
    "jnlpAgent"?: boolean;
    "launchSupported"?: boolean;
    "loadStatistics"?: models.Label1;
    "manualLaunchAllowed"?: boolean;
    "monitorData"?: models.HudsonMasterComputermonitorData;
    "numExecutors"?: number;
    "offline"?: boolean;
    "offlineCause"?: string;
    "offlineCauseReason"?: string;
    "temporarilyOffline"?: boolean;
}
