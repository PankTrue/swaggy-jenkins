package org.openapitools.models

import io.circe._
import io.finch.circe._
import io.circe.generic.semiauto._
import io.circe.java8.time._
import org.openapitools._

/**
 * 
 * @param Underscoreclass 
 * @param id 
 * @param fullName 
 * @param email 
 * @param name 
 */
case class User(Underscoreclass: Option[String],
                id: Option[String],
                fullName: Option[String],
                email: Option[String],
                name: Option[String]
                )

object User {
    /**
     * Creates the codec for converting User from and to JSON.
     */
    implicit val decoder: Decoder[User] = deriveDecoder
    implicit val encoder: ObjectEncoder[User] = deriveEncoder
}
