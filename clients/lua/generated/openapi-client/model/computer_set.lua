--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- computer_set class
local computer_set = {}
local computer_set_mt = {
	__name = "computer_set";
	__index = computer_set;
}

local function cast_computer_set(t)
	return setmetatable(t, computer_set_mt)
end

local function new_computer_set(_class, busy_executors, computer, display_name, total_executors)
	return cast_computer_set({
		["_class"] = _class;
		["busyExecutors"] = busy_executors;
		["computer"] = computer;
		["displayName"] = display_name;
		["totalExecutors"] = total_executors;
	})
end

return {
	cast = cast_computer_set;
	new = new_computer_set;
}