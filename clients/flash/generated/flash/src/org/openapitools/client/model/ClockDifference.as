package org.openapitools.client.model {


    [XmlRootNode(name="ClockDifference")]
    public class ClockDifference {
                [XmlElement(name="_class")]
        public var class: String = null;
                [XmlElement(name="diff")]
        public var diff: Number = 0;

    public function toString(): String {
        var str: String = "ClockDifference: ";
        str += " (class: " + class + ")";
        str += " (diff: " + diff + ")";
        return str;
    }

}

}
