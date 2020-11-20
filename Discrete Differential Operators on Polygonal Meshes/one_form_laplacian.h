// Laplacian
//
// Inputs:
//   V  #V by 3 list of mesh vertex positions
//   I  #I vectorized list of polygon corner indices into rows of some matrix V
//   C  #polygons+1 list of cumulative polygon sizes so that C(i+1)-C(i) = size of
//     the ith polygon, and so I(C(i)) through I(C(i+1)-1) are the indices of
//     the ith polygon
// Outputs:
//   L  polygon Laplacian for one forms
void one_form_laplacian(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & I,
  const Eigen::MatrixXi & C,
  Eigen::SparseMatrix<double> & L);


