#include <iostream>

using namespace std;

int main()
{
    cout <<"Welcome To The Harof's Carpet Cleaning Service" <<endl;

    cout <<"\nHow many large rooms would you like to be cleaned: ";
    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;

     cout <<"\nHow many small rooms would you like to be cleaned: ";
    int number_of_small_rooms;
    cin >> number_of_small_rooms;

    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    double cost;
    double tax;
    double total_estimate;
    const double sales_tax {0.06};
    const int expiry_days {30};


    cout <<"\nEstimate for cleaning service";

    cout <<"\nPrice per large room: $" << price_per_large_room <<endl;
    cout <<"Price per small room: $" << price_per_small_room <<endl;

    cost = (number_of_large_rooms * price_per_large_room) + (number_of_small_rooms * price_per_small_room);
    cout <<"The Cost is $ " << cost <<endl;
     tax = sales_tax * cost;
    cout <<"The tax on the services is $ " << tax <<endl;

    total_estimate = tax + cost;
    cout <<"The total estimate is $ " << total_estimate <<endl;
    cout <<"This is valid for " << expiry_days << " days" <<endl;


    return 0;
}
