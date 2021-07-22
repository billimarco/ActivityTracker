//
// Created by maruko on 14/07/21.
//

#ifndef ACTIVITYTRACKER_REGISTERCOLLECTION_H
#define ACTIVITYTRACKER_REGISTERCOLLECTION_H


#include <map>
#include <memory>
#include "Date.h"
#include "Register.h"

class RegisterCollection {
public:
    RegisterCollection() {};

    ~RegisterCollection() = default;

    void attachRegister(std::shared_ptr<Register> &reg);

    void detachRegister(std::string dateReg);

    const std::map<std::string, std::shared_ptr<Register>> &getCollection() const;

    void setCollection(const std::map<std::string, std::shared_ptr<Register>> &collection);

private:
    std::map<std::string, std::shared_ptr<Register>> collection;
};


#endif //ACTIVITYTRACKER_REGISTERCOLLECTION_H
