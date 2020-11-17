// Given a possibly non-manifold triangle mesh (V,F) build a "tufted cover".
// Uses the vertex positions to determine the cyclice ordering of faces around
// each edge and then builds duplicated face mesh with glue map.
//
// Inputs:
//   V  #V by dim list of vertex positions
//   F  #F by 3 list of triangle indices
// Outputs:
//   Ftilde  2#F by 3 list of triangle indices
//   Gtilde  2#F by 3 "Glue map"
//   
void tufted_cover(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  Eigen::MatrixXi & Ftilde,
  Eigen::MatrixXi & Gtilde);
