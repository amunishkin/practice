#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Get the timestamp for the current date and time
    time_t timestamp;
    time(&timestamp);

    // Display the date and time represented by the timestamp
    cout << ctime(&timestamp);

    time_t timestamp2 = time(NULL);

    cout << ctime(&timestamp2);

    struct tm datetime;
    time_t timestamp3;

    datetime.tm_year = 2023 - 1900; // Number of years since 1900
    datetime.tm_mon = 12 - 1; // Number of months since January
    datetime.tm_mday = 17;
    datetime.tm_hour = 12;
    datetime.tm_min = 30;
    datetime.tm_sec = 1;
    // Daylight Savings must be specified
    // -1 uses the computer's timezone setting
    datetime.tm_isdst = -1;

    timestamp3 = mktime(&datetime);

    cout << ctime(&timestamp3);
}