#include "includes.h"

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
