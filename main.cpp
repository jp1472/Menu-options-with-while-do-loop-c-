/*                                Jessica Perez
                                October 5, 2019
                 Practising the do while loop on a menu option
         A do while loop  repeats the program until the user selects item 4 from the menu.
                                                                                         */
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
//Constant for membership rates
const int       ADULT_CHOICE = 1,
                CHILD_CHOICE = 2,
                SENIOR_CHOICE = 3,
                QUIT_CHOICE = 4;
// Constant for membership rates
    const double  ADULT = 40.0,
                  CHILD = 20.0,
                  SENIOR = 30.0;
// Variables for the choice
    int choice;         //Menu Choice
    int months;        //Number of months
    double charges;  // Monthly chargers
// Set up the numeric output fprmatting
    cout<< fixed << showpoint << setprecision(2);
    
    do
    {
        cout<< " Hello I am Jessica Your new trainer in  the Fairbanks Community !\n"
             << " come try out my new gym membership rates special for fall 2019\n";
        // Display the Menu
        cout<< "\n\t\t Health Club Membership Menun\n\n"
        <<"1.Standard Adult Memebership: $40.00 month \n"
        <<"2.Child Membership:           $20.00 month \n "
        <<"3.Senior Membership:          $30.00 month \n"
            <<" Enter your choice: ";
        cin >> choice;
        
    // Validating the menu selection
        while (choice <ADULT_CHOICE || choice >QUIT_CHOICE)
        {
            cout<<" Please enter a valid menu choice: ";
            cin>> choice;
       }
    // Processing the users choice now
        if (choice != QUIT_CHOICE)
        {
            // Get the number of months
            cout<<" For how many months?";
            cin>>months;
    // Responding to the users choice using switch
        switch (choice)
            {
                case ADULT_CHOICE:
                  charges = months * ADULT;
                    break;
                case CHILD_CHOICE:
                    charges = months * CHILD;
                    break;
                case   SENIOR_CHOICE:
                    charges = months * SENIOR;
                    break;
             }
            // Display the menu chargers
    cout << " The total chargers are $"
            << charges << endl;
        }
    }while (choice != QUIT_CHOICE);
        return 0;
    }
    
