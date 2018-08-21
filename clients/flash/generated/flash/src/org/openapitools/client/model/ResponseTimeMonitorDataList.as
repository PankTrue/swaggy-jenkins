package org.openapitools.client.model {

import org.openapitools.common.ListWrapper;

    public class ResponseTimeMonitorDataList implements ListWrapper {
        // This declaration below of _ResponseTimeMonitorData_obj_class is to force flash compiler to include this class
        private var _responseTimeMonitorData_obj_class: org.openapitools.client.model.ResponseTimeMonitorData = null;
        [XmlElements(name="responseTimeMonitorData", type="org.openapitools.client.model.ResponseTimeMonitorData")]
        public var responseTimeMonitorData: Array = new Array();

        public function getList(): Array{
            return responseTimeMonitorData;
        }

}

}
