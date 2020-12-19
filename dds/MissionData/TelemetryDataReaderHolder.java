package MissionData;
public final class TelemetryDataReaderHolder {
  // TypeCode operations not currently implemented
  public TelemetryDataReader value;
  public TelemetryDataReaderHolder() {}
  public TelemetryDataReaderHolder(TelemetryDataReader initial) {
    value = initial;
  }
}
