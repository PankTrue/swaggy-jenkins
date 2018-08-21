package org.openapitools.server.api.model;

import java.util.Objects;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.server.api.model.QueueItemImpl;

@JsonInclude(JsonInclude.Include.NON_NULL) 
public class PipelineQueue extends ArrayList<QueueItemImpl>  {
  

  public PipelineQueue () {

  }

  public PipelineQueue () {
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    PipelineQueue pipelineQueue = (PipelineQueue) o;
    return true;
  }

  @Override
  public int hashCode() {
    return Objects.hash();
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class PipelineQueue {\n");
    sb.append("    ").append(toIndentedString(super.toString())).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}
