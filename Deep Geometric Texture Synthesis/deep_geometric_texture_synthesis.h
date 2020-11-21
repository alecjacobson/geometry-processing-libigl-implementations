// Given a texture-less target mesh (Vtarget,Ftarget) and a pre-trained
// generator that goes between n levels, output a new (n-1)-times subdivided
// mesh with generated textures.
//
// Inputs:
//   Vtarget  #Vtarget by 3 list of reference mesh vertex positions
//   Ftarget  #Ftarget by 3 triangle indices into rows of Vtarget
//   theta_g  (n-1)-long list of #theta_g vectorized list of generator weights
// Outputs:
//   Vresult  #Vresult by 3 list of template mesh vertex positions
//   Fresult  #Fresult by 3 triangle indices into rows of Vresult
void deep_geometric_texture_synthesis(
  const Eigen::MatrixXd & Vtarget,
  const Eigen::MatrixXi & Ftarget,
  const std::vector<Eigen::VectorXd> & theta_g,
  const Eigen::MatrixXd & Vresult,
  const Eigen::MatrixXi & Fresult);
