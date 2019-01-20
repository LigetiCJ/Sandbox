#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL2/SDL.h>
#include "MessageBus.h"
#include "TimeUtil.h"



int main(int argc, char* argv[] ){
    SDL_Init( SDL_INIT_EVERYTHING);

    std::cout<<"Hello, init"<<std::endl;


    MessageBus mb;

    MessageBusSubscriber mbs;
    MessageBusSubscriber mbs2;

    TimeUtil tu;

    tu.subscribe(&mb);
    mbs.subscribe(&mb);
    mbs2.subscribe(&mb);


    std::cout<<"Hello, World"<<std::endl;
    while(1){


    }


    SDL_Quit();
    return 0;
}

