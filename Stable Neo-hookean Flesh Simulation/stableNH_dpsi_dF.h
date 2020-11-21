// Inputs:
//   F   3 by 3 dense deformation gradient
//   mu   Mu (Material Parameter)
//   lambda   Lambda (Material Parameter)
// Outputs:
//   dpsi 9 by 1 gradient of the stable Neo-hookean energy wrt the deformation gradient
void stableNH_dpsi_dF(
    const Eigen::Matrix3d & F,
    const double & mu,
    const double & lambda,
    Eigen::VectorXd & dpsi);