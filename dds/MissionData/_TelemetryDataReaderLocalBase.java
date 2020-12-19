package MissionData;
public abstract class _TelemetryDataReaderLocalBase extends org.omg.CORBA.LocalObject implements TelemetryDataReader {
  private String[] _type_ids = {"IDL:MissionData/TelemetryDataReader:1.0", "IDL:OpenDDS/DCPS/DataReaderEx:1.0", "IDL:DDS/DataReader:1.0", "IDL:DDS/Entity:1.0"};

  public String[] _ids() { return (String[])_type_ids.clone(); }
}
