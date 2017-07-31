package apimodels;

import java.util.Objects;
import apimodels.HudsonmodelFreeStyleBuild;
import javax.validation.constraints.*;
import com.fasterxml.jackson.annotation.*;
/**
 * HudsonmodelHudsonMasterComputerexecutors
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaPlayFrameworkCodegen", date = "2017-07-25T10:44:57.391+10:00")

public class HudsonmodelHudsonMasterComputerexecutors   {
  @JsonProperty("currentExecutable")
  private HudsonmodelFreeStyleBuild currentExecutable = null;

  @JsonProperty("idle")
  private Boolean idle = null;

  @JsonProperty("likelyStuck")
  private Boolean likelyStuck = null;

  @JsonProperty("number")
  private Integer number = null;

  @JsonProperty("progress")
  private Integer progress = null;

  @JsonProperty("_class")
  private String propertyClass = null;

  public HudsonmodelHudsonMasterComputerexecutors currentExecutable(HudsonmodelFreeStyleBuild currentExecutable) {
    this.currentExecutable = currentExecutable;
    return this;
  }

   /**
   * Get currentExecutable
   * @return currentExecutable
  **/
    public HudsonmodelFreeStyleBuild getCurrentExecutable() {
    return currentExecutable;
  }

  public void setCurrentExecutable(HudsonmodelFreeStyleBuild currentExecutable) {
    this.currentExecutable = currentExecutable;
  }

  public HudsonmodelHudsonMasterComputerexecutors idle(Boolean idle) {
    this.idle = idle;
    return this;
  }

   /**
   * Get idle
   * @return idle
  **/
    public Boolean getIdle() {
    return idle;
  }

  public void setIdle(Boolean idle) {
    this.idle = idle;
  }

  public HudsonmodelHudsonMasterComputerexecutors likelyStuck(Boolean likelyStuck) {
    this.likelyStuck = likelyStuck;
    return this;
  }

   /**
   * Get likelyStuck
   * @return likelyStuck
  **/
    public Boolean getLikelyStuck() {
    return likelyStuck;
  }

  public void setLikelyStuck(Boolean likelyStuck) {
    this.likelyStuck = likelyStuck;
  }

  public HudsonmodelHudsonMasterComputerexecutors number(Integer number) {
    this.number = number;
    return this;
  }

   /**
   * Get number
   * @return number
  **/
    public Integer getNumber() {
    return number;
  }

  public void setNumber(Integer number) {
    this.number = number;
  }

  public HudsonmodelHudsonMasterComputerexecutors progress(Integer progress) {
    this.progress = progress;
    return this;
  }

   /**
   * Get progress
   * @return progress
  **/
    public Integer getProgress() {
    return progress;
  }

  public void setProgress(Integer progress) {
    this.progress = progress;
  }

  public HudsonmodelHudsonMasterComputerexecutors propertyClass(String propertyClass) {
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


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelHudsonMasterComputerexecutors hudsonmodelHudsonMasterComputerexecutors = (HudsonmodelHudsonMasterComputerexecutors) o;
    return Objects.equals(this.currentExecutable, hudsonmodelHudsonMasterComputerexecutors.currentExecutable) &&
        Objects.equals(this.idle, hudsonmodelHudsonMasterComputerexecutors.idle) &&
        Objects.equals(this.likelyStuck, hudsonmodelHudsonMasterComputerexecutors.likelyStuck) &&
        Objects.equals(this.number, hudsonmodelHudsonMasterComputerexecutors.number) &&
        Objects.equals(this.progress, hudsonmodelHudsonMasterComputerexecutors.progress) &&
        Objects.equals(this.propertyClass, hudsonmodelHudsonMasterComputerexecutors.propertyClass);
  }

  @Override
  public int hashCode() {
    return Objects.hash(currentExecutable, idle, likelyStuck, number, progress, propertyClass);
  }

  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelHudsonMasterComputerexecutors {\n");
    
    sb.append("    currentExecutable: ").append(toIndentedString(currentExecutable)).append("\n");
    sb.append("    idle: ").append(toIndentedString(idle)).append("\n");
    sb.append("    likelyStuck: ").append(toIndentedString(likelyStuck)).append("\n");
    sb.append("    number: ").append(toIndentedString(number)).append("\n");
    sb.append("    progress: ").append(toIndentedString(progress)).append("\n");
    sb.append("    propertyClass: ").append(toIndentedString(propertyClass)).append("\n");
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
