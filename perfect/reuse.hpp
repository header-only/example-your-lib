#ifndef PERFECT_REUSE_HPP
#define PERFECT_REUSE_HPP

#include <some_namespace/awesome.hpp>

namespace perfect {
  void reuse_me_please() {
    some_namespace::hello();
    std::cout << "Don't you find it a good dependency ? " << std::endl;
  }
}

#endif
