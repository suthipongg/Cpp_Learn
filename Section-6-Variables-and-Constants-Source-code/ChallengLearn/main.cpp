
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    int price_small {25};
    int price_large {35};
    cout << "Estimate for carpet cleaning service" << endl;
    int num_small;
    int num_large;
    cout << "Number of small rooms: ";
    cin >> num_small;
    cout << "Number of large rooms: ";
    cin >> num_large;
    cout << "Price per small room: " << price_small << endl;
    cout << "Price per large room: " << price_large << endl;
    int cost = num_small*price_small + num_large*price_large;
    float tax = 0.06*cost;
    cout << "Cost : $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "===============================" << endl;
    cout << "Total estimate: $" << cost+tax << endl;
    cout << "This estimate is valid for 30 days" << endl;
    return 0;
}

