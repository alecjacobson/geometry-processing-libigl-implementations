// Given a possibly non-manifold mesh, constructed the tufted cover Laplacian
// and mass matrix
//
// Inputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangle indices into the rows of V
// Outputs:
//   L  #V by #V sparse Laplacian matrix
//   B  #V by #V sparse mass matrix
void tufted_cover_laplacian(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & F,
  Eigen::SparseMatrix<double> & L,
  Eigen::SparseMatrix<double> & B);
