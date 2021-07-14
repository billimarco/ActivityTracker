//
// Created by maruko on 14/07/21.
//

#include "Date.h"

Date::Date(int day, int month, int year) {
    if (verifyDate(day, month, year)) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
}

bool Date::verifyDate(int day, int month, int year) {
    if (verifyExtremes(1, 12, month)) {
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return verifyExtremes(1, 30, day);
        } else if (month == 2) {
            if (year % 4 == 0) {
                return verifyExtremes(1, 29, day);
            } else {
                return verifyExtremes(1, 28, day);
            }
        } else {
            return verifyExtremes(1, 31, day);
        }
    } else {
        return false;
    }

}

bool Date::verifyExtremes(int first, int last, int var) {
    if (var >= first && var <= last)
        return true;
    else
        return false;
}
