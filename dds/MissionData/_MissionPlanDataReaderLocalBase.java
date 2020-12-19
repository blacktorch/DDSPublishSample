package MissionData;
public abstract class _MissionPlanDataReaderLocalBase extends org.omg.CORBA.LocalObject implements MissionPlanDataReader {
  private String[] _type_ids = {"IDL:MissionData/MissionPlanDataReader:1.0", "IDL:OpenDDS/DCPS/DataReaderEx:1.0", "IDL:DDS/DataReader:1.0", "IDL:DDS/Entity:1.0"};

  public String[] _ids() { return (String[])_type_ids.clone(); }
}
