//
// Created by maruko on 14/07/21.
//

#ifndef ACTIVITYTRACKER_DATE_H
#define ACTIVITYTRACKER_DATE_H


class Date {

public:
    Date(int day, int month, int year);

    ~Date() = default;

    bool verifyDate(int day, int month, int year);

    bool verifyExtremes(int first, int last, int var);

    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

private:
    int day{1};
    int month{1};
    int year{1920};

};


#endif //ACTIVITYTRACKER_DATE_H
