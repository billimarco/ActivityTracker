//
// Created by maruko on 13/07/21.
//

#include "Register.h"

bool Register::addActivity(Activity &act) {
    int newID = activityRegister.size();
    if (act.getStartTime() < act.getEndTime()) {
        activityRegister.insert(std::make_pair(newID, act));
        if (activityRegister.size() > newID)
            return true;
    }
    return false;
}

bool Register::removeActivity(int idAct) {
    int precedentSize = activityRegister.size();
    if (activityRegister.find(idAct) != activityRegister.end()) {
        activityRegister.erase(activityRegister.find(idAct));
        if (activityRegister.size() < precedentSize)
            return true;
    }
    return false;
}

bool Register::modifyDescriptionActivity(int idAct, std::string newDescription) {
    if (activityRegister.find(idAct) != activityRegister.end()) {
        activityRegister[idAct].setDescription(newDescription);
        return true;
    } else {
        return false;
    }
}

bool Register::modifyTimeActivity(int idAct, Time newStartTime, Time newEndTime) {
    if (activityRegister.find(idAct) != activityRegister.end() && newStartTime < newEndTime) {
        activityRegister[idAct].setStartTime(newStartTime);
        activityRegister[idAct].setEndTime(newEndTime);
        return true;
    } else {
        return false;
    }
}

bool Register::modifyActivity(int idAct, std::string newDescription, Time newStartTime, Time newEndTime) {
    if (activityRegister.find(idAct) != activityRegister.end() && newStartTime < newEndTime) {
        activityRegister[idAct].setDescription(newDescription);
        activityRegister[idAct].setStartTime(newStartTime);
        activityRegister[idAct].setEndTime(newEndTime);
        return true;
    } else {
        return false;
    }
}

const Date &Register::getCurrentDate() const {
    return currentDate;
}

void Register::setCurrentDate(const Date &currentDate) {
    Register::currentDate = currentDate;
}

const std::map<int, Activity> &Register::getActivityRegister() const {
    return activityRegister;
}

void Register::setActivityRegister(const std::map<int, Activity> &activityRegister) {
    Register::activityRegister = activityRegister;
}
