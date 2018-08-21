package org.openapitools.client.model {


    [XmlRootNode(name="QueueItemImpl")]
    public class QueueItemImpl {
                [XmlElement(name="_class")]
        public var class: String = null;
                [XmlElement(name="expectedBuildNumber")]
        public var expectedBuildNumber: Number = 0;
                [XmlElement(name="id")]
        public var id: String = null;
                [XmlElement(name="pipeline")]
        public var pipeline: String = null;
                [XmlElement(name="queuedTime")]
        public var queuedTime: Number = 0;

    public function toString(): String {
        var str: String = "QueueItemImpl: ";
        str += " (class: " + class + ")";
        str += " (expectedBuildNumber: " + expectedBuildNumber + ")";
        str += " (id: " + id + ")";
        str += " (pipeline: " + pipeline + ")";
        str += " (queuedTime: " + queuedTime + ")";
        return str;
    }

}

}
