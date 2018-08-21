# NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
# https://openapi-generator.tech
# Do not edit the class manually.

defmodule SwaggyJenkins.Model.PipelineBranchesitemlatestRun do
  @moduledoc """
  
  """

  @derive [Poison.Encoder]
  defstruct [
    :"durationInMillis",
    :"estimatedDurationInMillis",
    :"enQueueTime",
    :"endTime",
    :"id",
    :"organization",
    :"pipeline",
    :"result",
    :"runSummary",
    :"startTime",
    :"state",
    :"type",
    :"commitId",
    :"_class"
  ]

  @type t :: %__MODULE__{
    :"durationInMillis" => integer(),
    :"estimatedDurationInMillis" => integer(),
    :"enQueueTime" => String.t,
    :"endTime" => String.t,
    :"id" => String.t,
    :"organization" => String.t,
    :"pipeline" => String.t,
    :"result" => String.t,
    :"runSummary" => String.t,
    :"startTime" => String.t,
    :"state" => String.t,
    :"type" => String.t,
    :"commitId" => String.t,
    :"_class" => String.t
  }
end

defimpl Poison.Decoder, for: SwaggyJenkins.Model.PipelineBranchesitemlatestRun do
  def decode(value, _options) do
    value
  end
end
