--[[
  Swaggy Jenkins
 
  Jenkins API clients generated from Swagger / Open API specification
 
  OpenAPI spec version: 1.0.0
  Contact: blah@cliffano.com
  Generated by: https://openapi-generator.tech
]]

-- pipeline_branchesitemlatest_run class
local pipeline_branchesitemlatest_run = {}
local pipeline_branchesitemlatest_run_mt = {
	__name = "pipeline_branchesitemlatest_run";
	__index = pipeline_branchesitemlatest_run;
}

local function cast_pipeline_branchesitemlatest_run(t)
	return setmetatable(t, pipeline_branchesitemlatest_run_mt)
end

local function new_pipeline_branchesitemlatest_run(duration_in_millis, estimated_duration_in_millis, en_queue_time, end_time, id, organization, pipeline, result, run_summary, start_time, state, type, commit_id, _class)
	return cast_pipeline_branchesitemlatest_run({
		["durationInMillis"] = duration_in_millis;
		["estimatedDurationInMillis"] = estimated_duration_in_millis;
		["enQueueTime"] = en_queue_time;
		["endTime"] = end_time;
		["id"] = id;
		["organization"] = organization;
		["pipeline"] = pipeline;
		["result"] = result;
		["runSummary"] = run_summary;
		["startTime"] = start_time;
		["state"] = state;
		["type"] = type;
		["commitId"] = commit_id;
		["_class"] = _class;
	})
end

return {
	cast = cast_pipeline_branchesitemlatest_run;
	new = new_pipeline_branchesitemlatest_run;
}