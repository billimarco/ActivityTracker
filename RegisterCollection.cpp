//
// Created by maruko on 14/07/21.
//

#include "RegisterCollection.h"

void RegisterCollection::attachRegister(Register *reg) {
    collection.insert(std::make_pair(reg->getCurrentDate().toString(), reg));
}

void RegisterCollection::detachRegister(std::string dateReg) {
    collection.erase(collection.find(dateReg));
}

const std::map<std::string, Register *> &RegisterCollection::getCollection() const {
    return collection;
}

void RegisterCollection::setCollection(const std::map<std::string, Register *> &collection) {
    RegisterCollection::collection = collection;
}
