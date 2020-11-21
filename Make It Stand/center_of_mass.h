// Compute the center of mass of a mesh V,F
// Honestly, you can probably use https://github.com/libigl/libigl/blob/master/include/igl/centroid.h
// it also gives you the volume!
//
// Input:
//  V #V by 3 list of vertex positions
//  F #F by 3 list of triangle indices into rows of V
//
// Output:
//  C 3D vector of the center of mass of V,F
//

void center_of_mass(
    const Eigen::MatrixXd &V,
    const Eigen::MatrixXi &F,
    Eigen::Vector3d &C);
