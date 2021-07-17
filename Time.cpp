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
    }
    return false;
}

int Time::getHour() const {
    return hour;
}

void Time::setHour(int hour) {
    if (verifyTime(hour, Time::minutes))
        Time::hour = hour;
}

int Time::getMinutes() const {
    return minutes;
}

void Time::setMinutes(int minutes) {
    if (verifyTime(Time::hour, minutes))
        Time::minutes = minutes;
}

bool operator<(const Time &lhs, const Time &rhs) {
    if (lhs.hour < rhs.hour)
        return true;
    if (rhs.hour < lhs.hour)
        return false;
    return lhs.minutes < rhs.minutes;
}

bool operator>(const Time &lhs, const Time &rhs) {
    return rhs < lhs;
}

bool operator<=(const Time &lhs, const Time &rhs) {
    return !(rhs < lhs);
}

bool operator>=(const Time &lhs, const Time &rhs) {
    return !(lhs < rhs);
}


