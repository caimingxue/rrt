#include "gtest/gtest.h"
#include <rrt/BiRRT.hpp>
#include <rrt/2dplane/GridStateSpace.hpp>

using namespace std;

namespace RRT {

TEST(Instantiation, BiRRT) {
  BiRRT<Eigen::Vector2f> biRRT(make_shared<GridStateSpace>(50, 50, 50, 50));
}

} // namespace RRT
