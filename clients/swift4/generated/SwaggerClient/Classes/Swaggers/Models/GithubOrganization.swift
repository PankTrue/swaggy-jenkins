//
// GithubOrganization.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubOrganization: Codable {

    public var _class: String?
    public var links: GithubOrganizationlinks?
    public var jenkinsOrganizationPipeline: Bool?
    public var name: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case links = "_links"
        case jenkinsOrganizationPipeline = "jenkinsOrganizationPipeline"
        case name = "name"
    }

}