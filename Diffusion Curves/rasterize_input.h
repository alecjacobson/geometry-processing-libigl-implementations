// Create raster images for the input color curves and 
// their gradients Wx and Wy
// 
// Optionally, you can also make the blur map from a blur source curve and blur
// paramter like in the paper
//
// see https://github.com/libigl/libigl/blob/master/include/igl/png/writePNG.h
// for details on how libigl organizes color channels
//
// Input:
//  P  #P by 2 matrix of 2D curve control points
//  Cl #P by 3 matrix of RGB left colors for each control point
//  Cr #P by 3 matrix of RGB right colors for each control point
//  w  int width of raster image
//  h  int height of raster image
// Output:
//  CR   w by h matrix of unsigned char of red pixel values for the color source curve 
//  CG   w by h matrix of unsigned char of green pixel values for the color source curve
//  CB   w by h matrix of unsigned char of blue pixel values for the color source curve

//  WxR  w by h matrix of unsigned char of red pixel values for the x gradient color curve
//  WxG  w by h matrix of unsigned char of green pixel values for the x gradient color curve
//  WxB  w by h matrix of unsigned char of blue pixel values for the x gradient curve

//  WyR  w by h matrix of unsigned char of red pixel values for the y gradient color curve
//  WyG  w by h matrix of unsigned char of green pixel values for the y gradient color curve
//  WyB  w by h matrix of unsigned char of blue  pixel values for the y gradient color curve

void rasterize_input(
    const Eigen::MatrixXd &P,
    const Eigen::MatrixXd &Cl,
    const Eigen::MatrixXd &Cr,
    const int w,
    const int h,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CR,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CG,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CB,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxR,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxG,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxB,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyR,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyG,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyB);
