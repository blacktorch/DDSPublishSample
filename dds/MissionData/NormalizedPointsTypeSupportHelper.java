package MissionData;
public abstract class NormalizedPointsTypeSupportHelper {
  // Any and TypeCode operations not currently implemented
  public static String id() { return "IDL:MissionData/NormalizedPointsTypeSupport:1.0"; }
  public static NormalizedPointsTypeSupport narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof NormalizedPointsTypeSupport)
      return (NormalizedPointsTypeSupport)obj;
    else if (!obj._is_a (id ()))
      throw new org.omg.CORBA.BAD_PARAM ();
    else
      return native_unarrow(obj);
  }

  public static NormalizedPointsTypeSupport unchecked_narrow(org.omg.CORBA.Object obj) {
    if (obj == null)
      return null;
    else if (obj instanceof NormalizedPointsTypeSupport)
      return (NormalizedPointsTypeSupport)obj;
    else
      return native_unarrow(obj);
  }

  private native static NormalizedPointsTypeSupport native_unarrow(org.omg.CORBA.Object obj);

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
