#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <gsl/gsl>
#include <vulkan/vulkan.h>

#include <cmath>
#include <cstdint>
#include <filesystem>
#include <iostream>

int main(std::int32_t argc, gsl::zstring* argv) {
  gsl::span<gsl::zstring> arguments(argv, argc);
  std::sort(arguments.begin(), arguments.end());

  gsl::not_null<gsl::zstring*> arguments_pointer_validated = argv;

  std::uint32_t count = 0;
  std::size_t size = 12;

  std::float_t s = 0.0f;

  std::cout << "Hello, World!" << std::endl;
}
