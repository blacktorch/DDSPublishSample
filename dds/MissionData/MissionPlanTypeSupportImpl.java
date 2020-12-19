package MissionData;
public class MissionPlanTypeSupportImpl extends _MissionPlanTypeSupportTAOPeer {
    public MissionPlanTypeSupportImpl() {
        super(_jni_init());
    }
    private static native long _jni_init();
}
