package MissionData;
public abstract class MissionPlanDataReaderHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:MissionData/MissionPlanDataReader:1.0"; }
  public static MissionPlanDataReader narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof MissionPlanDataReader)
      return (MissionPlanDataReader)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static MissionPlanDataReader unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof MissionPlanDataReader)
      return (MissionPlanDataReader)obj;
    else
      return native_unarrow(obj);
  }

  private native static MissionPlanDataReader native_unarrow(org.omg.CORBA.Object obj);

  static {
    String propVal = System.getProperty("opendds.native.debug");
    if (propVal != null && ("1".equalsIgnoreCase(propVal) ||
        "y".equalsIgnoreCase(propVal) ||
        "yes".equalsIgnoreCase(propVal) ||
        "t".equalsIgnoreCase(propVal) ||
        "true".equalsIgnoreCase(propVal)))
      System.loadLibrary("MissionDatad");
    else System.loadLibrary("MissionData");
  }

}
