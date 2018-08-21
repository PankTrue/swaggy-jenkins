package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ArrayList
import org.openapitools.models.PipelineStepImpl
import scala.collection.immutable.Seq

/**
 * 
 */
case class PipelineRunNodeSteps()

object PipelineRunNodeSteps {
    /**
     * Creates the codec for converting PipelineRunNodeSteps from and to JSON.
     */
    implicit val decoder: Decoder[PipelineRunNodeSteps] = deriveDecoder
    implicit val encoder: ObjectEncoder[PipelineRunNodeSteps] = deriveEncoder
}
