// Compute corrected curvature values at vertices
//
// Inputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangles indices
//   N  #V by 3 list of normals
// Outputs:
//   K1  #V by 1 list of min curvatures
//   D1  #V by 3 list of min curvature directions
//   K2  #V by 1 list of max curvatures
//   D2  #V by 3 list of max curvature directions
void corrected_curvature(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    const Eigen::MatrixXd & N,
    const Eigen::VectorXd & K1,
    const Eigen::MatrixXd & D1,
    const Eigen::VectorXd & K2,
    const Eigen::MatrixXd & D2);
// Inputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangles indices
//   I  #P list of indices into F
//   BC  #P by 3 list of barycentric coordinates
//   N  #P by 3 list of normals
// Outputs:
//   K1  #P by 1 list of min curvatures
//   D1  #P by 3 list of min curvature directions
//   K2  #P by 1 list of max curvatures
//   D2  #P by 3 list of max curvature directions
void corrected_curvature(
    const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    const Eigen::MatrixXd & N,
    const Eigen::VectorXd & K1,
    const Eigen::MatrixXd & D1,
    const Eigen::VectorXd & K2,
    const Eigen::MatrixXd & D2);
