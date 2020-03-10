//vector math library GLM
#define GLM_FORCE_SWIZZLE
#define GLM_SWIZZLE_XYZW
#include "glm/glm.hpp" //general vector types
#include "glm/ext.hpp" //string cast
#include "glm/gtx/string_cast.hpp"
#include "glm/gtc/matrix_transform.hpp" // for glm::ortho
#include "glm/gtc/type_ptr.hpp" //to send matricies gpu-side
#include "glm/gtx/transform.hpp"

#include <random>

#include <iostream>
#include <iomanip>

using std::endl;
using std::cout;

using std::setw;

using namespace glm;
//usage details here: https://glm.g-truc.net/0.9.9/index.html


#define FMT setw(5) << std::setprecision(2) << std::fixed   //less mess



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
  vec3 temp = mat*vec;

  cout << FMT << mat[0][0] << " " << FMT << mat[1][0] << " " << FMT << mat[2][0] << "          " << FMT << vec[0] << "        " << FMT << temp[0] << endl;
  cout << FMT << mat[0][1] << " " << FMT << mat[1][1] << " " << FMT << mat[2][1] << "     *    " << FMT << vec[1] << "    =   " << FMT << temp[1] << endl;
  cout << FMT << mat[0][2] << " " << FMT << mat[1][2] << " " << FMT << mat[2][2] << "          " << FMT << vec[2] << "        " << FMT << temp[2] << endl;
  cout << endl;

  return temp;
}
