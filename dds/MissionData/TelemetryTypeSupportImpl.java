package MissionData;
public class TelemetryTypeSupportImpl extends _TelemetryTypeSupportTAOPeer {
    public TelemetryTypeSupportImpl() {
        super(_jni_init());
    }
    private static native long _jni_init();
}
