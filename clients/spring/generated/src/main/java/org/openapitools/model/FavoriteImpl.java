package org.openapitools.model;

import java.util.Objects;
import com.fasterxml.jackson.annotation.JsonProperty;
import com.fasterxml.jackson.annotation.JsonCreator;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.FavoriteImpllinks;
import org.openapitools.model.PipelineImpl;
import javax.validation.Valid;
import javax.validation.constraints.*;

/**
 * FavoriteImpl
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.SpringCodegen", date = "2019-04-10T13:22:06.378Z[GMT]")

public class FavoriteImpl   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("_links")
  private FavoriteImpllinks links = null;

  @JsonProperty("item")
  private PipelineImpl item = null;

  public FavoriteImpl propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

  /**
   * Get propertyClass
   * @return propertyClass
  **/
  @ApiModelProperty(value = "")


  public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public FavoriteImpl links(FavoriteImpllinks links) {
    this.links = links;
    return this;
  }

  /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(value = "")

  @Valid

  public FavoriteImpllinks getLinks() {
    return links;
  }

  public void setLinks(FavoriteImpllinks links) {
    this.links = links;
  }

  public FavoriteImpl item(PipelineImpl item) {
    this.item = item;
    return this;
  }

  /**
   * Get item
   * @return item
  **/
  @ApiModelProperty(value = "")

  @Valid

  public PipelineImpl getItem() {
    return item;
  }

  public void setItem(PipelineImpl item) {
    this.item = item;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    FavoriteImpl favoriteImpl = (FavoriteImpl) o;
    return Objects.equals(this.propertyClass, favoriteImpl.propertyClass) &&
        Objects.equals(this.links, favoriteImpl.links) &&
        Objects.equals(this.item, favoriteImpl.item);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, links, item);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class FavoriteImpl {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("    item: ").append(toIndentedString(item)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }
}

