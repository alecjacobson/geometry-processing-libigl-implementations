// Takes input sample points P and gives a watertight mesh.
//
// Inputs:
//   P  #P by 3 list of input points
// Outputs:
//   V  #V by 3 list of mesh vertex positions
//   F  #F by 3 list of mesh triangle indinces into V
//
void signing_the_unsigned(
    const Eigen::MatrixXd & P,
    Eigen::MatrixXd & V,
    Eigen::MatrixXi & F);
