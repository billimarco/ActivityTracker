//
// Created by maruko on 14/07/21.
//

#include "RegisterCollection.h"

void RegisterCollection::attachRegister(Register *reg) {
    collection.insert(std::make_pair(reg->getCurrentDate().toString(), reg));
}

void RegisterCollection::detachRegister(Date dateReg) {
    collection.erase(collection.find(dateReg.toString()));
}
