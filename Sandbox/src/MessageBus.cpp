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
}



void MessageBus::AddSubscriber(MessageBusSubscriber* mbs){
    std::cout<<"new sub: "<< mbs <<std::endl;

}




