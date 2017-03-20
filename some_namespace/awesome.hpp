#ifndef SOME_NAMESPACE_AWESOME_HPP
#define SOME_NAMESPACE_AWESOME_HPP

#include <iostream>
#include <json.hpp>
#include <boost/preprocessor/cat.hpp>

namespace some_namespace {
  inline void hello() {
    nlohmann::json j;

    j["Don't know why, but this lib depens on stuffs that I don't want to bother with "] = BOOST_PP_CAT(4, 2);

    std::cout << j.dump(2) << std::endl;
  }
}

#endif 
