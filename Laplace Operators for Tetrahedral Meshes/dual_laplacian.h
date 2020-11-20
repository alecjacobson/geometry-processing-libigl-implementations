// Inputs:
//   V  #V by 3 list of vertex positions
//   T  #T by 4 list tetrahedra indices into rows of V
// Outputs:
//   L  #V by #V sparse dual laplacian
//   M  #V by #V sparse dual mass matrix
void dual_laplacian(
  const Eigen::MatrixXd& V, 
  const Eigen::MatrixXi& T, 
  Eigen::SparseMatrix<double>& L, 
  Eigen::SparseMatrix<double>& M);
