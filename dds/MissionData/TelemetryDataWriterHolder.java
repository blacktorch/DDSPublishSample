package MissionData;
public final class TelemetryDataWriterHolder {
  // TypeCode operations not currently implemented
  public TelemetryDataWriter value;
  public TelemetryDataWriterHolder() {}
  public TelemetryDataWriterHolder(TelemetryDataWriter initial) {
    value = initial;
  }
}
