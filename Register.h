//
// Created by maruko on 13/07/21.
//

#ifndef ACTIVITYTRACKER_REGISTER_H
#define ACTIVITYTRACKER_REGISTER_H


#include <map>
#include "Activity.h"
#include "Date.h"

class Register {
public:
    Register(Date currentDate) : currentDate(currentDate) {};

    ~Register() = default;

    bool addActivity(Activity &act);

    bool removeActivity(int idAct);

    bool modifyDescriptionActivity(int idAct, std::string newDescription);

    bool modifyTimeActivity(int idAct, Time newStartTime, Time newEndTime);

    bool modifyActivity(int idAct, std::string newDescription, Time newStartTime, Time newEndTime);

    const Date &getCurrentDate() const;

    void setCurrentDate(const Date &currentDate);

    const std::map<int, Activity> &getActivityRegister() const;

    void setActivityRegister(const std::map<int, Activity> &activityRegister);

private:
    Date currentDate;
    std::map<int, Activity> activityRegister;
};


#endif //ACTIVITYTRACKER_REGISTER_H
