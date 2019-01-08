#ifndef MESSAGEBUSSUBSCRIBER_H
#define MESSAGEBUSSUBSCRIBER_H

#include "MessageBus.h"



class MessageBus;
class MessageBusSubscriber
{
    public:

        MessageBusSubscriber();             //Constructor
        virtual ~MessageBusSubscriber();    //Destructor1

        void subscribe(MessageBus* mb);

        void notify(char* str);

    protected:


    private:
        MessageBus* busSubbedTo;
};

#endif // MESSAGEBUSSUBSCRIBER_H
