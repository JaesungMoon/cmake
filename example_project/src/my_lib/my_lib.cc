#include <iostream>

#include "my_lib.h"
#include "config.hpp"
void print_hello_world() {
  std::cout << project_name << " " << project_version << std::endl;
  std::cout << "Hello, World!" << std::endl;
}
