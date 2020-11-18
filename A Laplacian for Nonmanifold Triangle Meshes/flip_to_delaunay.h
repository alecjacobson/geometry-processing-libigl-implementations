// Given a tufted cover (edge-manifold mesh) with glue map and edge intrinsic
// lengths, flip edges until all are intrinsic Delaunay recording new intrinsic
// edge lengths.
//
// Inputs:
//   Fin  #Fin by 3 list of triangle indices into some list of vertex positions
//     V (not needed here)
//   Gin  #Fin by 3 glue map
//   lin  #Fin by 3 list of intrinsic edge lengths lin(f,0) corresponds to edge
//     between edge F(f,1)-F(f,2) opposite the vertex F(f,0)
// Outputs:
//   Fout  #Fin by 3 list of triangle indices 
//   Gout  #Fin by 3 glue map
//   lout  #Fin by 3 list of intrinsic edge lengths
void flip_to_delaunay(
  const Eigen::MatrixXi & Fin,
  const Eigen::MatrixXi & Gin,
  const Eigen::MatrixXd & lin,
  Eigen::MatrixXi & Fout,
  Eigen::MatrixXi & Gout,
  Eigen::MatrixXd & lout);
