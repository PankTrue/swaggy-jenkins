--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- hudson_master_computer class
local hudson_master_computer = {}
local hudson_master_computer_mt = {
	__name = "hudson_master_computer";
	__index = hudson_master_computer;
}

local function cast_hudson_master_computer(t)
	return setmetatable(t, hudson_master_computer_mt)
end

local function new_hudson_master_computer(_class, display_name, executors, icon, icon_class_name, idle, jnlp_agent, launch_supported, load_statistics, manual_launch_allowed, monitor_data, num_executors, offline, offline_cause, offline_cause_reason, temporarily_offline)
	return cast_hudson_master_computer({
		["_class"] = _class;
		["displayName"] = display_name;
		["executors"] = executors;
		["icon"] = icon;
		["iconClassName"] = icon_class_name;
		["idle"] = idle;
		["jnlpAgent"] = jnlp_agent;
		["launchSupported"] = launch_supported;
		["loadStatistics"] = load_statistics;
		["manualLaunchAllowed"] = manual_launch_allowed;
		["monitorData"] = monitor_data;
		["numExecutors"] = num_executors;
		["offline"] = offline;
		["offlineCause"] = offline_cause;
		["offlineCauseReason"] = offline_cause_reason;
		["temporarilyOffline"] = temporarily_offline;
	})
end

return {
	cast = cast_hudson_master_computer;
	new = new_hudson_master_computer;
}