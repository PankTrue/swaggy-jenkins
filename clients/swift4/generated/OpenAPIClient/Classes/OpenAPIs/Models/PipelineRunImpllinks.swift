//
// PipelineRunImpllinks.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation



public struct PipelineRunImpllinks: Codable {

    public var nodes: Link?
    public var log: Link?
    public var _self: Link?
    public var actions: Link?
    public var steps: Link?
    public var _class: String?

    public init(nodes: Link?, log: Link?, _self: Link?, actions: Link?, steps: Link?, _class: String?) {
        self.nodes = nodes
        self.log = log
        self._self = _self
        self.actions = actions
        self.steps = steps
        self._class = _class
    }

    public enum CodingKeys: String, CodingKey { 
        case nodes
        case log
        case _self = "self"
        case actions
        case steps
        case _class
    }


}
