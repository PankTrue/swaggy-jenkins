package io.swagger.server.api.verticle;

import io.swagger.server.api.model.BranchImpl;
import io.swagger.server.api.model.FavoriteImpl;
import io.swagger.server.api.model.GithubScm;
import io.swagger.server.api.MainApiException;
import io.swagger.server.api.model.MultibranchPipeline;
import io.swagger.server.api.model.Organisation;
import io.swagger.server.api.model.Organisations;
import io.swagger.server.api.model.Pipeline;
import io.swagger.server.api.model.PipelineActivities;
import io.swagger.server.api.model.PipelineFolderImpl;
import io.swagger.server.api.model.PipelineImpl;
import io.swagger.server.api.model.PipelineQueue;
import io.swagger.server.api.model.PipelineRun;
import io.swagger.server.api.model.PipelineRunNode;
import io.swagger.server.api.model.PipelineRunNodeSteps;
import io.swagger.server.api.model.PipelineRunNodes;
import io.swagger.server.api.model.PipelineRuns;
import io.swagger.server.api.model.PipelineStepImpl;
import io.swagger.server.api.model.Pipelines;
import io.swagger.server.api.model.QueueItemImpl;
import io.swagger.server.api.model.ScmOrganisations;
import io.swagger.server.api.model.User;
import io.swagger.server.api.model.UserFavorites;

public final class BlueOceanApiException extends MainApiException {
    public BlueOceanApiException(int statusCode, String statusMessage) {
        super(statusCode, statusMessage);
    }
    
    public static final BlueOceanApiException BlueOcean_deletePipelineQueueItem_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_deletePipelineQueueItem_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getAuthenticatedUser_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getAuthenticatedUser_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getClasses_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getClasses_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getOrganisation_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getOrganisation_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getOrganisation_404_Exception = new BlueOceanApiException(404, "Pipeline cannot be found on Jenkins instance");
    public static final BlueOceanApiException BlueOcean_getOrganisations_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getOrganisations_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipeline_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipeline_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipeline_404_Exception = new BlueOceanApiException(404, "Pipeline cannot be found on Jenkins instance");
    public static final BlueOceanApiException BlueOcean_getPipelineActivities_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineActivities_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranch_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranch_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranchRun_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranchRun_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranches_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineBranches_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineFolder_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineFolder_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineFolderPipeline_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineFolderPipeline_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineQueue_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineQueue_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRun_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRun_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunLog_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunLog_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNode_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNode_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeStep_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeStep_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeStepLog_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeStepLog_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeSteps_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodeSteps_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodes_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRunNodes_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelineRuns_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelineRuns_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getPipelines_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getPipelines_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getSCM_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getSCM_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisationRepositories_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisationRepositories_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisationRepository_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisationRepository_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisations_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getSCMOrganisations_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getUser_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getUser_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getUserFavorites_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getUserFavorites_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_getUsers_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_getUsers_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_postPipelineRun_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_postPipelineRun_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_postPipelineRuns_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_postPipelineRuns_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_putPipelineFavorite_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_putPipelineFavorite_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_putPipelineRun_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_putPipelineRun_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_search_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_search_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    public static final BlueOceanApiException BlueOcean_searchClasses_401_Exception = new BlueOceanApiException(401, "Authentication failed - incorrect username and/or password");
    public static final BlueOceanApiException BlueOcean_searchClasses_403_Exception = new BlueOceanApiException(403, "Jenkins requires authentication - please set username and password");
    

}