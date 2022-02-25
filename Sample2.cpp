#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

std::tm make_tm(int year, int month, int day)
{
    std::tm tm = {0};
    tm.tm_year = year - 1900;
    tm.tm_mon = month - 1;
    tm.tm_mday = day;
    return tm;
}


int main()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout << "Curremt time : " << dt;

    std::tm * temp = gmtime(&now);
    temp->tm_mon;
    
    std::tm tmNextDate = make_tm(2022, 3, 10);
    time_t nextDate =  std::mktime(&tmNextDate);

    //difference between two dates
    int secondsEachDay = 24*60*60;
    double diff =  (nextDate - now)/secondsEachDay;

    cout << "Difference : " << diff << endl;

    double daysInSeconds = 7 * secondsEachDay;
    time_t afterDate = (now + daysInSeconds);
    cout << "After 7 days : " << ctime(&afterDate) << endl;
    time_t beforeDate = (now - daysInSeconds);
    cout << "7 days before : " << ctime(&beforeDate) << endl;

    //show the last month
    //accept two dates from user and show the difference in weeks
    //take date from user, show in day month year format - month should be the name of month

    return 0;
}