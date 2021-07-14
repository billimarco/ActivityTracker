//
// Created by maruko on 14/07/21.
//

#include "Time.h"

Time::Time(int hour, int minutes) {
    if (verifyTime(hour, minutes)) {
        this->hour = hour;
        this->minutes = minutes;
    }
}

bool Time::verifyTime(int hour, int minutes) {
    if (hour >= 0 && hour <= 23) {
        if (minutes >= 0 && minutes <= 59)
            return true;
        else
            return false;
    }
}

int Time::getHour() const {
    return hour;
}

void Time::setHour(int hour) {
    Time::hour = hour;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setMinutes(int minutes) {
    Time::minutes = minutes;
}


