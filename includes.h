//vector math library GLM
//usage details here: https://glm.g-truc.net/0.9.9/index.html
#define GLM_FORCE_SWIZZLE
#define GLM_SWIZZLE_XYZW
#include "glm/glm.hpp" //general vector types
#include "glm/ext.hpp" //string cast
#include "glm/gtx/string_cast.hpp"
#include "glm/gtc/matrix_transform.hpp" // for glm::ortho
#include "glm/gtc/type_ptr.hpp" //to send matricies gpu-side
#include "glm/gtx/transform.hpp"

//random number generation
#include <random>

//io stuff
#include <iostream>
#include <iomanip>

using std::endl;
using std::cout;

//output formatting
using std::setw;
#define FMT setw(5) << std::setprecision(2) << std::fixed   //less mess

//so you don't have to do 'glm::vec3' and 'glm::mat3' all over the place
//note that there are quite a few other types, as well
using glm::vec3;
using glm::mat3;



//I wrote these two functions so you can see formatted math operations, the way you'd write them symbolically
//  that being said - if you wanted to do other operations, you'd have to define similar functions

void print_matrix(mat3 mat)
{
  // std::cout<<glm::to_string(mat)<<std::endl; //this works, but it's ugly
  cout << FMT << mat[0][0] << " " << FMT << mat[1][0] << " " << FMT << mat[2][0] << endl;
  cout << FMT << mat[0][1] << " " << FMT << mat[1][1] << " " << FMT << mat[2][1] << endl;
  cout << FMT << mat[0][2] << " " << FMT << mat[1][2] << " " << FMT << mat[2][2] << endl;
  cout << endl;
}

vec3 print_matrix_times_vector(mat3 mat, vec3 vec)
{
  vec3 temp = mat*vec;   //this is as hard as matrix multiplication is

  cout << FMT << mat[0][0] << " " << FMT << mat[1][0] << " " << FMT << mat[2][0] << "          " << FMT << vec[0] << "        " << FMT << temp[0] << endl;
  cout << FMT << mat[0][1] << " " << FMT << mat[1][1] << " " << FMT << mat[2][1] << "     *    " << FMT << vec[1] << "    =   " << FMT << temp[1] << endl;
  cout << FMT << mat[0][2] << " " << FMT << mat[1][2] << " " << FMT << mat[2][2] << "          " << FMT << vec[2] << "        " << FMT << temp[2] << endl;
  cout << endl;

  return temp;
}
