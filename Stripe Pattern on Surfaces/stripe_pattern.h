// Given the surface mesh (V,E,F), generate a pattern of oscillating stripes orthogonal to X
// with frequency v
//
//
// Inputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangle indices into the rows of V
//   E  #E by 2 list of edges in no particular order
//   l  #l by 1 list of edge lengths
//   X  #V by 1 list of desired pattern orientations
//   v  #V by 1 list of target line frequency
// Outputs:
//   alpha   (3*#F+2*#B) by 1 texture coordinates
//   nijk     #F by 1 indicates whether nonlinear interpolation should be applied in this triangle
//   Sijk     #F by 1 indicates whether barycentric subdivision should be drawn in this triangle
void stripe_pattern(
  const Eigen::MatrixXd & V, 
  const Eigen::MatrixXi & F,
  const Eigen::MatrixXi & E,
  const Eigen::VectorXd & l,
  const Eigen::VectorXcd & X,
  const Eigen::VectorXd & v,
  Eigen::VectorXd & alpha,
  Eigen::VectorXi & nijk,
  Eigen::VectorXi & Sijk);