//
// Created by maruko on 13/07/21.
//

#ifndef ACTIVITYTRACKER_ACTIVITY_H
#define ACTIVITYTRACKER_ACTIVITY_H


#include <string>
#include "Date.h"
#include "Time.h"

class Activity {
public:
    Activity();

    Activity(std::string description, Time startTime, Time endTime);

    ~Activity() = default;

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    const Time &getStartTime() const;

    void setStartTime(const Time &startTime);

    const Time &getEndTime() const;

    void setEndTime(const Time &endTime);

private:
    std::string description{""};
    Time startTime{Time(0, 0)};
    Time endTime{Time(0, 0)};
};


#endif //ACTIVITYTRACKER_ACTIVITY_H
