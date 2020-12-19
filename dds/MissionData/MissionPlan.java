package MissionData;
public final class MissionPlan implements java.io.Serializable {
  public String from;
  public int planId;
  public String[] plan_data;
  public String[] obstacles;

  public MissionPlan() {}

  public MissionPlan(String _from, int _planId, String[] _plan_data, String[] _obstacles) {
    from = _from;
    planId = _planId;
    plan_data = _plan_data;
    obstacles = _obstacles;
  }
}
