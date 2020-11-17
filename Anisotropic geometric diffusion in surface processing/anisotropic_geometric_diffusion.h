// Given a possibly noisy surface mesh (X0,F) compute a sequence of n new vertex
// positions describing the anisotropic diffusion of its geometry. 
//
// Inputs:
//   X0  #X0 by 3 list of vertex positions
//   F  #F by 3 list of triangle indices into the rows of X0
//   tao  positive scalar timestep amount
//   n  positive number of timesteps to take
//   lambda  threshold parameter for sharp features (in simple G model)
// Outputs:
//   X  n-long list of #X0 by 3 lists of vertex positions
// 
void anisotropic_geometric_diffusion(
  const Eigen::MatrixXd & X0,
  const Eigen::MatrixXi & F,
  const double tao,
  const double n,
  const double lambda,
  std::vector<Eigen::MatrixXd> & X);
