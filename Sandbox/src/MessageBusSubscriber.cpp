#include <iostream>
#include "MessageBus.h"

MessageBusSubscriber::MessageBusSubscriber()
{
    std::cout<<"Message Bus Subscriber constructed"<<std::endl;
}

MessageBusSubscriber::~MessageBusSubscriber(){}


void MessageBusSubscriber::subscribe(MessageBus* mb){
    busSubbedTo = mb;
    mb -> AddSubscriber( this );
    std::cout<<"Subbed to message bus: "<<mb<<std::endl;
}


void MessageBusSubscriber::notify(char* str){

}
