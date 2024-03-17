#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize)
{
  if (numCrates == 0)
    return 0;
  if (numCrates <= loadSize)
    return 1;
  return numTrucks(int(numCrates / 2), loadSize) + numTrucks(numCrates - (numCrates / 2), loadSize);
};