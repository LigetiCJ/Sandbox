#ifndef TIMEUTIL_H
#define TIMEUTIL_H

#include "MessageBusSubscriber.h"
#include <chrono>



class TimeUtil: public MessageBusSubscriber
{
    public:
        TimeUtil();
        virtual ~TimeUtil();

    protected:

    private:
};

#endif // TIMEUTIL_H
