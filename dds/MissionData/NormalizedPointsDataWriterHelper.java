package MissionData;
public abstract class NormalizedPointsDataWriterHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:MissionData/NormalizedPointsDataWriter:1.0"; }
  public static NormalizedPointsDataWriter narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof NormalizedPointsDataWriter)
      return (NormalizedPointsDataWriter)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static NormalizedPointsDataWriter unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof NormalizedPointsDataWriter)
      return (NormalizedPointsDataWriter)obj;
    else
      return native_unarrow(obj);
  }

  private native static NormalizedPointsDataWriter native_unarrow(org.omg.CORBA.Object obj);

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
