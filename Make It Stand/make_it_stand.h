// Given a surface mesh (V,F) compute the inner and outer
// meshes that represent the deformed mesh and interior 
// void boundary mesh
//
// for an example of global-local solving:
//  see the deformation assignment https://github.com/alecjacobson/geometry-processing-deformation
//
// Inputs:
//   V   #V by 3 list of vertex positions
//   F   #F by 3 list of triangle indices into the rows of V
//   W   #V by #T matrix of LBS weights
//     see https://github.com/libigl/libigl/blob/master/include/igl/lbs_matrix.h
// Outputs:
//   MoV #V by 3 list of deformed vertex positions
//   MoF #F by 3 list of face indices into rows of V
//   MiV #MiV by 3 list of inner mesh vertex positions
//   MiF #MiF by 3 list of inner mesh face indices into rows of MiV
// 
void make_it_stand(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  const Eigen::MatrixXd & W,
  Eigen::MatrixXd &MoV,
  Eigen::MatrixXi &MoF,
  Eigen::MatrixXd &MiV,
  Eigen::MatrixXi &MiF);
