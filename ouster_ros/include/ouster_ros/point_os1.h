#pragma once
#define PCL_NO_PRECOMPILE
#include <pcl/point_types.h>

namespace ouster_ros {
namespace OS1 {

struct EIGEN_ALIGN16 PointOS1 {
    PCL_ADD_POINT4D;
    uint16_t intensity;
    uint16_t reflectivity;
    uint8_t ring;
    float t;
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
};
}
}

POINT_CLOUD_REGISTER_POINT_STRUCT(ouster_ros::OS1::PointOS1,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (uint16_t, intensity, intensity)
    (uint16_t, reflectivity, reflectivity)
    (uint8_t, ring, ring)
    (float, t, t)
)

