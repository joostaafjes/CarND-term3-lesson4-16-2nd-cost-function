#include "cost.h"
#include <cmath>

double inefficiency_cost(int target_speed, int intended_lane, int final_lane,
                         const std::vector<int> &lane_speeds) {
  // Cost becomes higher for trajectories with intended lane and final lane
  // that have traffic slower than target_speed.

  // my solution
//  int delta = 2.0 * target_speed - lane_speeds[intended_lane] - lane_speeds[final_lane];
//  double cost = 1.0 - exp(-delta);

  // udacity solution:
  // Cost becomes higher for trajectories with intended lane and final lane
  //   that have traffic slower than target_speed.
  double speed_intended = lane_speeds[intended_lane];
  double speed_final = lane_speeds[final_lane];
  double cost = (2.0 * target_speed - speed_intended - speed_final)/target_speed;

  return cost;
}