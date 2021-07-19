//
// Created by maruko on 13/07/21.
//

#include "Register.h"

bool Register::addActivity(std::string description, Time startTime, Time endTime) {
    if (startTime > endTime) {
        return false;
    }
    bool timeControl = true;
    for (Activity act: activityRegister) {
        if ((startTime <= act.getEndTime() && startTime >= act.getStartTime()) ||
            (endTime <= act.getEndTime() && endTime >= act.getStartTime())) {
            timeControl = false;
        }
    }
    if (timeControl) {
        Activity newAct(description, startTime, endTime);
        activityRegister.push_back(newAct);
        sortByTime();
    }
    return timeControl;
}

bool Register::removeActivity(int activityNumber) {
    std::vector<Activity>::iterator it;
    int counter = 0;
    for (it = activityRegister.begin(); it != activityRegister.end(); it++) {
        if (counter == activityNumber) {
            activityRegister.erase(it);
            return true;
        }
        counter++;
    }
    return false;
}

bool Register::modifyDescriptionActivity(int activityNumber, std::string newDescription) {
    if (activityNumber < activityRegister.size()) {
        activityRegister[activityNumber].setDescription(newDescription);
        return true;
    } else {
        return false;
    }
}

bool Register::modifyTimeActivity(int activityNumber, Time newStartTime, Time newEndTime) {
    if (activityNumber < activityRegister.size() && newStartTime < newEndTime) {
        activityRegister[activityNumber].setStartTime(newStartTime);
        activityRegister[activityNumber].setEndTime(newEndTime);
        return true;
    } else {
        return false;
    }
}

bool Register::modifyActivity(int activityNumber, std::string newDescription, Time newStartTime, Time newEndTime) {
    if (activityNumber < activityRegister.size() && newStartTime < newEndTime) {
        activityRegister[activityNumber].setDescription(newDescription);
        activityRegister[activityNumber].setStartTime(newStartTime);
        activityRegister[activityNumber].setEndTime(newEndTime);
        return true;
    } else {
        return false;
    }
}

void Register::sortByTime() {
    std::vector<Activity> newRegister;
    int size = activityRegister.size();
    for (int i = 0; i != size; i++) {
        Time firstStartTime(23, 59);
        int selectedActivity, j = 0;
        for (Activity act: activityRegister) {
            if (act.getStartTime() < firstStartTime) {
                firstStartTime = act.getStartTime();
                selectedActivity = j;
            }
            j++;
        }
        newRegister.push_back(activityRegister[selectedActivity]);
        removeActivity(selectedActivity);
    }
    setActivityRegister(newRegister);
}

const Date &Register::getCurrentDate() const {
    return currentDate;
}

void Register::setCurrentDate(const Date &currentDate) {
    Register::currentDate = currentDate;
}

const std::vector<Activity> &Register::getActivityRegister() const {
    return activityRegister;
}

void Register::setActivityRegister(const std::vector<Activity> &activityRegister) {
    Register::activityRegister = activityRegister;
}

