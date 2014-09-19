//
//  Timekeeper.h
//  CardObjectsProject2
//
//  Created by Ivy Huang on 9/18/14.
//  Copyright (c) 2014 Matt Antalek. All rights reserved.
//

#ifndef __CardObjectsProject2__Timekeeper__
#define __CardObjectsProject2__Timekeeper__

#include <iostream>

#endif /* defined(__CardObjectsProject2__Timekeeper__) */

namespace cg {
    class Timekeeper {
    public:
        Timekeeper();
        ~Timekeeper();
        double getSecondsElapsed();
        void starttime();
        void stoptime();

    private:
        clock_t t;
        clock_t t_end;
        double secondsElapsed;
        
    protected:
        void calculateSeconds();
        
    };
}