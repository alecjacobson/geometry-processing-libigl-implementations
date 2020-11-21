// Inputs:
//   V  #V by 3 list of mesh vertex positions
//   Fin  #Fin by 3 list of triangle indices into V
//   i   source vertex id
// Outputs:
//   Fout  #Fin by 3 list of output triangle indices
//   lout  #Fin by 3 list of output "half-edge lengths"
void geodesic_remesh(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & Fin,
  const int i,
  Eigen::MatrixXi & Fout,
  Eigen::MatrixXd & lout);
