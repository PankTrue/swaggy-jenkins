/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * API version: 1.0.0
 * Contact: blah@cliffano.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type GithubRespositoryContainer struct {
	Class string `json:"_class,omitempty"`
	Links GithubRespositoryContainerlinks `json:"_links,omitempty"`
	Repositories GithubRepositories `json:"repositories,omitempty"`
}