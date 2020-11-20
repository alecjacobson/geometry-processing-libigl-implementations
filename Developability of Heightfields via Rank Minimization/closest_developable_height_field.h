// Given a surface represented as a height-field image, outputs a new image that
// is the closest developable height-field field as defined by minimizing an
// input fidelity term and a non-developability smoothness term
//
// Inputs:
//   H  #w by #h matrix of height values over a regular rectangular grid
//   lambda  scalar parameter (lamda→∞ more faithful to input, λ→0 more
//     developable/bigger developable patches)
// Outputs:
//   Z  #w by #h matrix of output height values
void closest_developable_height_field(
  const Eigen::MatrixXd & H,
  const double lambda,
  Eigen::MatrixXd & Z);
