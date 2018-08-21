{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.PipelineRunImpllinks exposing (PipelineRunImpllinks, pipelineRunImpllinksDecoder, pipelineRunImpllinksEncoder)

import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias PipelineRunImpllinks =
    { nodes : Maybe Link
    , log : Maybe Link
    , self : Maybe Link
    , actions : Maybe Link
    , steps : Maybe Link
    , class : Maybe String
    }


pipelineRunImpllinksDecoder : Decoder PipelineRunImpllinks
pipelineRunImpllinksDecoder =
    decode PipelineRunImpllinks
        |> optional "nodes" (Decode.nullable linkDecoder) Nothing
        |> optional "log" (Decode.nullable linkDecoder) Nothing
        |> optional "self" (Decode.nullable linkDecoder) Nothing
        |> optional "actions" (Decode.nullable linkDecoder) Nothing
        |> optional "steps" (Decode.nullable linkDecoder) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



pipelineRunImpllinksEncoder : PipelineRunImpllinks -> Encode.Value
pipelineRunImpllinksEncoder model =
    Encode.object
        [ ( "nodes", withDefault Encode.null (map linkEncoder model.nodes) )
        , ( "log", withDefault Encode.null (map linkEncoder model.log) )
        , ( "self", withDefault Encode.null (map linkEncoder model.self) )
        , ( "actions", withDefault Encode.null (map linkEncoder model.actions) )
        , ( "steps", withDefault Encode.null (map linkEncoder model.steps) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]

