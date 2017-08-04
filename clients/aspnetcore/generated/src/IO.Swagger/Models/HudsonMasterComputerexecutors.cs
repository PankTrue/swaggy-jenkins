/*
 * Swaggy Jenkins
 *
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 0.1.0
 * Contact: blah@cliffano.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace IO.Swagger.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class HudsonMasterComputerexecutors : IEquatable<HudsonMasterComputerexecutors>
    { 
        /// <summary>
        /// Gets or Sets CurrentExecutable
        /// </summary>
        [DataMember(Name="currentExecutable")]
        public FreeStyleBuild CurrentExecutable { get; set; }

        /// <summary>
        /// Gets or Sets Idle
        /// </summary>
        [DataMember(Name="idle")]
        public bool? Idle { get; set; }

        /// <summary>
        /// Gets or Sets LikelyStuck
        /// </summary>
        [DataMember(Name="likelyStuck")]
        public bool? LikelyStuck { get; set; }

        /// <summary>
        /// Gets or Sets Number
        /// </summary>
        [DataMember(Name="number")]
        public int? Number { get; set; }

        /// <summary>
        /// Gets or Sets Progress
        /// </summary>
        [DataMember(Name="progress")]
        public int? Progress { get; set; }

        /// <summary>
        /// Gets or Sets Class
        /// </summary>
        [DataMember(Name="_class")]
        public string Class { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class HudsonMasterComputerexecutors {\n");
            sb.Append("  CurrentExecutable: ").Append(CurrentExecutable).Append("\n");
            sb.Append("  Idle: ").Append(Idle).Append("\n");
            sb.Append("  LikelyStuck: ").Append(LikelyStuck).Append("\n");
            sb.Append("  Number: ").Append(Number).Append("\n");
            sb.Append("  Progress: ").Append(Progress).Append("\n");
            sb.Append("  Class: ").Append(Class).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (ReferenceEquals(null, obj)) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((HudsonMasterComputerexecutors)obj);
        }

        /// <summary>
        /// Returns true if HudsonMasterComputerexecutors instances are equal
        /// </summary>
        /// <param name="other">Instance of HudsonMasterComputerexecutors to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(HudsonMasterComputerexecutors other)
        {
            if (ReferenceEquals(null, other)) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    CurrentExecutable == other.CurrentExecutable ||
                    CurrentExecutable != null &&
                    CurrentExecutable.Equals(other.CurrentExecutable)
                ) && 
                (
                    Idle == other.Idle ||
                    Idle != null &&
                    Idle.Equals(other.Idle)
                ) && 
                (
                    LikelyStuck == other.LikelyStuck ||
                    LikelyStuck != null &&
                    LikelyStuck.Equals(other.LikelyStuck)
                ) && 
                (
                    Number == other.Number ||
                    Number != null &&
                    Number.Equals(other.Number)
                ) && 
                (
                    Progress == other.Progress ||
                    Progress != null &&
                    Progress.Equals(other.Progress)
                ) && 
                (
                    Class == other.Class ||
                    Class != null &&
                    Class.Equals(other.Class)
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (CurrentExecutable != null)
                    hashCode = hashCode * 59 + CurrentExecutable.GetHashCode();
                    if (Idle != null)
                    hashCode = hashCode * 59 + Idle.GetHashCode();
                    if (LikelyStuck != null)
                    hashCode = hashCode * 59 + LikelyStuck.GetHashCode();
                    if (Number != null)
                    hashCode = hashCode * 59 + Number.GetHashCode();
                    if (Progress != null)
                    hashCode = hashCode * 59 + Progress.GetHashCode();
                    if (Class != null)
                    hashCode = hashCode * 59 + Class.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(HudsonMasterComputerexecutors left, HudsonMasterComputerexecutors right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(HudsonMasterComputerexecutors left, HudsonMasterComputerexecutors right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}