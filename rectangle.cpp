//Function to calculate the surface area of the RECTANGLE
//This function is to be integrated into the other part of the larger project!!!

/*
#include <iostream>
using namespace std;
*/

float value_check(float);

float rectangle_sa()
{
    float breadth, length, area = 0.0;

    cout << "\tTo calculate the surface area of a Rectangle...\n" << endl;
    cout << "Please enter your desired Length and Breadth values" << endl;
    cout << "Length: ";
    cin >> length;
    length = value_check(length);
    cout << "\nBreadth: ";
    cin >> breadth;
    breadth = value_check(breadth);

    if (breadth == length)
    {
        cout << endl;
        while (true)
        {
            cout << "The sides can not be the same value!" << endl;
            cout << "Re-enter -> Breadth: ";
            cin >> breadth;
            if (breadth != length)
                break;
        }
    }

    //The surface area is Length * Breadth
    area = length * breadth;
    //cout << area;
    return area;
}

float value_check(float v)
{
    if (v <= 0)
    {
        while (true)
        {
            cout << "\nInput must be greater than zero.\nRe-enter: ";
            cin >> v;
            if (v > 0)
                break;
        }
    }

    return v;
}

/*
main()
{
    rectangle_sa();
}
*/
