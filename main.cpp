#include <SDL2/SDL.h>
#include <cstdlib>
#include <iostream>

int main(int argc, char *argv[]) {
  if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) {
    SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
    return 1;
  }
  SDL_version compiled;

  SDL_VERSION(&compiled);


  std::cout << "SDL version "
              << static_cast<int>(compiled.major) << '.'
              << static_cast<int>(compiled.minor) << '.'
              << static_cast<int>(compiled.patch) << std::endl;

  bool is_good = std::cout.good();
  int result = is_good ? EXIT_SUCCESS : EXIT_FAILURE;
  return result;
}
