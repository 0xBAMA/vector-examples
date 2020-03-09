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
using std::endl;
using std::cout;

//usage details here: https://glm.g-truc.net/0.9.9/index.html


using namespace glm;


// std::cout<<glm::to_string(mat)<<std::endl; //this works, but it's ugly

void print_matrix(mat3 mat)
{
  cout << mat[0][0] << " " << mat[1][0] << " " << mat[2][0] << endl;
  cout << mat[0][1] << " " << mat[1][1] << " " << mat[2][1] << endl;
  cout << mat[0][2] << " " << mat[1][2] << " " << mat[2][2] << endl;
  cout << endl;
}


int main(int argc, char const *argv[])
{
  vec3 vec;
  mat3 mat = mat3(1.0f);    //initialize with identity

  print_matrix(mat);


  //reference is done with mat[column][row]
  mat[0][0] = 5.0f;
  mat[0][1] = 5.0f;

  print_matrix(mat);

  return 0;
}
