#ifndef KITTI_PARSER_GPSIMU_H
#define KITTI_PARSER_GPSIMU_H

namespace kitti_parser {

    typedef struct {

        unsigned long timestamp;

        // lat:   latitude of the oxts-unit (deg)
        double lat;
        // lon:   longitude of the oxts-unit (deg)
        double lon;
        // alt:   altitude of the oxts-unit (m)
        double alt;
        // roll:  roll angle (rad),    0 = level, positive = left side up,      range: -pi   .. +pi
        double roll;
        // pitch: pitch angle (rad),   0 = level, positive = front down,        range: -pi/2 .. +pi/2
        double pitch;
        // yaw:   heading (rad),       0 = east,  positive = counter clockwise, range: -pi   .. +pi
        double yaw;


        // vn:    velocity towards north (m/s)
        double vn;
        // ve:    velocity towards east (m/s)
        double ve;
        // vf:    forward velocity, i.e. parallel to earth-surface (m/s)
        double vf;
        // vl:    leftward velocity, i.e. parallel to earth-surface (m/s)
        double vl;
        // vu:    upward velocity, i.e. perpendicular to earth-surface (m/s)
        double vu;


        // ax:    acceleration in x, i.e. in direction of vehicle front (m/s^2)
        double ax;
        // ay:    acceleration in y, i.e. in direction of vehicle left (m/s^2)
        double ay;
        // az:    acceleration in z, i.e. in direction of vehicle top (m/s^2)
        double az;
        // af:    forward acceleration (m/s^2)
        double af;
        // al:    leftward acceleration (m/s^2)
        double al;
        // au:    upward acceleration (m/s^2)
        double au;
        // wx:    angular rate around x (rad/s)
        double wx;
        // wy:    angular rate around y (rad/s)
        double wy;
        // wz:    angular rate around z (rad/s)
        double wz;
        // wf:    angular rate around forward axis (rad/s)
        double wf;
        // wl:    angular rate around leftward axis (rad/s)
        double wl;
        // wu:    angular rate around upward axis (rad/s)
        double wu;


        // pos_accuracy:  velocity accuracy (north/east in m)
        double pos_accuracy;
        // vel_accuracy:  velocity accuracy (north/east in m/s)
        double vel_accuracy;
        // navstat:       navigation status (see navstat_to_string)
        int navstat;
        // numsats:       number of satellites tracked by primary GPS receiver
        int numsats;
        // posmode:       position mode of primary GPS receiver (see gps_mode_to_string)
        int posmode;
        // velmode:       velocity mode of primary GPS receiver (see gps_mode_to_string)
        int velmode;
        // orimode:       orientation mode of primary GPS receiver (see gps_mode_to_string)
        int orimode;

    } gpsimu_t;

}


#endif //KITTI_PARSER_GPSIMU_H