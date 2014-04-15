#include <SDL/SDL.h>
#include <iostream>
#include <string>

class Initial {
  public:
    void create() {
      SDL_Init(SDL_INIT_EVERYTHING);
      std::cout << "Tanner is your mom" << std::endl;
    }
    
    void mainLoop() {
      //Create global stuff 
      SDL_Event *event;
      SDL_Surface *buffer;
      
      while(event.type != SDL_QUIT)
      {
        /*************
         * Order of Operations:
         * Poll Event via SDL_PollEvent( event );
         * if else statements
         * Update background
         * Blit background && other imgs to buffer
         * SDL_Flip buffer;
         * ***************/
         
      }
      
    }
};
