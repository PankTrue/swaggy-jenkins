package apimodels;

import java.util.Objects;
import apimodels.HudsonmodelQueueBlockedItem;
import java.util.ArrayList;
import java.util.List;
import javax.validation.constraints.*;
import com.fasterxml.jackson.annotation.*;
/**
 * HudsonmodelQueue
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-07-25T10:44:57.391+10:00")

public class HudsonmodelQueue   {
  @JsonProperty("_class")
  private String propertyClass = null;

  @JsonProperty("items")
  private List<HudsonmodelQueueBlockedItem> items = null;

  public HudsonmodelQueue propertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
    return this;
  }

   /**
   * Get propertyClass
   * @return propertyClass
  **/
    public String getPropertyClass() {
    return propertyClass;
  }

  public void setPropertyClass(String propertyClass) {
    this.propertyClass = propertyClass;
  }

  public HudsonmodelQueue items(List<HudsonmodelQueueBlockedItem> items) {
    this.items = items;
    return this;
  }

  public HudsonmodelQueue addItemsItem(HudsonmodelQueueBlockedItem itemsItem) {
    if (this.items == null) {
      this.items = new ArrayList<HudsonmodelQueueBlockedItem>();
    }
    this.items.add(itemsItem);
    return this;
  }

   /**
   * Get items
   * @return items
  **/
    public List<HudsonmodelQueueBlockedItem> getItems() {
    return items;
  }

  public void setItems(List<HudsonmodelQueueBlockedItem> items) {
    this.items = items;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelQueue hudsonmodelQueue = (HudsonmodelQueue) o;
    return Objects.equals(this.propertyClass, hudsonmodelQueue.propertyClass) &&
        Objects.equals(this.items, hudsonmodelQueue.items);
  }

  @Override
  public int hashCode() {
    return Objects.hash(propertyClass, items);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelQueue {\n");
    
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
    sb.append("    items: ").append(toIndentedString(items)).append("\n");
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
