// Consider a tetrahedron with undeformed (material space) vertex positions, given an arbitrary interior point,
// we compute its displaced position using Phong Deformation Model.
//
// Inputs:
//   V  #V by 3 list of undeformed vertex positions (material space) Each row is a single undefored vertex position
//   e   1 by 4 vertex indices for this tetrahedron
//   X   3 by 1 undeformed query point position inside this tetrahedron
// Outputs:
//   x   3 by 1 deformed query point position
void phong_deformation(
  const Eigen::Vector3d & V, 
  const Eigen::RowVectorXi & e,
  const Eigen::MatrixXd & X,
  Eigen::Vector3d & x);