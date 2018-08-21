package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._
import org.openapitools.models.ArrayList
import org.openapitools.models.QueueItemImpl
import scala.collection.immutable.Seq

/**
 * 
 */
case class PipelineQueue()

object PipelineQueue {
    /**
     * Creates the codec for converting PipelineQueue from and to JSON.
     */
    implicit val decoder: Decoder[PipelineQueue] = deriveDecoder
    implicit val encoder: ObjectEncoder[PipelineQueue] = deriveEncoder
}
