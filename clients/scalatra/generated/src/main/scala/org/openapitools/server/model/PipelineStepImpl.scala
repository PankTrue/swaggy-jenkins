/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.0.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model

case class PipelineStepImpl(
  Underscoreclass: Option[String],

  Underscorelinks: Option[PipelineStepImpllinks],

  displayName: Option[String],

  durationInMillis: Option[Int],

  id: Option[String],

  input: Option[InputStepImpl],

  result: Option[String],

  startTime: Option[String],

  state: Option[String]

 )