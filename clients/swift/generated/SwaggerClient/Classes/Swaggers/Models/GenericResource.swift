//
// GenericResource.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


public class GenericResource: JSONEncodable {
    public var _class: String?
    public var displayName: String?
    public var durationInMillis: Int32?
    public var id: String?
    public var result: String?
    public var startTime: String?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["durationInMillis"] = self.durationInMillis?.encodeToJSON()
        nillableDictionary["id"] = self.id
        nillableDictionary["result"] = self.result
        nillableDictionary["startTime"] = self.startTime
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}