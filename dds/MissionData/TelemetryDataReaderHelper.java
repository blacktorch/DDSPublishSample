package MissionData;
public abstract class TelemetryDataReaderHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:MissionData/TelemetryDataReader:1.0"; }
  public static TelemetryDataReader narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof TelemetryDataReader)
      return (TelemetryDataReader)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static TelemetryDataReader unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof TelemetryDataReader)
      return (TelemetryDataReader)obj;
    else
      return native_unarrow(obj);
  }

  private native static TelemetryDataReader native_unarrow(org.omg.CORBA.Object obj);

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
