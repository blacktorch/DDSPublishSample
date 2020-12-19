package MissionData;
public final class NormalizedPoints implements java.io.Serializable {
  public String from;
  public int pointsId;
  public String[] points_data;

  public NormalizedPoints() {}

  public NormalizedPoints(String _from, int _pointsId, String[] _points_data) {
    from = _from;
    pointsId = _pointsId;
    points_data = _points_data;
  }
}
