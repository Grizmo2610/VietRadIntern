#include <iostream>
#include "StatementOperator.h"

using namespace std;

string dayInWeekDay(int day){
    switch (day) {
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "Not a valid day!";
    }
}

void statementOperator() {
    int day1 = 5;
    int day2 = 20;

    printf("Day 1 is %s\n", dayInWeekDay(day1).c_str());
    printf("Day 2 is %s\n", dayInWeekDay(day2).c_str());
}
