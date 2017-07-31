/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.2.3-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/Body', 'model/GetClassesByClass', 'model/GetMultibranchPipeline', 'model/GetOrganisations', 'model/GetPipelineActivities', 'model/GetPipelineBranches', 'model/GetPipelineBranchesitem', 'model/GetPipelineBranchesitemLatestRun', 'model/GetPipelineBranchesitemPullRequest', 'model/GetPipelineBranchesitemPullRequestLinks', 'model/GetPipelineQueue', 'model/GetPipelineRunNodeSteps', 'model/GetPipelineRunNodes', 'model/GetPipelineRunSteps', 'model/GetPipelineRuns', 'model/GetPipelines', 'model/GetScmOrganisations', 'model/GetUserFavorites', 'model/GetUsers', 'model/HudsonmodelAllView', 'model/HudsonmodelCauseAction', 'model/HudsonmodelCauseUserIdCause', 'model/HudsonmodelComputerSet', 'model/HudsonmodelFreeStyleBuild', 'model/HudsonmodelFreeStyleProject', 'model/HudsonmodelFreeStyleProjectactions', 'model/HudsonmodelFreeStyleProjecthealthReport', 'model/HudsonmodelHudson', 'model/HudsonmodelHudsonMasterComputer', 'model/HudsonmodelHudsonMasterComputerMonitorData', 'model/HudsonmodelHudsonMasterComputerexecutors', 'model/HudsonmodelHudsonassignedLabels', 'model/HudsonmodelLabel1', 'model/HudsonmodelListView', 'model/HudsonmodelQueue', 'model/HudsonmodelQueueBlockedItem', 'model/HudsonmodelQueueLeftItem', 'model/HudsonmodelStringParameterDefinition', 'model/HudsonmodelStringParameterValue', 'model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace', 'model/HudsonnodeMonitorsResponseTimeMonitorData', 'model/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2', 'model/HudsonscmEmptyChangeLogSet', 'model/HudsonscmNullSCM', 'model/HudsonsecuritycsrfDefaultCrumbIssuer', 'model/HudsonutilClockDifference', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubFile', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepository', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubScm', 'model/IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks', 'model/IojenkinsblueoceanresthalLink', 'model/IojenkinsblueoceanrestimplpipelineBranchImpl', 'model/IojenkinsblueoceanrestimplpipelineBranchImplPermissions', 'model/IojenkinsblueoceanrestimplpipelineInputStepImpl', 'model/IojenkinsblueoceanrestimplpipelineInputStepImplLinks', 'model/IojenkinsblueoceanrestimplpipelinePipelineStepImpl', 'model/IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks', 'model/IojenkinsblueoceanrestmodelGenericResource', 'model/IojenkinsblueoceanserviceembeddedrestBranchImpl', 'model/IojenkinsblueoceanserviceembeddedrestBranchImplLinks', 'model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1', 'model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links', 'model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map', 'model/IojenkinsblueoceanserviceembeddedrestExtensionClassImpl', 'model/IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks', 'model/IojenkinsblueoceanserviceembeddedrestFavoriteImpl', 'model/IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks', 'model/IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl', 'model/IojenkinsblueoceanserviceembeddedrestPipelineImpl', 'model/IojenkinsblueoceanserviceembeddedrestPipelineImplLinks', 'model/IojenkinsblueoceanserviceembeddedrestPipelineRunImpl', 'model/IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks', 'model/IojenkinsblueoceanserviceembeddedrestQueueItemImpl', 'model/JenkinsmodelUnlabeledLoadStatistics', 'model/SwaggyjenkinsOrganisation', 'model/SwaggyjenkinsPipeline', 'model/SwaggyjenkinsPipelineActivity', 'model/SwaggyjenkinsPipelineActivityartifacts', 'model/SwaggyjenkinsPipelineLatestRun', 'model/SwaggyjenkinsPipelineLatestRunartifacts', 'model/SwaggyjenkinsPipelineRun', 'model/SwaggyjenkinsPipelineRunNode', 'model/SwaggyjenkinsPipelineRunNodeedges', 'model/SwaggyjenkinsPipelineRunartifacts', 'model/SwaggyjenkinsUser', 'api/BlueOceanApi', 'api/RemoteAccessApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/Body'), require('./model/GetClassesByClass'), require('./model/GetMultibranchPipeline'), require('./model/GetOrganisations'), require('./model/GetPipelineActivities'), require('./model/GetPipelineBranches'), require('./model/GetPipelineBranchesitem'), require('./model/GetPipelineBranchesitemLatestRun'), require('./model/GetPipelineBranchesitemPullRequest'), require('./model/GetPipelineBranchesitemPullRequestLinks'), require('./model/GetPipelineQueue'), require('./model/GetPipelineRunNodeSteps'), require('./model/GetPipelineRunNodes'), require('./model/GetPipelineRunSteps'), require('./model/GetPipelineRuns'), require('./model/GetPipelines'), require('./model/GetScmOrganisations'), require('./model/GetUserFavorites'), require('./model/GetUsers'), require('./model/HudsonmodelAllView'), require('./model/HudsonmodelCauseAction'), require('./model/HudsonmodelCauseUserIdCause'), require('./model/HudsonmodelComputerSet'), require('./model/HudsonmodelFreeStyleBuild'), require('./model/HudsonmodelFreeStyleProject'), require('./model/HudsonmodelFreeStyleProjectactions'), require('./model/HudsonmodelFreeStyleProjecthealthReport'), require('./model/HudsonmodelHudson'), require('./model/HudsonmodelHudsonMasterComputer'), require('./model/HudsonmodelHudsonMasterComputerMonitorData'), require('./model/HudsonmodelHudsonMasterComputerexecutors'), require('./model/HudsonmodelHudsonassignedLabels'), require('./model/HudsonmodelLabel1'), require('./model/HudsonmodelListView'), require('./model/HudsonmodelQueue'), require('./model/HudsonmodelQueueBlockedItem'), require('./model/HudsonmodelQueueLeftItem'), require('./model/HudsonmodelStringParameterDefinition'), require('./model/HudsonmodelStringParameterValue'), require('./model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace'), require('./model/HudsonnodeMonitorsResponseTimeMonitorData'), require('./model/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2'), require('./model/HudsonscmEmptyChangeLogSet'), require('./model/HudsonscmNullSCM'), require('./model/HudsonsecuritycsrfDefaultCrumbIssuer'), require('./model/HudsonutilClockDifference'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubFile'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepository'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubScm'), require('./model/IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks'), require('./model/IojenkinsblueoceanresthalLink'), require('./model/IojenkinsblueoceanrestimplpipelineBranchImpl'), require('./model/IojenkinsblueoceanrestimplpipelineBranchImplPermissions'), require('./model/IojenkinsblueoceanrestimplpipelineInputStepImpl'), require('./model/IojenkinsblueoceanrestimplpipelineInputStepImplLinks'), require('./model/IojenkinsblueoceanrestimplpipelinePipelineStepImpl'), require('./model/IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks'), require('./model/IojenkinsblueoceanrestmodelGenericResource'), require('./model/IojenkinsblueoceanserviceembeddedrestBranchImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestBranchImplLinks'), require('./model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1'), require('./model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links'), require('./model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map'), require('./model/IojenkinsblueoceanserviceembeddedrestExtensionClassImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks'), require('./model/IojenkinsblueoceanserviceembeddedrestFavoriteImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks'), require('./model/IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestPipelineImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestPipelineImplLinks'), require('./model/IojenkinsblueoceanserviceembeddedrestPipelineRunImpl'), require('./model/IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks'), require('./model/IojenkinsblueoceanserviceembeddedrestQueueItemImpl'), require('./model/JenkinsmodelUnlabeledLoadStatistics'), require('./model/SwaggyjenkinsOrganisation'), require('./model/SwaggyjenkinsPipeline'), require('./model/SwaggyjenkinsPipelineActivity'), require('./model/SwaggyjenkinsPipelineActivityartifacts'), require('./model/SwaggyjenkinsPipelineLatestRun'), require('./model/SwaggyjenkinsPipelineLatestRunartifacts'), require('./model/SwaggyjenkinsPipelineRun'), require('./model/SwaggyjenkinsPipelineRunNode'), require('./model/SwaggyjenkinsPipelineRunNodeedges'), require('./model/SwaggyjenkinsPipelineRunartifacts'), require('./model/SwaggyjenkinsUser'), require('./api/BlueOceanApi'), require('./api/RemoteAccessApi'));
  }
}(function(ApiClient, Body, GetClassesByClass, GetMultibranchPipeline, GetOrganisations, GetPipelineActivities, GetPipelineBranches, GetPipelineBranchesitem, GetPipelineBranchesitemLatestRun, GetPipelineBranchesitemPullRequest, GetPipelineBranchesitemPullRequestLinks, GetPipelineQueue, GetPipelineRunNodeSteps, GetPipelineRunNodes, GetPipelineRunSteps, GetPipelineRuns, GetPipelines, GetScmOrganisations, GetUserFavorites, GetUsers, HudsonmodelAllView, HudsonmodelCauseAction, HudsonmodelCauseUserIdCause, HudsonmodelComputerSet, HudsonmodelFreeStyleBuild, HudsonmodelFreeStyleProject, HudsonmodelFreeStyleProjectactions, HudsonmodelFreeStyleProjecthealthReport, HudsonmodelHudson, HudsonmodelHudsonMasterComputer, HudsonmodelHudsonMasterComputerMonitorData, HudsonmodelHudsonMasterComputerexecutors, HudsonmodelHudsonassignedLabels, HudsonmodelLabel1, HudsonmodelListView, HudsonmodelQueue, HudsonmodelQueueBlockedItem, HudsonmodelQueueLeftItem, HudsonmodelStringParameterDefinition, HudsonmodelStringParameterValue, HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace, HudsonnodeMonitorsResponseTimeMonitorData, HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2, HudsonscmEmptyChangeLogSet, HudsonscmNullSCM, HudsonsecuritycsrfDefaultCrumbIssuer, HudsonutilClockDifference, IojenkinsblueoceanblueoceanGithubPipelineGithubContent, IojenkinsblueoceanblueoceanGithubPipelineGithubFile, IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization, IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks, IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories, IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks, IojenkinsblueoceanblueoceanGithubPipelineGithubRepository, IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks, IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions, IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer, IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks, IojenkinsblueoceanblueoceanGithubPipelineGithubScm, IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks, IojenkinsblueoceanresthalLink, IojenkinsblueoceanrestimplpipelineBranchImpl, IojenkinsblueoceanrestimplpipelineBranchImplPermissions, IojenkinsblueoceanrestimplpipelineInputStepImpl, IojenkinsblueoceanrestimplpipelineInputStepImplLinks, IojenkinsblueoceanrestimplpipelinePipelineStepImpl, IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks, IojenkinsblueoceanrestmodelGenericResource, IojenkinsblueoceanserviceembeddedrestBranchImpl, IojenkinsblueoceanserviceembeddedrestBranchImplLinks, IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1, IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links, IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map, IojenkinsblueoceanserviceembeddedrestExtensionClassImpl, IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks, IojenkinsblueoceanserviceembeddedrestFavoriteImpl, IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks, IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl, IojenkinsblueoceanserviceembeddedrestPipelineImpl, IojenkinsblueoceanserviceembeddedrestPipelineImplLinks, IojenkinsblueoceanserviceembeddedrestPipelineRunImpl, IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks, IojenkinsblueoceanserviceembeddedrestQueueItemImpl, JenkinsmodelUnlabeledLoadStatistics, SwaggyjenkinsOrganisation, SwaggyjenkinsPipeline, SwaggyjenkinsPipelineActivity, SwaggyjenkinsPipelineActivityartifacts, SwaggyjenkinsPipelineLatestRun, SwaggyjenkinsPipelineLatestRunartifacts, SwaggyjenkinsPipelineRun, SwaggyjenkinsPipelineRunNode, SwaggyjenkinsPipelineRunNodeedges, SwaggyjenkinsPipelineRunartifacts, SwaggyjenkinsUser, BlueOceanApi, RemoteAccessApi) {
  'use strict';

  /**
   * Jenkins_API_clients_generated_from_Swagger__Open_API_specification.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var SwaggyJenkins = require('index'); // See note below*.
   * var xxxSvc = new SwaggyJenkins.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new SwaggyJenkins.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new SwaggyJenkins.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new SwaggyJenkins.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 0.0.2
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The Body model constructor.
     * @property {module:model/Body}
     */
    Body: Body,
    /**
     * The GetClassesByClass model constructor.
     * @property {module:model/GetClassesByClass}
     */
    GetClassesByClass: GetClassesByClass,
    /**
     * The GetMultibranchPipeline model constructor.
     * @property {module:model/GetMultibranchPipeline}
     */
    GetMultibranchPipeline: GetMultibranchPipeline,
    /**
     * The GetOrganisations model constructor.
     * @property {module:model/GetOrganisations}
     */
    GetOrganisations: GetOrganisations,
    /**
     * The GetPipelineActivities model constructor.
     * @property {module:model/GetPipelineActivities}
     */
    GetPipelineActivities: GetPipelineActivities,
    /**
     * The GetPipelineBranches model constructor.
     * @property {module:model/GetPipelineBranches}
     */
    GetPipelineBranches: GetPipelineBranches,
    /**
     * The GetPipelineBranchesitem model constructor.
     * @property {module:model/GetPipelineBranchesitem}
     */
    GetPipelineBranchesitem: GetPipelineBranchesitem,
    /**
     * The GetPipelineBranchesitemLatestRun model constructor.
     * @property {module:model/GetPipelineBranchesitemLatestRun}
     */
    GetPipelineBranchesitemLatestRun: GetPipelineBranchesitemLatestRun,
    /**
     * The GetPipelineBranchesitemPullRequest model constructor.
     * @property {module:model/GetPipelineBranchesitemPullRequest}
     */
    GetPipelineBranchesitemPullRequest: GetPipelineBranchesitemPullRequest,
    /**
     * The GetPipelineBranchesitemPullRequestLinks model constructor.
     * @property {module:model/GetPipelineBranchesitemPullRequestLinks}
     */
    GetPipelineBranchesitemPullRequestLinks: GetPipelineBranchesitemPullRequestLinks,
    /**
     * The GetPipelineQueue model constructor.
     * @property {module:model/GetPipelineQueue}
     */
    GetPipelineQueue: GetPipelineQueue,
    /**
     * The GetPipelineRunNodeSteps model constructor.
     * @property {module:model/GetPipelineRunNodeSteps}
     */
    GetPipelineRunNodeSteps: GetPipelineRunNodeSteps,
    /**
     * The GetPipelineRunNodes model constructor.
     * @property {module:model/GetPipelineRunNodes}
     */
    GetPipelineRunNodes: GetPipelineRunNodes,
    /**
     * The GetPipelineRunSteps model constructor.
     * @property {module:model/GetPipelineRunSteps}
     */
    GetPipelineRunSteps: GetPipelineRunSteps,
    /**
     * The GetPipelineRuns model constructor.
     * @property {module:model/GetPipelineRuns}
     */
    GetPipelineRuns: GetPipelineRuns,
    /**
     * The GetPipelines model constructor.
     * @property {module:model/GetPipelines}
     */
    GetPipelines: GetPipelines,
    /**
     * The GetScmOrganisations model constructor.
     * @property {module:model/GetScmOrganisations}
     */
    GetScmOrganisations: GetScmOrganisations,
    /**
     * The GetUserFavorites model constructor.
     * @property {module:model/GetUserFavorites}
     */
    GetUserFavorites: GetUserFavorites,
    /**
     * The GetUsers model constructor.
     * @property {module:model/GetUsers}
     */
    GetUsers: GetUsers,
    /**
     * The HudsonmodelAllView model constructor.
     * @property {module:model/HudsonmodelAllView}
     */
    HudsonmodelAllView: HudsonmodelAllView,
    /**
     * The HudsonmodelCauseAction model constructor.
     * @property {module:model/HudsonmodelCauseAction}
     */
    HudsonmodelCauseAction: HudsonmodelCauseAction,
    /**
     * The HudsonmodelCauseUserIdCause model constructor.
     * @property {module:model/HudsonmodelCauseUserIdCause}
     */
    HudsonmodelCauseUserIdCause: HudsonmodelCauseUserIdCause,
    /**
     * The HudsonmodelComputerSet model constructor.
     * @property {module:model/HudsonmodelComputerSet}
     */
    HudsonmodelComputerSet: HudsonmodelComputerSet,
    /**
     * The HudsonmodelFreeStyleBuild model constructor.
     * @property {module:model/HudsonmodelFreeStyleBuild}
     */
    HudsonmodelFreeStyleBuild: HudsonmodelFreeStyleBuild,
    /**
     * The HudsonmodelFreeStyleProject model constructor.
     * @property {module:model/HudsonmodelFreeStyleProject}
     */
    HudsonmodelFreeStyleProject: HudsonmodelFreeStyleProject,
    /**
     * The HudsonmodelFreeStyleProjectactions model constructor.
     * @property {module:model/HudsonmodelFreeStyleProjectactions}
     */
    HudsonmodelFreeStyleProjectactions: HudsonmodelFreeStyleProjectactions,
    /**
     * The HudsonmodelFreeStyleProjecthealthReport model constructor.
     * @property {module:model/HudsonmodelFreeStyleProjecthealthReport}
     */
    HudsonmodelFreeStyleProjecthealthReport: HudsonmodelFreeStyleProjecthealthReport,
    /**
     * The HudsonmodelHudson model constructor.
     * @property {module:model/HudsonmodelHudson}
     */
    HudsonmodelHudson: HudsonmodelHudson,
    /**
     * The HudsonmodelHudsonMasterComputer model constructor.
     * @property {module:model/HudsonmodelHudsonMasterComputer}
     */
    HudsonmodelHudsonMasterComputer: HudsonmodelHudsonMasterComputer,
    /**
     * The HudsonmodelHudsonMasterComputerMonitorData model constructor.
     * @property {module:model/HudsonmodelHudsonMasterComputerMonitorData}
     */
    HudsonmodelHudsonMasterComputerMonitorData: HudsonmodelHudsonMasterComputerMonitorData,
    /**
     * The HudsonmodelHudsonMasterComputerexecutors model constructor.
     * @property {module:model/HudsonmodelHudsonMasterComputerexecutors}
     */
    HudsonmodelHudsonMasterComputerexecutors: HudsonmodelHudsonMasterComputerexecutors,
    /**
     * The HudsonmodelHudsonassignedLabels model constructor.
     * @property {module:model/HudsonmodelHudsonassignedLabels}
     */
    HudsonmodelHudsonassignedLabels: HudsonmodelHudsonassignedLabels,
    /**
     * The HudsonmodelLabel1 model constructor.
     * @property {module:model/HudsonmodelLabel1}
     */
    HudsonmodelLabel1: HudsonmodelLabel1,
    /**
     * The HudsonmodelListView model constructor.
     * @property {module:model/HudsonmodelListView}
     */
    HudsonmodelListView: HudsonmodelListView,
    /**
     * The HudsonmodelQueue model constructor.
     * @property {module:model/HudsonmodelQueue}
     */
    HudsonmodelQueue: HudsonmodelQueue,
    /**
     * The HudsonmodelQueueBlockedItem model constructor.
     * @property {module:model/HudsonmodelQueueBlockedItem}
     */
    HudsonmodelQueueBlockedItem: HudsonmodelQueueBlockedItem,
    /**
     * The HudsonmodelQueueLeftItem model constructor.
     * @property {module:model/HudsonmodelQueueLeftItem}
     */
    HudsonmodelQueueLeftItem: HudsonmodelQueueLeftItem,
    /**
     * The HudsonmodelStringParameterDefinition model constructor.
     * @property {module:model/HudsonmodelStringParameterDefinition}
     */
    HudsonmodelStringParameterDefinition: HudsonmodelStringParameterDefinition,
    /**
     * The HudsonmodelStringParameterValue model constructor.
     * @property {module:model/HudsonmodelStringParameterValue}
     */
    HudsonmodelStringParameterValue: HudsonmodelStringParameterValue,
    /**
     * The HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace model constructor.
     * @property {module:model/HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace}
     */
    HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace: HudsonnodeMonitorsDiskSpaceMonitorDescriptorDiskSpace,
    /**
     * The HudsonnodeMonitorsResponseTimeMonitorData model constructor.
     * @property {module:model/HudsonnodeMonitorsResponseTimeMonitorData}
     */
    HudsonnodeMonitorsResponseTimeMonitorData: HudsonnodeMonitorsResponseTimeMonitorData,
    /**
     * The HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2 model constructor.
     * @property {module:model/HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2}
     */
    HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2: HudsonnodeMonitorsSwapSpaceMonitorMemoryUsage2,
    /**
     * The HudsonscmEmptyChangeLogSet model constructor.
     * @property {module:model/HudsonscmEmptyChangeLogSet}
     */
    HudsonscmEmptyChangeLogSet: HudsonscmEmptyChangeLogSet,
    /**
     * The HudsonscmNullSCM model constructor.
     * @property {module:model/HudsonscmNullSCM}
     */
    HudsonscmNullSCM: HudsonscmNullSCM,
    /**
     * The HudsonsecuritycsrfDefaultCrumbIssuer model constructor.
     * @property {module:model/HudsonsecuritycsrfDefaultCrumbIssuer}
     */
    HudsonsecuritycsrfDefaultCrumbIssuer: HudsonsecuritycsrfDefaultCrumbIssuer,
    /**
     * The HudsonutilClockDifference model constructor.
     * @property {module:model/HudsonutilClockDifference}
     */
    HudsonutilClockDifference: HudsonutilClockDifference,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubContent model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubContent}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubContent: IojenkinsblueoceanblueoceanGithubPipelineGithubContent,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubFile model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubFile}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubFile: IojenkinsblueoceanblueoceanGithubPipelineGithubFile,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization: IojenkinsblueoceanblueoceanGithubPipelineGithubOrganization,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks: IojenkinsblueoceanblueoceanGithubPipelineGithubOrganizationLinks,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories: IojenkinsblueoceanblueoceanGithubPipelineGithubRepositories,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks: IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoriesLinks,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRepository model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepository}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRepository: IojenkinsblueoceanblueoceanGithubPipelineGithubRepository,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks: IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryLinks,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions: IojenkinsblueoceanblueoceanGithubPipelineGithubRepositoryPermissions,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer: IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainer,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks: IojenkinsblueoceanblueoceanGithubPipelineGithubRespositoryContainerLinks,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubScm model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubScm}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubScm: IojenkinsblueoceanblueoceanGithubPipelineGithubScm,
    /**
     * The IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks model constructor.
     * @property {module:model/IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks}
     */
    IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks: IojenkinsblueoceanblueoceanGithubPipelineGithubScmLinks,
    /**
     * The IojenkinsblueoceanresthalLink model constructor.
     * @property {module:model/IojenkinsblueoceanresthalLink}
     */
    IojenkinsblueoceanresthalLink: IojenkinsblueoceanresthalLink,
    /**
     * The IojenkinsblueoceanrestimplpipelineBranchImpl model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelineBranchImpl}
     */
    IojenkinsblueoceanrestimplpipelineBranchImpl: IojenkinsblueoceanrestimplpipelineBranchImpl,
    /**
     * The IojenkinsblueoceanrestimplpipelineBranchImplPermissions model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelineBranchImplPermissions}
     */
    IojenkinsblueoceanrestimplpipelineBranchImplPermissions: IojenkinsblueoceanrestimplpipelineBranchImplPermissions,
    /**
     * The IojenkinsblueoceanrestimplpipelineInputStepImpl model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelineInputStepImpl}
     */
    IojenkinsblueoceanrestimplpipelineInputStepImpl: IojenkinsblueoceanrestimplpipelineInputStepImpl,
    /**
     * The IojenkinsblueoceanrestimplpipelineInputStepImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelineInputStepImplLinks}
     */
    IojenkinsblueoceanrestimplpipelineInputStepImplLinks: IojenkinsblueoceanrestimplpipelineInputStepImplLinks,
    /**
     * The IojenkinsblueoceanrestimplpipelinePipelineStepImpl model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelinePipelineStepImpl}
     */
    IojenkinsblueoceanrestimplpipelinePipelineStepImpl: IojenkinsblueoceanrestimplpipelinePipelineStepImpl,
    /**
     * The IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks}
     */
    IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks: IojenkinsblueoceanrestimplpipelinePipelineStepImplLinks,
    /**
     * The IojenkinsblueoceanrestmodelGenericResource model constructor.
     * @property {module:model/IojenkinsblueoceanrestmodelGenericResource}
     */
    IojenkinsblueoceanrestmodelGenericResource: IojenkinsblueoceanrestmodelGenericResource,
    /**
     * The IojenkinsblueoceanserviceembeddedrestBranchImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestBranchImpl}
     */
    IojenkinsblueoceanserviceembeddedrestBranchImpl: IojenkinsblueoceanserviceembeddedrestBranchImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestBranchImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestBranchImplLinks}
     */
    IojenkinsblueoceanserviceembeddedrestBranchImplLinks: IojenkinsblueoceanserviceembeddedrestBranchImplLinks,
    /**
     * The IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1 model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1}
     */
    IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1,
    /**
     * The IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links}
     */
    IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Links,
    /**
     * The IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map}
     */
    IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map: IojenkinsblueoceanserviceembeddedrestExtensionClassContainerImpl1Map,
    /**
     * The IojenkinsblueoceanserviceembeddedrestExtensionClassImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestExtensionClassImpl}
     */
    IojenkinsblueoceanserviceembeddedrestExtensionClassImpl: IojenkinsblueoceanserviceembeddedrestExtensionClassImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks}
     */
    IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks: IojenkinsblueoceanserviceembeddedrestExtensionClassImplLinks,
    /**
     * The IojenkinsblueoceanserviceembeddedrestFavoriteImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestFavoriteImpl}
     */
    IojenkinsblueoceanserviceembeddedrestFavoriteImpl: IojenkinsblueoceanserviceembeddedrestFavoriteImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks}
     */
    IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks: IojenkinsblueoceanserviceembeddedrestFavoriteImplLinks,
    /**
     * The IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl}
     */
    IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl: IojenkinsblueoceanserviceembeddedrestPipelineFolderImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestPipelineImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestPipelineImpl}
     */
    IojenkinsblueoceanserviceembeddedrestPipelineImpl: IojenkinsblueoceanserviceembeddedrestPipelineImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestPipelineImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestPipelineImplLinks}
     */
    IojenkinsblueoceanserviceembeddedrestPipelineImplLinks: IojenkinsblueoceanserviceembeddedrestPipelineImplLinks,
    /**
     * The IojenkinsblueoceanserviceembeddedrestPipelineRunImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestPipelineRunImpl}
     */
    IojenkinsblueoceanserviceembeddedrestPipelineRunImpl: IojenkinsblueoceanserviceembeddedrestPipelineRunImpl,
    /**
     * The IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks}
     */
    IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks: IojenkinsblueoceanserviceembeddedrestPipelineRunImplLinks,
    /**
     * The IojenkinsblueoceanserviceembeddedrestQueueItemImpl model constructor.
     * @property {module:model/IojenkinsblueoceanserviceembeddedrestQueueItemImpl}
     */
    IojenkinsblueoceanserviceembeddedrestQueueItemImpl: IojenkinsblueoceanserviceembeddedrestQueueItemImpl,
    /**
     * The JenkinsmodelUnlabeledLoadStatistics model constructor.
     * @property {module:model/JenkinsmodelUnlabeledLoadStatistics}
     */
    JenkinsmodelUnlabeledLoadStatistics: JenkinsmodelUnlabeledLoadStatistics,
    /**
     * The SwaggyjenkinsOrganisation model constructor.
     * @property {module:model/SwaggyjenkinsOrganisation}
     */
    SwaggyjenkinsOrganisation: SwaggyjenkinsOrganisation,
    /**
     * The SwaggyjenkinsPipeline model constructor.
     * @property {module:model/SwaggyjenkinsPipeline}
     */
    SwaggyjenkinsPipeline: SwaggyjenkinsPipeline,
    /**
     * The SwaggyjenkinsPipelineActivity model constructor.
     * @property {module:model/SwaggyjenkinsPipelineActivity}
     */
    SwaggyjenkinsPipelineActivity: SwaggyjenkinsPipelineActivity,
    /**
     * The SwaggyjenkinsPipelineActivityartifacts model constructor.
     * @property {module:model/SwaggyjenkinsPipelineActivityartifacts}
     */
    SwaggyjenkinsPipelineActivityartifacts: SwaggyjenkinsPipelineActivityartifacts,
    /**
     * The SwaggyjenkinsPipelineLatestRun model constructor.
     * @property {module:model/SwaggyjenkinsPipelineLatestRun}
     */
    SwaggyjenkinsPipelineLatestRun: SwaggyjenkinsPipelineLatestRun,
    /**
     * The SwaggyjenkinsPipelineLatestRunartifacts model constructor.
     * @property {module:model/SwaggyjenkinsPipelineLatestRunartifacts}
     */
    SwaggyjenkinsPipelineLatestRunartifacts: SwaggyjenkinsPipelineLatestRunartifacts,
    /**
     * The SwaggyjenkinsPipelineRun model constructor.
     * @property {module:model/SwaggyjenkinsPipelineRun}
     */
    SwaggyjenkinsPipelineRun: SwaggyjenkinsPipelineRun,
    /**
     * The SwaggyjenkinsPipelineRunNode model constructor.
     * @property {module:model/SwaggyjenkinsPipelineRunNode}
     */
    SwaggyjenkinsPipelineRunNode: SwaggyjenkinsPipelineRunNode,
    /**
     * The SwaggyjenkinsPipelineRunNodeedges model constructor.
     * @property {module:model/SwaggyjenkinsPipelineRunNodeedges}
     */
    SwaggyjenkinsPipelineRunNodeedges: SwaggyjenkinsPipelineRunNodeedges,
    /**
     * The SwaggyjenkinsPipelineRunartifacts model constructor.
     * @property {module:model/SwaggyjenkinsPipelineRunartifacts}
     */
    SwaggyjenkinsPipelineRunartifacts: SwaggyjenkinsPipelineRunartifacts,
    /**
     * The SwaggyjenkinsUser model constructor.
     * @property {module:model/SwaggyjenkinsUser}
     */
    SwaggyjenkinsUser: SwaggyjenkinsUser,
    /**
     * The BlueOceanApi service constructor.
     * @property {module:api/BlueOceanApi}
     */
    BlueOceanApi: BlueOceanApi,
    /**
     * The RemoteAccessApi service constructor.
     * @property {module:api/RemoteAccessApi}
     */
    RemoteAccessApi: RemoteAccessApi
  };

  return exports;
}));
