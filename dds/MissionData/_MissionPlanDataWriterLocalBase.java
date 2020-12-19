package MissionData;
public abstract class _MissionPlanDataWriterLocalBase extends org.omg.CORBA.LocalObject implements MissionPlanDataWriter {
  private String[] _type_ids = {"IDL:MissionData/MissionPlanDataWriter:1.0", "IDL:DDS/DataWriter:1.0", "IDL:DDS/Entity:1.0"};

  public String[] _ids() { return (String[])_type_ids.clone(); }
}
