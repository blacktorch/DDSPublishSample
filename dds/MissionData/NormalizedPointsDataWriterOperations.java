package MissionData;
public interface NormalizedPointsDataWriterOperations extends DDS.DataWriterOperations {
  int register_instance(MissionData.NormalizedPoints instance);
  int register_instance_w_timestamp(MissionData.NormalizedPoints instance, DDS.Time_t timestamp);
  int unregister_instance(MissionData.NormalizedPoints instance, int handle);
  int unregister_instance_w_timestamp(MissionData.NormalizedPoints instance, int handle, DDS.Time_t timestamp);
  int write(MissionData.NormalizedPoints instance_data, int handle);
  int write_w_timestamp(MissionData.NormalizedPoints instance_data, int handle, DDS.Time_t source_timestamp);
  int dispose(MissionData.NormalizedPoints instance_data, int instance_handle);
  int dispose_w_timestamp(MissionData.NormalizedPoints instance_data, int instance_handle, DDS.Time_t source_timestamp);
  int get_key_value(MissionData.NormalizedPointsHolder key_holder, int handle);
  int lookup_instance(MissionData.NormalizedPoints instance_data);
}
