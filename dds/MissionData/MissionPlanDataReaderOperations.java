package MissionData;
public interface MissionPlanDataReaderOperations extends OpenDDS.DCPS.DataReaderExOperations {
  int read(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int sample_states, int view_states, int instance_states);
  int take(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int sample_states, int view_states, int instance_states);
  int read_w_condition(MissionData.MissionPlanSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, DDS.ReadCondition a_condition);
  int take_w_condition(MissionData.MissionPlanSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, DDS.ReadCondition a_condition);
  int read_next_sample(MissionData.MissionPlanHolder received_data, DDS.SampleInfoHolder sample_info);
  int take_next_sample(MissionData.MissionPlanHolder received_data, DDS.SampleInfoHolder sample_info);
  int read_instance(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int take_instance(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int read_instance_w_condition(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int a_handle, DDS.ReadCondition a_condition);
  int take_instance_w_condition(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int a_handle, DDS.ReadCondition a_condition);
  int read_next_instance(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int take_next_instance(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq, int max_samples, int a_handle, int sample_states, int view_states, int instance_states);
  int read_next_instance_w_condition(MissionData.MissionPlanSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int previous_handle, DDS.ReadCondition a_condition);
  int take_next_instance_w_condition(MissionData.MissionPlanSeqHolder data_values, DDS.SampleInfoSeqHolder sample_infos, int max_samples, int previous_handle, DDS.ReadCondition a_condition);
  int return_loan(MissionData.MissionPlanSeqHolder received_data, DDS.SampleInfoSeqHolder info_seq);
  int get_key_value(MissionData.MissionPlanHolder key_holder, int handle);
  int lookup_instance(MissionData.MissionPlan instance_data);
}
