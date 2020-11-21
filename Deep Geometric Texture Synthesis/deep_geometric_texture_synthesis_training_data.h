// Given a reference mesh with a geometric texture and a low resolution template
// mesh, subdivide the template n-1 times and optimize each mesh to generate n
// taining meshes.
//
// Inputs:
//   VR  #VR by 3 list of reference mesh vertex positions
//   FR  #FR by 3 triangle indices into rows of VR
//   VT  #VT by 3 list of template mesh vertex positions
//   FT  #FT by 3 triangle indices into rows of VT
//   n  number of levels
// Outputs:
//   Vt  n-long list of lists of vertex positions
//   Ft  n-long list of list of triangle indices to that Ft[i] indexes rows of
//     Vt[i]
//
void deep_geometric_texture_synthesis(
  const Eigen::MatrixXd & VR,
  const Eigen::MatrixXi & FR,
  const Eigen::MatrixXd & VT,
  const Eigen::MatrixXi & FT,
  const int n,
  std::vector<Eigen::MatrixXd> & Vt,
  std::vector<Eigen::MatrixXi> & Ft);

