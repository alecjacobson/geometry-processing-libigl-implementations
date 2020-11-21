// Assume the input animation and simulation use the same tetrahedron mesh
// 
// Given the rest mesh (V,T), at the frame t, we find the complementary displacement Uc
// to add dynamics secondary effects to the input rig displacement Ur.
//
// Inputs:
//   V  #V by 3 list of rest mesh vertex positions
//   T  #T by 4 list tetrahedra indices into rows of V
//   M  #V*3 by #V*3 sparse mass matrix
//   Ur #V by 3 rig displacement at the current frame
//   J  #V*3 by m dense rig jacobian at the current frame
//   g  #V*3 by 1 gradient of the elasticity potential
//   H  #V*3 by #V*3 hessian of the elasticity potential
//   dt time step
//   energy(V,T,Ur,Uc,dt) a function that computes the total energy of the FEM system (for doing line search)
// Outputs:
//   Uc #V by 3 complementary displacement at the current frame
template<typename ENERGY>
void complementary_displacement(
  const Eigen::MatrixXd & V, 
  const Eigen::MatrixXi & T, 
  const Eigen::SparseMatrix<double> & M,
  const Eigen::MatrixXd & Ur,
  const Eigen::MatrixXd & J,
  const Eigen::MatrixXd & g,
  const Eigen::SparseMatrix<double> & H,
  const double & dt,
  ENERGY & energy,
  Eigen::MatrixXd & Uc);