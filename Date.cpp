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

bool Date::verifyDate(int day, int month, int year) const {
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

bool Date::verifyExtremes(int first, int last, int var) const {
    if (var >= first && var <= last)
        return true;
    else
        return false;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    if (verifyDate(day, Date::month, Date::year))
        Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    if (verifyDate(Date::day, month, Date::year))
        Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    if (verifyDate(Date::day, Date::month, year))
        Date::year = year;
}

std::string Date::toString() const {
    return std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
}
