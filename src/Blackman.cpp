#include "rosneuro_windows_blackman/Blackman.hpp"
#include "pluginlib/class_list_macros.h"

PLUGINLIB_EXPORT_CLASS(rosneuro::Blackman<int>,    rosneuro::Window<int>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Blackman<float>,  rosneuro::Window<float>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Blackman<double>, rosneuro::Window<double>)
