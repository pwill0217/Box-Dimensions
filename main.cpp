// WpLab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cmath>

#include <iostream>

using namespace std;

int calculateSphere(double length, double breadth, double height) {
    //this is the function
    double diagonal = sqrt(length * length + breadth * breadth + height * height);
    //setting up the rectangle dimensions
    if (diagonal <= 4)

        return 4;

    if (diagonal <= 6)

        return 6;

    if (diagonal <= 8)

        return 8;

    if (diagonal <= 10)

        return 10;

    if (diagonal <= 12)

        return 12;

    return 0;

}

int main() {

    double length, breadth, height;

    int sphereCount[5] = { 0 };

    int Sphere;

    while (true) {

        // Get dimensions of the box

        cout << "Enter the dimensions of the box:\n";

        cout << "Length: ";

        cin >> length;

        cout << "Breadth: ";

        cin >> breadth;

        cout << "Height: ";

        cin >> height;

        if (length <= 0 || breadth <= 0 || height <= 0)

            break;

        Sphere = calculateSphere(length, breadth, height);

        if (Sphere == 0)

            cout << "The box cannot fit in any of the spheres";

        else

            cout << "The box can fit in the " << Sphere << "-inch sphere";

        // Increment  counter

        if (Sphere == 4)

            sphereCount[0]++;

        else if (Sphere == 6)

            sphereCount[1]++;

        else if (Sphere == 8)

            sphereCount[2]++;

        else if (Sphere == 10)

            sphereCount[3]++;

        else if (Sphere == 12)

            sphereCount[4]++;

        cout << "\n\n";

    }

    cout << "\nNumber of 4-inch spheres: " << sphereCount[0];

    cout << "\nNumber of 6-inch spheres: " << sphereCount[1];

    cout << "\nNumber of 8-inch spheres: " << sphereCount[2];

    cout << "\nNumber of 10-inch spheres: " << sphereCount[3];

    cout << "\nNumber of 12-inch spheres: " << sphereCount[4];

    cout << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
