// Copyright 2017-2023, Nicholas Sharp and the Polyscope contributors. https://polyscope.run

#pragma once

#include "polyscope/quantity.h"
#include "polyscope/structure.h"

namespace polyscope {

// Forward delcare point cloud
class PointCloud;

// Extend Quantity<PointCloud> to add a few extra functions
class PointCloudQuantity : public QuantityS<PointCloud> {
public:
  PointCloudQuantity(std::string name, PointCloud& parentStructure, bool dominates = false);
  virtual ~PointCloudQuantity() {};

  // Build GUI info about a point
  virtual void buildInfoGUI(size_t pointInd);
};


} // namespace polyscope
