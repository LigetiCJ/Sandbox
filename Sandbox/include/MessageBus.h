#ifndef MESSAGEBUS_H
#define MESSAGEBUS_H

#include "MessageBusSubscriber.h"



class MessageBusSubscriber;
class MessageBus
{
    public:
        MessageBus();
        virtual ~MessageBus();
        void Update();
        void AddSubscriber(MessageBusSubscriber* mbs);

    protected:

    private:
        //MessageBusSubscriber subs[16] = {};

};


#endif // MESSAGEBUS_H
