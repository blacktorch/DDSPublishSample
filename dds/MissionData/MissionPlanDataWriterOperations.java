package MissionData;
public interface MissionPlanDataWriterOperations extends DDS.DataWriterOperations {
  int register_instance(MissionData.MissionPlan instance);
  int register_instance_w_timestamp(MissionData.MissionPlan instance, DDS.Time_t timestamp);
  int unregister_instance(MissionData.MissionPlan instance, int handle);
  int unregister_instance_w_timestamp(MissionData.MissionPlan instance, int handle, DDS.Time_t timestamp);
  int write(MissionData.MissionPlan instance_data, int handle);
  int write_w_timestamp(MissionData.MissionPlan instance_data, int handle, DDS.Time_t source_timestamp);
  int dispose(MissionData.MissionPlan instance_data, int instance_handle);
  int dispose_w_timestamp(MissionData.MissionPlan instance_data, int instance_handle, DDS.Time_t source_timestamp);
  int get_key_value(MissionData.MissionPlanHolder key_holder, int handle);
  int lookup_instance(MissionData.MissionPlan instance_data);
}
