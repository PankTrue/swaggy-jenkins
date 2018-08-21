package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ArrayList
import org.openapitools.models.PipelineRunNode
import scala.collection.immutable.Seq

/**
 * 
 */
case class PipelineRunNodes()

object PipelineRunNodes {
    /**
     * Creates the codec for converting PipelineRunNodes from and to JSON.
     */
    implicit val decoder: Decoder[PipelineRunNodes] = deriveDecoder
    implicit val encoder: ObjectEncoder[PipelineRunNodes] = deriveEncoder
}
