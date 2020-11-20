// Given the color source image, Wx gradient image, and Wy gradient image,
// generate a sharp color image that "diffuses" the curve colors
//
// Inputs:
//  CR   w by h matrix of unsigned char of red pixel values for the color source curve 
//  CG   w by h matrix of unsigned char of green pixel values for the color source curve
//  CB   w by h matrix of unsigned char of blue pixel values for the color source curve

//  WxR  w by h matrix of unsigned char of red pixel values for the x gradient color curve
//  WxG  w by h matrix of unsigned char of green pixel values for the x gradient color curve
//  WxB  w by h matrix of unsigned char of blue pixel values for the x gradient curve

//  WyR  w by h matrix of unsigned char of red pixel values for the y gradient color curve
//  WyG  w by h matrix of unsigned char of green pixel values for the y gradient color curve
//  WyB  w by h matrix of unsigned char of blue  pixel values for the y gradient color curve
// Outputs:
//  IR  w by h matrix of unsigned char of red pixel values for the output sharp color image
//  IG  w by h matrix of unsigned char of green pixel values for the output sharp color image 
//  IB  w by h matrix of unsigned char of blue  pixel values for the output sharp color image 
// 

#include <igl/writePNG.h>

void diffusion_curves(
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CR,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CG,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& CB,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxR,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxG,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WxB,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyR,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyG,
    const Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& WyB,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& IR,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& IG,
    Eigen::Matrix<unsigned char,Eigen::Dynamic,Eigen::Dynamic>& IB);


