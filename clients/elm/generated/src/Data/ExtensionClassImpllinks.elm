{-
   Swaggy Jenkins
   Jenkins API clients generated from Swagger / Open API specification

   OpenAPI spec version: 1.0.0
   Contact: blah@cliffano.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git
   Do not edit this file manually.
-}


module Data.ExtensionClassImpllinks exposing (ExtensionClassImpllinks, extensionClassImpllinksDecoder, extensionClassImpllinksEncoder)

import Data.Link exposing (Link, linkDecoder, linkEncoder)
import Json.Decode as Decode exposing (Decoder)
import Json.Decode.Pipeline exposing (decode, optional, required)
import Json.Encode as Encode
import Maybe exposing (map, withDefault)


type alias ExtensionClassImpllinks =
    { self : Maybe Link
    , class : Maybe String
    }


extensionClassImpllinksDecoder : Decoder ExtensionClassImpllinks
extensionClassImpllinksDecoder =
    decode ExtensionClassImpllinks
        |> optional "self" (Decode.nullable linkDecoder) Nothing
        |> optional "_class" (Decode.nullable Decode.string) Nothing



extensionClassImpllinksEncoder : ExtensionClassImpllinks -> Encode.Value
extensionClassImpllinksEncoder model =
    Encode.object
        [ ( "self", withDefault Encode.null (map linkEncoder model.self) )
        , ( "_class", withDefault Encode.null (map Encode.string model.class) )
        ]

