package org.openapitools.client.model {

import org.openapitools.client.model.PipelineBranchesitemlatestRun;
import org.openapitools.client.model.PipelineBranchesitempullRequest;

    [XmlRootNode(name="PipelineBranchesitem")]
    public class PipelineBranchesitem {
                [XmlElement(name="displayName")]
        public var displayName: String = null;
                [XmlElement(name="estimatedDurationInMillis")]
        public var estimatedDurationInMillis: Number = 0;
                [XmlElement(name="name")]
        public var name: String = null;
                [XmlElement(name="weatherScore")]
        public var weatherScore: Number = 0;
                [XmlElement(name="latestRun")]
        public var latestRun: PipelineBranchesitemlatestRun = NaN;
                [XmlElement(name="organization")]
        public var organization: String = null;
                [XmlElement(name="pullRequest")]
        public var pullRequest: PipelineBranchesitempullRequest = NaN;
                [XmlElement(name="totalNumberOfPullRequests")]
        public var totalNumberOfPullRequests: Number = 0;
                [XmlElement(name="_class")]
        public var class: String = null;

    public function toString(): String {
        var str: String = "PipelineBranchesitem: ";
        str += " (displayName: " + displayName + ")";
        str += " (estimatedDurationInMillis: " + estimatedDurationInMillis + ")";
        str += " (name: " + name + ")";
        str += " (weatherScore: " + weatherScore + ")";
        str += " (latestRun: " + latestRun + ")";
        str += " (organization: " + organization + ")";
        str += " (pullRequest: " + pullRequest + ")";
        str += " (totalNumberOfPullRequests: " + totalNumberOfPullRequests + ")";
        str += " (class: " + class + ")";
        return str;
    }

}

}
