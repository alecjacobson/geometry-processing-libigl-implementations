// Train a network to reconstruct an implicit function whose zero level set
// passes through the given point cloud (using weight enconding)
//
// Inputs:
//   P  #P by 3 list of point cloud point positions
// Outputs:
//   theta  #theta list of vectorized network weights
void sal(
  const Eigen::MatrixXd & P,
  Eigen::VectorXd & theta);
// Train a network to reconstruct an implicit function whose zero level set
// passes through each given given point cloud when provided the corresponding
// latent code.
//
// Inputs:
//   Ps  #Ps list of #P[i] by 3 list of point cloud point positions
// Outputs:
//   theta  #theta list of vectorized network weights
//   zs  #Ps list of #z list of latent codes 
void sal(
  const std::vector<Eigen::MatrixXd> & Ps,
  Eigen::VectorXd & theta,
  Eigen::MatirxXd & zs);
