// Inputs:
//   F   3 by 3 dense deformation gradient
//   mu   Mu (Material Parameter)
//   lambda   Lambda (Material Parameter)
// Outputs:
//   psi stable Neo-hookean energy
void stableNH_psi(
    const Eigen::Matrix3d & F,
    const double & mu,
    const double & lambda,
    double & psi);