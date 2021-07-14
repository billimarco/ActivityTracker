//
// Created by maruko on 14/07/21.
//

#ifndef ACTIVITYTRACKER_TIME_H
#define ACTIVITYTRACKER_TIME_H


class Time {
public:
    Time(int hour, int minutes);

    ~Time() = default;

    bool verifyTime(int hour, int minutes);

    int getHour() const;

    void setHour(int hour);

    int getMinutes() const;

    void setMinutes(int minutes);

    friend bool operator<(const Time &lhs, const Time &rhs);

    friend bool operator>(const Time &lhs, const Time &rhs);

    friend bool operator<=(const Time &lhs, const Time &rhs);

    friend bool operator>=(const Time &lhs, const Time &rhs);

private:
    int hour{0};
    int minutes{0};
};


#endif //ACTIVITYTRACKER_TIME_H
