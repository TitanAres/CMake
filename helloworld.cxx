#include "helloworld.h"


helloworld::helloworld(){
  std::cout << "hello world!" << std::endl;
}

helloworld::helloworld(const char * name){
  std::cout << "hello world! " << name << std::endl;
}
