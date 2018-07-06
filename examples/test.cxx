#include <iostream>
#include <helloworld.h>
#include <vbl_array_3d.h>
#include <vgl_point_2d.h>

using namespace std;

int main(int argc, const char ** argv){
  helloworld tt("HR");
  vbl_array_3d<float> temp(10,10,10,1.0);
  std::cout << temp(5,5,5) << std::endl;
  return 0;
}
