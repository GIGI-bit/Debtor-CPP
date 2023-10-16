#pragma once

class DateTime {
    int _day;
    int _month;
    int _year;
public:
    DateTime( int month, int day, int year)  {
        setDay(day);
        setMonth(month);
        setYear(year);
    }
    DateTime(){}
 

    void setDay(int day) {
        if (day >= 1 && day <= 31) {
            _day = day;
        }
        else {
            throw exception("Invalid day value");
        }
    }

    
    void setMonth(int month) {
        if (month >= 1 && month <= 12) {
            _month = month;
        }
        else {
           throw exception("Invalid month value");
        }
    }
    void setYear(int year) {
        if (year >= 0) {
            _year = year;
        }
        else {
            throw exception("Invalid year value");
        }
    }

    int getYear() const {
        return _year;
    }
    int getDay() const {
        return _day;
    }
    int getMonth() const {
        return _month;
    }


    void Show() const {
        cout << _year << "/" << _month << "/" << _day << endl;
    }

};
