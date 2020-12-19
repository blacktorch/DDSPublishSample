package com.cohortsys;

import MissionData.Telemetry;

public class Main {

    public static void main(String[] args) {
	// write your code here
        DDSBase.getInstance().setup(args, 10);

        Publish publish = new Publish.Builder().setDataType("NormalizedPoints")
                .setTopicString("PointsForRobot")
                .build();
        publish.setUp();
        String[] data = {"0,0", "1,0", "2,0", "3,0", "4,0", "4,-1", "4,-2", "4,-3", "4,-4"};
        publish.write("GBRE", data, 10);
        //publish.tearDown();

       // Subscribe.getInstance().start();
    }
}
