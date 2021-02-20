/* COMP118 - Lab0
   Exercise 1
   Phoebe Zizirou
*/

#include<iostream>
#include<cmath>
#define pi 3.14

using namespace std;

// Returns the sum of the two numbers

double sumTwoNumbers(double num1, double num2);

// Returns the area of a circle given the radius

double areaOfCircle(double radius);

// Returns the circumference of a circle given the radius

double circumferenceOfCircle(double radius);

// Returns the price including the vat (given as %)

double priceIncludingVAT(double price, int vat);

//Menu

void showMenu();

int main()
{
    int choice, vat;
    double n1, n2, radius, price;

    do
    {
        showMenu();
        cin >> choice;

        //Checking choise

        switch (choice)
        {
            case 1:

                cout << "Enter value for number 1: ";
                cin >> n1;

                cout << "Enter value for number 2: ";
                cin >> n2;

                cout<<"Sum of numbers is: "<<sumTwoNumbers(n1, n2);

                cout << endl;

                break;

            case 2:

                cout << "Enter radius of circle: ";
                cin >> radius;

                cout << "Area of circle is: " << areaOfCircle(radius);

                cout << endl;
                

                break;

            case 3:

                if (radius != 0)
                {
                    cout << "Circumference of cicrle is: " << circumferenceOfCircle;
                    cout << endl;
                }

                else
                {
                    cout << "Enter radius of circle: ";
                    cin >> radius;

                    cout << "Circumference of cicrle is: " << circumferenceOfCircle;

                    cout << endl;
                }

                break;

            case 4:

                cout << "Enter price without VAT: ";
                cin >> price;

                cout << "Enter value of VAT as integer: ";
                cin >> vat;

                cout << "Price with VAT is: " << priceIncludingVAT(price, vat);

                cout << endl;
              
           default:
              break;

        }

    } while (choice != 5);

    cout << "Thank you, bye!";

    return 0;
}

void showMenu()
{
    cout << "1. Sum two numbers" << endl;
    cout << "2. Calculate area" << endl;
    cout << "3. Calculate circumference" << endl;
    cout << "4. Calculate price with VTA" << endl;
    cout << "5. Exit" << endl;

    cout << endl;
    cout << "Enter choice: ";
}

double sumTwoNumbers(double num1, double num2)
{
    return num1 + num2;
}

double areaOfCircle(double radius)
{
    return pi * pow(radius, 2);
}

double circumferenceOfCircle(double radius)
{
    return pi * (radius + radius);
}

double priceIncludingVAT(double price, int vat)
{
    return price + (price * vat / 100);
}
