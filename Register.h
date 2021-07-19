//
// Created by maruko on 13/07/21.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H


#include <vector>
#include "Activity.h"
#include "Date.h"

class Register {
public:
    Register(Date currentDate) : currentDate(currentDate) {};

    ~Register() = default;

    bool addActivity(std::string description, Time startTime, Time endTime);

    bool removeActivity(int activityNumber);

    bool modifyDescriptionActivity(int activityNumber, std::string newDescription);

    bool modifyTimeActivity(int activityNumber, Time newStartTime, Time newEndTime);

    bool modifyActivity(int activityNumber, std::string newDescription, Time newStartTime, Time newEndTime);

    void sortByTime();

    const Date &getCurrentDate() const;

    void setCurrentDate(const Date &currentDate);

    const std::vector<Activity> &getActivityRegister() const;

    void setActivityRegister(const std::vector<Activity> &activityRegister);

private:
    Date currentDate;
    std::vector<Activity> activityRegister;
};


#endif //ACTIVITYTRACKER_REGISTER_H
