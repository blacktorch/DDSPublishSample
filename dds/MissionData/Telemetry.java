package MissionData;
public final class Telemetry implements java.io.Serializable {
  public String from;
  public int telemetryId;
  public String[] telemetry_data;
  public byte[] image;

  public Telemetry() {}

  public Telemetry(String _from, int _telemetryId, String[] _telemetry_data, byte[] _image) {
    from = _from;
    telemetryId = _telemetryId;
    telemetry_data = _telemetry_data;
    image = _image;
  }
}
