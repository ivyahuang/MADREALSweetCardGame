//
//  Timekeeper.cpp
//  CardObjectsProject2
//
//  Created by Ivy Huang on 9/18/14.
//  Copyright (c) 2014 Matt Antalek. All rights reserved.
//

#include "Timekeeper.h"
#include <time.h>

cg::Timekeeper::Timekeeper()
{
    this->secondsElapsed = -1;
}

cg::Timekeeper::~Timekeeper()
{
    
}


void cg::Timekeeper::starttime()
{
    this->t = std::clock();
}

void cg::Timekeeper::stoptime()
{
    this->t_end = std::clock();
}

void cg::Timekeeper::calculateSeconds()
{
    this->secondsElapsed = ((double) this->t_end - this->t)/ ((double)CLOCKS_PER_SEC);

}

double cg::Timekeeper::getSecondsElapsed()
{
    this->calculateSeconds();
    return this->secondsElapsed;
}