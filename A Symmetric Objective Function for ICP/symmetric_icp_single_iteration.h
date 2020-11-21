// Conduct a single iteration of the iterative closest point method using the symmetic 
// objective to align (VX,FX) to (VY,FY) by finding the rigid transformation (R,t)
//
// Inputs:
//   VX  #VX by 3 list of mesh vertex positions
//   FX  #FX by 3 list of triangle mesh indices into VX
//   VY  #VY by 3 list of mesh vertex positions
//   FY  #FY by 3 list of triangle mesh indices into VY
// Outputs:
//   R  3 by 3 rotation matrix
//   t  3d translation vector 
void symmetric_icp_single_iteration(
  const Eigen::MatrixXd & VX,
  const Eigen::MatrixXi & FX,
  const Eigen::MatrixXd & VY,
  const Eigen::MatrixXi & FY,
  Eigen::Matrix3d & R,
  Eigen::RowVector3d & t);