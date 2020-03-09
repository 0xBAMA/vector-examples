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

//usage details here: https://glm.g-truc.net/0.9.9/index.html


using namespace glm;

int main(int argc, char const *argv[])
{
  vec3 vec;
  mat3 mat = mat3(1.0f);    //initialize with identity

  std::cout<<glm::to_string(mat)<<std::endl;

  return 0;
}
