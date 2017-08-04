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
 * SwagQueueItemImpl
 */
public class SwagQueueItemImpl implements Swagger.MappedProperties {
    /**
     * Get propertyClass
     * @return propertyClass
     */
    public String propertyClass { get; set; }

    /**
     * Get expectedBuildNumber
     * @return expectedBuildNumber
     */
    public Integer expectedBuildNumber { get; set; }

    /**
     * Get id
     * @return id
     */
    public String id { get; set; }

    /**
     * Get pipeline
     * @return pipeline
     */
    public String pipeline { get; set; }

    /**
     * Get queuedTime
     * @return queuedTime
     */
    public Integer queuedTime { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        '_class' => 'propertyClass'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static SwagQueueItemImpl getExample() {
        SwagQueueItemImpl queueItemImpl = new SwagQueueItemImpl();
        queueItemImpl.propertyClass = 'aeiou';
        queueItemImpl.expectedBuildNumber = 123;
        queueItemImpl.id = 'aeiou';
        queueItemImpl.pipeline = 'aeiou';
        queueItemImpl.queuedTime = 123;
        return queueItemImpl;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof SwagQueueItemImpl) {
            SwagQueueItemImpl queueItemImpl = (SwagQueueItemImpl) obj;
            return this.propertyClass == queueItemImpl.propertyClass
                && this.expectedBuildNumber == queueItemImpl.expectedBuildNumber
                && this.id == queueItemImpl.id
                && this.pipeline == queueItemImpl.pipeline
                && this.queuedTime == queueItemImpl.queuedTime;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (propertyClass == null ? 0 : System.hashCode(propertyClass));
        hashCode = (17 * hashCode) + (expectedBuildNumber == null ? 0 : System.hashCode(expectedBuildNumber));
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (pipeline == null ? 0 : System.hashCode(pipeline));
        hashCode = (17 * hashCode) + (queuedTime == null ? 0 : System.hashCode(queuedTime));
        return hashCode;
    }
}
