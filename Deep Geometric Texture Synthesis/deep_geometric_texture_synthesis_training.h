// Given a sequence of meshes as training data, train a descriminator and
// generator gowing from each scale to the next.
//
// Inputs:
//   Vt  n-long list of lists of vertex positions
//   Ft  n-long list of list of triangle indices to that Ft[i] indexes rows of
//     Vt[i]
// Outputs:
//   theta_d  (n-1)-long list of #theta_d vectorized list of discriminator weights
//   theta_g  (n-1)-long list of #theta_g vectorized list of generator weights
void deep_geometric_texture_synthesis_training(
  std::vector<Eigen::MatrixXd> & Vt,
  std::vector<Eigen::MatrixXi> & Ft,
  std::vector<Eigen::VectorXd> & theta_d,
  std::vector<Eigen::VectorXd> & theta_g);
