//
// GithubRepository.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


open class GithubRepository: Codable {

    public var _class: String?
    public var links: GithubRepositorylinks?
    public var defaultBranch: String?
    public var description: String?
    public var name: String?
    public var permissions: GithubRepositorypermissions?
    public var _private: Bool?
    public var fullName: String?

    public init() {}


    private enum CodingKeys: String, CodingKey { 
        case _class = "_class"
        case links = "_links"
        case defaultBranch = "defaultBranch"
        case description = "description"
        case name = "name"
        case permissions = "permissions"
        case _private = "private"
        case fullName = "fullName"
    }

}