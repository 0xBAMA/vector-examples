//vector math library GLM
#define GLM_FORCE_SWIZZLE
#define GLM_SWIZZLE_XYZW
#include "glm/glm.hpp" //general vector types
#include "glm/ext.hpp" //string cast
#include "glm/gtx/string_cast.hpp"
#include "glm/gtc/matrix_transform.hpp" // for glm::ortho
#include "glm/gtc/type_ptr.hpp" //to send matricies gpu-side
#include "glm/gtx/transform.hpp"

#include <iostream>
#include <iomanip>

using std::endl;
using std::cout;

using std::setw;

using namespace glm;
//usage details here: https://glm.g-truc.net/0.9.9/index.html



void print_matrix(mat3 mat)
{
  // std::cout<<glm::to_string(mat)<<std::endl; //this works, but it's ugly
  cout << setw(5) << mat[0][0] << " " << setw(5) << mat[1][0] << " " << setw(5) << mat[2][0] << endl;
  cout << setw(5) << mat[0][1] << " " << setw(5) << mat[1][1] << " " << setw(5) << mat[2][1] << endl;
  cout << setw(5) << mat[0][2] << " " << setw(5) << mat[1][2] << " " << setw(5) << mat[2][2] << endl;
  cout << endl;
}
