#include "EfficientTruckloads.h"
#include <vector>

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
  std::vector<int> dp(numCrates, -1);
  if (numCrates == 0)
    return dp[0] == 0;
  if (numCrates <= loadSize)
    return dp[numCrates] = 1;
  if (dp[int(numCrates / 2)] == -1)
  {
    dp[int(numCrates / 2)] = numTrucks(int(numCrates / 2), loadSize);
  }
  if (dp[numCrates - int(numCrates / 2)] == -1)
  {
    dp[numCrates - int(numCrates / 2)] = numTrucks(numCrates - int(numCrates / 2), loadSize);
  }
  return dp[int(numCrates / 2)] + dp[numCrates - int(numCrates / 2)];
};