package MissionData;
public abstract class _TelemetryDataWriterLocalBase extends org.omg.CORBA.LocalObject implements TelemetryDataWriter {
  private String[] _type_ids = {"IDL:MissionData/TelemetryDataWriter:1.0", "IDL:DDS/DataWriter:1.0", "IDL:DDS/Entity:1.0"};

  public String[] _ids() { return (String[])_type_ids.clone(); }
}
