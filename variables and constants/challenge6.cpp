
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
    const double charges_per_sml_room = 25;
    const double charges_per_big_room = 35;
    const double tax_rate = 0.06;
    const int validation = 30;
    cout << "Welcome to Jamil's hotel's services" << endl;
    cout << "How much rooms do you need to clean. Please write number of big and small rooms, respectively ?\n" << endl;

    int number_of_big_rooms = 0;
    cin >> number_of_big_rooms;

    int number_of_small_rooms = 0;
    cin >> number_of_small_rooms;

    int total_number_of_rooms = number_of_small_rooms + number_of_big_rooms;
    long double total_cost_without_tax = (number_of_big_rooms * charges_per_big_room) + (number_of_small_rooms * charges_per_sml_room);
    cout << "Estimate for carpering services"<< endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of big rooms: " << number_of_big_rooms << endl;
    cout << "Number of rooms: " << total_number_of_rooms << endl;
    cout << "Price per small room: " << charges_per_sml_room << endl;
    cout << "Price per big room: " << charges_per_big_room << endl;
    cout << "==============================="<< endl;
    cout << "Total estimate: " << total_cost_without_tax + (total_cost_without_tax * tax_rate)<< endl;
    cout << "The estimate valid for " << validation << " days" << endl;

    cout << endl;
    return 0;
}

