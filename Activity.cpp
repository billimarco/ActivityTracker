//
// Created by maruko on 13/07/21.
//

#include "Activity.h"
Activity::Activity() {

}

Activity::Activity(std::string description, Time startTime, Time endTime) {
    this->description = description;
    if (startTime < endTime) {
        this->startTime = startTime;
        this->endTime = endTime;
    }
}

const std::string &Activity::getDescription() const {
    return description;
}

void Activity::setDescription(const std::string &description) {
    Activity::description = description;
}

const Time &Activity::getStartTime() const {
    return startTime;
}

void Activity::setStartTime(const Time &startTime) {
    Activity::startTime = startTime;
}

const Time &Activity::getEndTime() const {
    return endTime;
}

void Activity::setEndTime(const Time &endTime) {
    Activity::endTime = endTime;
}


