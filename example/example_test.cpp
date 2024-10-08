#include "example.hpp"

#include <boost/ut.hpp>
#include <cstdlib>

auto main() -> int {
  using ::boost::ut::eq;
  using ::boost::ut::expect;
  using ::boost::ut::fatal;
  using ::boost::ut::test;
  using ::boost::ut::log;
  using namespace example;

  test("dummy test") = [] {
    log << "replace this with a meaningful test\n";
    Example ex;
    expect(not eq(&ex, nullptr));
  };

  return EXIT_SUCCESS;
}
