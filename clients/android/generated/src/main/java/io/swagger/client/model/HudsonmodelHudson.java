/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

package io.swagger.client.model;

import io.swagger.client.model.HudsonmodelAllView;
import io.swagger.client.model.HudsonmodelFreeStyleProject;
import io.swagger.client.model.HudsonmodelHudsonassignedLabels;
import io.swagger.client.model.JenkinsmodelUnlabeledLoadStatistics;
import java.util.*;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class HudsonmodelHudson {
  
  @SerializedName("_class")
  private String _class = null;
  @SerializedName("assignedLabels")
  private List<HudsonmodelHudsonassignedLabels> assignedLabels = null;
  @SerializedName("mode")
  private String mode = null;
  @SerializedName("nodeDescription")
  private String nodeDescription = null;
  @SerializedName("nodeName")
  private String nodeName = null;
  @SerializedName("numExecutors")
  private Integer numExecutors = null;
  @SerializedName("description")
  private String description = null;
  @SerializedName("jobs")
  private List<HudsonmodelFreeStyleProject> jobs = null;
  @SerializedName("primaryView")
  private HudsonmodelAllView primaryView = null;
  @SerializedName("quietingDown")
  private Boolean quietingDown = null;
  @SerializedName("slaveAgentPort")
  private Integer slaveAgentPort = null;
  @SerializedName("unlabeledLoad")
  private JenkinsmodelUnlabeledLoadStatistics unlabeledLoad = null;
  @SerializedName("useCrumbs")
  private Boolean useCrumbs = null;
  @SerializedName("useSecurity")
  private Boolean useSecurity = null;
  @SerializedName("views")
  private List<HudsonmodelAllView> views = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public String getClass() {
    return _class;
  }
  public void setClass(String _class) {
    this._class = _class;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelHudsonassignedLabels> getAssignedLabels() {
    return assignedLabels;
  }
  public void setAssignedLabels(List<HudsonmodelHudsonassignedLabels> assignedLabels) {
    this.assignedLabels = assignedLabels;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getMode() {
    return mode;
  }
  public void setMode(String mode) {
    this.mode = mode;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getNodeDescription() {
    return nodeDescription;
  }
  public void setNodeDescription(String nodeDescription) {
    this.nodeDescription = nodeDescription;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getNodeName() {
    return nodeName;
  }
  public void setNodeName(String nodeName) {
    this.nodeName = nodeName;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getNumExecutors() {
    return numExecutors;
  }
  public void setNumExecutors(Integer numExecutors) {
    this.numExecutors = numExecutors;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getDescription() {
    return description;
  }
  public void setDescription(String description) {
    this.description = description;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelFreeStyleProject> getJobs() {
    return jobs;
  }
  public void setJobs(List<HudsonmodelFreeStyleProject> jobs) {
    this.jobs = jobs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public HudsonmodelAllView getPrimaryView() {
    return primaryView;
  }
  public void setPrimaryView(HudsonmodelAllView primaryView) {
    this.primaryView = primaryView;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getQuietingDown() {
    return quietingDown;
  }
  public void setQuietingDown(Boolean quietingDown) {
    this.quietingDown = quietingDown;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Integer getSlaveAgentPort() {
    return slaveAgentPort;
  }
  public void setSlaveAgentPort(Integer slaveAgentPort) {
    this.slaveAgentPort = slaveAgentPort;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public JenkinsmodelUnlabeledLoadStatistics getUnlabeledLoad() {
    return unlabeledLoad;
  }
  public void setUnlabeledLoad(JenkinsmodelUnlabeledLoadStatistics unlabeledLoad) {
    this.unlabeledLoad = unlabeledLoad;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUseCrumbs() {
    return useCrumbs;
  }
  public void setUseCrumbs(Boolean useCrumbs) {
    this.useCrumbs = useCrumbs;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public Boolean getUseSecurity() {
    return useSecurity;
  }
  public void setUseSecurity(Boolean useSecurity) {
    this.useSecurity = useSecurity;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public List<HudsonmodelAllView> getViews() {
    return views;
  }
  public void setViews(List<HudsonmodelAllView> views) {
    this.views = views;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    HudsonmodelHudson hudsonmodelHudson = (HudsonmodelHudson) o;
    return (this._class == null ? hudsonmodelHudson._class == null : this._class.equals(hudsonmodelHudson._class)) &&
        (this.assignedLabels == null ? hudsonmodelHudson.assignedLabels == null : this.assignedLabels.equals(hudsonmodelHudson.assignedLabels)) &&
        (this.mode == null ? hudsonmodelHudson.mode == null : this.mode.equals(hudsonmodelHudson.mode)) &&
        (this.nodeDescription == null ? hudsonmodelHudson.nodeDescription == null : this.nodeDescription.equals(hudsonmodelHudson.nodeDescription)) &&
        (this.nodeName == null ? hudsonmodelHudson.nodeName == null : this.nodeName.equals(hudsonmodelHudson.nodeName)) &&
        (this.numExecutors == null ? hudsonmodelHudson.numExecutors == null : this.numExecutors.equals(hudsonmodelHudson.numExecutors)) &&
        (this.description == null ? hudsonmodelHudson.description == null : this.description.equals(hudsonmodelHudson.description)) &&
        (this.jobs == null ? hudsonmodelHudson.jobs == null : this.jobs.equals(hudsonmodelHudson.jobs)) &&
        (this.primaryView == null ? hudsonmodelHudson.primaryView == null : this.primaryView.equals(hudsonmodelHudson.primaryView)) &&
        (this.quietingDown == null ? hudsonmodelHudson.quietingDown == null : this.quietingDown.equals(hudsonmodelHudson.quietingDown)) &&
        (this.slaveAgentPort == null ? hudsonmodelHudson.slaveAgentPort == null : this.slaveAgentPort.equals(hudsonmodelHudson.slaveAgentPort)) &&
        (this.unlabeledLoad == null ? hudsonmodelHudson.unlabeledLoad == null : this.unlabeledLoad.equals(hudsonmodelHudson.unlabeledLoad)) &&
        (this.useCrumbs == null ? hudsonmodelHudson.useCrumbs == null : this.useCrumbs.equals(hudsonmodelHudson.useCrumbs)) &&
        (this.useSecurity == null ? hudsonmodelHudson.useSecurity == null : this.useSecurity.equals(hudsonmodelHudson.useSecurity)) &&
        (this.views == null ? hudsonmodelHudson.views == null : this.views.equals(hudsonmodelHudson.views));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this._class == null ? 0: this._class.hashCode());
    result = 31 * result + (this.assignedLabels == null ? 0: this.assignedLabels.hashCode());
    result = 31 * result + (this.mode == null ? 0: this.mode.hashCode());
    result = 31 * result + (this.nodeDescription == null ? 0: this.nodeDescription.hashCode());
    result = 31 * result + (this.nodeName == null ? 0: this.nodeName.hashCode());
    result = 31 * result + (this.numExecutors == null ? 0: this.numExecutors.hashCode());
    result = 31 * result + (this.description == null ? 0: this.description.hashCode());
    result = 31 * result + (this.jobs == null ? 0: this.jobs.hashCode());
    result = 31 * result + (this.primaryView == null ? 0: this.primaryView.hashCode());
    result = 31 * result + (this.quietingDown == null ? 0: this.quietingDown.hashCode());
    result = 31 * result + (this.slaveAgentPort == null ? 0: this.slaveAgentPort.hashCode());
    result = 31 * result + (this.unlabeledLoad == null ? 0: this.unlabeledLoad.hashCode());
    result = 31 * result + (this.useCrumbs == null ? 0: this.useCrumbs.hashCode());
    result = 31 * result + (this.useSecurity == null ? 0: this.useSecurity.hashCode());
    result = 31 * result + (this.views == null ? 0: this.views.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class HudsonmodelHudson {\n");
    
    sb.append("  _class: ").append(_class).append("\n");
    sb.append("  assignedLabels: ").append(assignedLabels).append("\n");
    sb.append("  mode: ").append(mode).append("\n");
    sb.append("  nodeDescription: ").append(nodeDescription).append("\n");
    sb.append("  nodeName: ").append(nodeName).append("\n");
    sb.append("  numExecutors: ").append(numExecutors).append("\n");
    sb.append("  description: ").append(description).append("\n");
    sb.append("  jobs: ").append(jobs).append("\n");
    sb.append("  primaryView: ").append(primaryView).append("\n");
    sb.append("  quietingDown: ").append(quietingDown).append("\n");
    sb.append("  slaveAgentPort: ").append(slaveAgentPort).append("\n");
    sb.append("  unlabeledLoad: ").append(unlabeledLoad).append("\n");
    sb.append("  useCrumbs: ").append(useCrumbs).append("\n");
    sb.append("  useSecurity: ").append(useSecurity).append("\n");
    sb.append("  views: ").append(views).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}