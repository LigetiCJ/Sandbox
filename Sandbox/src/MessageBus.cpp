#include "MessageBus.h"
#include <iostream>
#include <vector>

MessageBus::MessageBus()
{
    std::cout<<"mb created"<<std::endl;
}

MessageBus::~MessageBus(){}

void MessageBus::Update(){
    std::cout<<"updated"<<std::endl;
    for(int i = 0; i < (sizeof(subs)/sizeof(*subs)); i++){

    }
}



void MessageBus::AddSubscriber(MessageBusSubscriber* mbs){
    std::cout<<"new sub: "<< mbs <<std::endl;

    for(int i = 0; i < (sizeof(subs)/sizeof(*subs)); i++){
        if(subs[i] == 0){
            subs[i] = mbs;
            break;
        }
    }
    for(int i = 0; i < (sizeof(subs)/sizeof(*subs)); i++)
        std::cout << i <<": " << subs[i] << std::endl;


}




