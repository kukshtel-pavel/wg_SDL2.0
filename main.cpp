#include <cstdlib>
#include <iostream>
#include "SDL2/SDL.h"

int main(int argc, char* args[]) {

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_version compiled;
  SDL_version linked;

  SDL_VERSION(&compiled);
  SDL_GetVersion(&linked);

  std::cout << "SDL version -"
            << static_cast<int>(compiled.major) << '.'
            << static_cast<int>(compiled.minor) << '.'
            << static_cast<int>(compiled.patch) << std::endl;
  std::cout << "linking SDL version -"
            << static_cast<int>(linked.major) << '.'
            << static_cast<int>(linked.minor) << '.'
            << static_cast<int>(linked.patch) << std::endl;

  bool is_good = std::cout.good();
  int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;

  return result;

}
