/*
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

/**
 * SwagFreeStyleProject
 */
public class SwagFreeStyleProject implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get name
     * @return name
     */
    public String name { get; set; }

    /**
     * Get url
     * @return url
     */
    public String url { get; set; }

    /**
     * Get color
     * @return color
     */
    public String color { get; set; }

    /**
     * Get actions
     * @return actions
     */
    public List<SwagFreeStyleProjectactions> actions { get; set; }

    /**
     * Get description
     * @return description
     */
    public String description { get; set; }

    /**
     * Get displayName
     * @return displayName
     */
    public String displayName { get; set; }

    /**
     * Get displayNameOrNull
     * @return displayNameOrNull
     */
    public String displayNameOrNull { get; set; }

    /**
     * Get fullDisplayName
     * @return fullDisplayName
     */
    public String fullDisplayName { get; set; }

    /**
     * Get fullName
     * @return fullName
     */
    public String fullName { get; set; }

    /**
     * Get buildable
     * @return buildable
     */
    public Boolean buildable { get; set; }

    /**
     * Get builds
     * @return builds
     */
    public List<SwagFreeStyleBuild> builds { get; set; }

    /**
     * Get firstBuild
     * @return firstBuild
     */
    public SwagFreeStyleBuild firstBuild { get; set; }

    /**
     * Get healthReport
     * @return healthReport
     */
    public List<SwagFreeStyleProjecthealthReport> healthReport { get; set; }

    /**
     * Get inQueue
     * @return inQueue
     */
    public Boolean inQueue { get; set; }

    /**
     * Get keepDependencies
     * @return keepDependencies
     */
    public Boolean keepDependencies { get; set; }

    /**
     * Get lastBuild
     * @return lastBuild
     */
    public SwagFreeStyleBuild lastBuild { get; set; }

    /**
     * Get lastCompletedBuild
     * @return lastCompletedBuild
     */
    public SwagFreeStyleBuild lastCompletedBuild { get; set; }

    /**
     * Get lastFailedBuild
     * @return lastFailedBuild
     */
    public String lastFailedBuild { get; set; }

    /**
     * Get lastStableBuild
     * @return lastStableBuild
     */
    public SwagFreeStyleBuild lastStableBuild { get; set; }

    /**
     * Get lastSuccessfulBuild
     * @return lastSuccessfulBuild
     */
    public SwagFreeStyleBuild lastSuccessfulBuild { get; set; }

    /**
     * Get lastUnstableBuild
     * @return lastUnstableBuild
     */
    public String lastUnstableBuild { get; set; }

    /**
     * Get lastUnsuccessfulBuild
     * @return lastUnsuccessfulBuild
     */
    public String lastUnsuccessfulBuild { get; set; }

    /**
     * Get nextBuildNumber
     * @return nextBuildNumber
     */
    public Integer nextBuildNumber { get; set; }

    /**
     * Get queueItem
     * @return queueItem
     */
    public String queueItem { get; set; }

    /**
     * Get concurrentBuild
     * @return concurrentBuild
     */
    public Boolean concurrentBuild { get; set; }

    /**
     * Get scm
     * @return scm
     */
    public SwagNullSCM scm { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public SwagFreeStyleProject() {
        actions = new List<SwagFreeStyleProjectactions>();
        builds = new List<SwagFreeStyleBuild>();
        healthReport = new List<SwagFreeStyleProjecthealthReport>();
    }

    public static SwagFreeStyleProject getExample() {
        SwagFreeStyleProject freeStyleProject = new SwagFreeStyleProject();
        freeStyleProject.propertyClass = 'aeiou';
        freeStyleProject.name = 'aeiou';
        freeStyleProject.url = 'aeiou';
        freeStyleProject.color = 'aeiou';
        freeStyleProject.actions = new List<SwagFreeStyleProjectactions>{SwagFreeStyleProjectactions.getExample()};
        freeStyleProject.description = 'aeiou';
        freeStyleProject.displayName = 'aeiou';
        freeStyleProject.displayNameOrNull = 'aeiou';
        freeStyleProject.fullDisplayName = 'aeiou';
        freeStyleProject.fullName = 'aeiou';
        freeStyleProject.buildable = true;
        freeStyleProject.builds = new List<SwagFreeStyleBuild>{SwagFreeStyleBuild.getExample()};
        freeStyleProject.firstBuild = SwagFreeStyleBuild.getExample();
        freeStyleProject.healthReport = new List<SwagFreeStyleProjecthealthReport>{SwagFreeStyleProjecthealthReport.getExample()};
        freeStyleProject.inQueue = true;
        freeStyleProject.keepDependencies = true;
        freeStyleProject.lastBuild = SwagFreeStyleBuild.getExample();
        freeStyleProject.lastCompletedBuild = SwagFreeStyleBuild.getExample();
        freeStyleProject.lastFailedBuild = 'aeiou';
        freeStyleProject.lastStableBuild = SwagFreeStyleBuild.getExample();
        freeStyleProject.lastSuccessfulBuild = SwagFreeStyleBuild.getExample();
        freeStyleProject.lastUnstableBuild = 'aeiou';
        freeStyleProject.lastUnsuccessfulBuild = 'aeiou';
        freeStyleProject.nextBuildNumber = 123;
        freeStyleProject.queueItem = 'aeiou';
        freeStyleProject.concurrentBuild = true;
        freeStyleProject.scm = SwagNullSCM.getExample();
        return freeStyleProject;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagFreeStyleProject) {
            SwagFreeStyleProject freeStyleProject = (SwagFreeStyleProject) obj;
            return this.propertyClass == freeStyleProject.propertyClass
                && this.name == freeStyleProject.name
                && this.url == freeStyleProject.url
                && this.color == freeStyleProject.color
                && this.actions == freeStyleProject.actions
                && this.description == freeStyleProject.description
                && this.displayName == freeStyleProject.displayName
                && this.displayNameOrNull == freeStyleProject.displayNameOrNull
                && this.fullDisplayName == freeStyleProject.fullDisplayName
                && this.fullName == freeStyleProject.fullName
                && this.buildable == freeStyleProject.buildable
                && this.builds == freeStyleProject.builds
                && this.firstBuild == freeStyleProject.firstBuild
                && this.healthReport == freeStyleProject.healthReport
                && this.inQueue == freeStyleProject.inQueue
                && this.keepDependencies == freeStyleProject.keepDependencies
                && this.lastBuild == freeStyleProject.lastBuild
                && this.lastCompletedBuild == freeStyleProject.lastCompletedBuild
                && this.lastFailedBuild == freeStyleProject.lastFailedBuild
                && this.lastStableBuild == freeStyleProject.lastStableBuild
                && this.lastSuccessfulBuild == freeStyleProject.lastSuccessfulBuild
                && this.lastUnstableBuild == freeStyleProject.lastUnstableBuild
                && this.lastUnsuccessfulBuild == freeStyleProject.lastUnsuccessfulBuild
                && this.nextBuildNumber == freeStyleProject.nextBuildNumber
                && this.queueItem == freeStyleProject.queueItem
                && this.concurrentBuild == freeStyleProject.concurrentBuild
                && this.scm == freeStyleProject.scm;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (name == null ? 0 : System.hashCode(name));
        hashCode = (17 * hashCode) + (url == null ? 0 : System.hashCode(url));
        hashCode = (17 * hashCode) + (color == null ? 0 : System.hashCode(color));
        hashCode = (17 * hashCode) + (actions == null ? 0 : System.hashCode(actions));
        hashCode = (17 * hashCode) + (description == null ? 0 : System.hashCode(description));
        hashCode = (17 * hashCode) + (displayName == null ? 0 : System.hashCode(displayName));
        hashCode = (17 * hashCode) + (displayNameOrNull == null ? 0 : System.hashCode(displayNameOrNull));
        hashCode = (17 * hashCode) + (fullDisplayName == null ? 0 : System.hashCode(fullDisplayName));
        hashCode = (17 * hashCode) + (fullName == null ? 0 : System.hashCode(fullName));
        hashCode = (17 * hashCode) + (buildable == null ? 0 : System.hashCode(buildable));
        hashCode = (17 * hashCode) + (builds == null ? 0 : System.hashCode(builds));
        hashCode = (17 * hashCode) + (firstBuild == null ? 0 : System.hashCode(firstBuild));
        hashCode = (17 * hashCode) + (healthReport == null ? 0 : System.hashCode(healthReport));
        hashCode = (17 * hashCode) + (inQueue == null ? 0 : System.hashCode(inQueue));
        hashCode = (17 * hashCode) + (keepDependencies == null ? 0 : System.hashCode(keepDependencies));
        hashCode = (17 * hashCode) + (lastBuild == null ? 0 : System.hashCode(lastBuild));
        hashCode = (17 * hashCode) + (lastCompletedBuild == null ? 0 : System.hashCode(lastCompletedBuild));
        hashCode = (17 * hashCode) + (lastFailedBuild == null ? 0 : System.hashCode(lastFailedBuild));
        hashCode = (17 * hashCode) + (lastStableBuild == null ? 0 : System.hashCode(lastStableBuild));
        hashCode = (17 * hashCode) + (lastSuccessfulBuild == null ? 0 : System.hashCode(lastSuccessfulBuild));
        hashCode = (17 * hashCode) + (lastUnstableBuild == null ? 0 : System.hashCode(lastUnstableBuild));
        hashCode = (17 * hashCode) + (lastUnsuccessfulBuild == null ? 0 : System.hashCode(lastUnsuccessfulBuild));
        hashCode = (17 * hashCode) + (nextBuildNumber == null ? 0 : System.hashCode(nextBuildNumber));
        hashCode = (17 * hashCode) + (queueItem == null ? 0 : System.hashCode(queueItem));
        hashCode = (17 * hashCode) + (concurrentBuild == null ? 0 : System.hashCode(concurrentBuild));
        hashCode = (17 * hashCode) + (scm == null ? 0 : System.hashCode(scm));
        return hashCode;
    }
}
