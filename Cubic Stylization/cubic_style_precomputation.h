// Precompute data needed to efficiently conduct local-global iterations for
// cubic stylization.
//
// Inputs:
//   V  #V by 3 list of vertex positions
//   F  #F by 3 list of triangle indices into the rows of V
//   data struct that may contain additional input constraints etc
// Outputs:
//   data struct that contains all the precomputed information for cubic stylization
void cubic_style_precomputation(
	const Eigen::MatrixXd & V,
    const Eigen::MatrixXi & F,
    cubic_style_data & data);