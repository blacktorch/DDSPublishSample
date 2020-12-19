package MissionData;
public interface TelemetryDataWriterOperations extends DDS.DataWriterOperations {
  int register_instance(MissionData.Telemetry instance);
  int register_instance_w_timestamp(MissionData.Telemetry instance, DDS.Time_t timestamp);
  int unregister_instance(MissionData.Telemetry instance, int handle);
  int unregister_instance_w_timestamp(MissionData.Telemetry instance, int handle, DDS.Time_t timestamp);
  int write(MissionData.Telemetry instance_data, int handle);
  int write_w_timestamp(MissionData.Telemetry instance_data, int handle, DDS.Time_t source_timestamp);
  int dispose(MissionData.Telemetry instance_data, int instance_handle);
  int dispose_w_timestamp(MissionData.Telemetry instance_data, int instance_handle, DDS.Time_t source_timestamp);
  int get_key_value(MissionData.TelemetryHolder key_holder, int handle);
  int lookup_instance(MissionData.Telemetry instance_data);
}
