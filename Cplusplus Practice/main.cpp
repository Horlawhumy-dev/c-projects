#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    cout << "________________________" <<endl;

    cout << "Practice Number One!!!" <<endl;

    int n =3; // Perfect squares of 3 down to 0.
    while(n>=0)
    {
        cout << n * n << endl;
        --n;
    }
    cout << n << endl;


    cout << "________________________" <<endl;

    cout << "Practice Number Two!!!" <<endl;

    enum color_type {red, orange, yellow, green, blue, violet};
    color_type shirt, pants;
    shirt = red;
    pants = blue;

    cout << "The index of shirt is " << shirt << " and that of pants is " << pants << endl;

    cout << "________________________" <<endl;

    cout << "Practice Number Three!!!" <<endl;

    char ch ;
    char title[] = "Titanic"; // swapping of character

    ch = title[1];
    title[3] = ch;

    cout << "New title is " << title << endl;
    cout << title[0] << "\n" << title[1] << "\n" << title[2] << "\n" << title[3] << "\n" << title[4] << "\n" << title[5] << "\n" << title[6] << endl;

    cout << "________________________" <<endl;

    cout << "Practice Number Four!!!" <<endl;

    const int LENGTH = 0;
    char message[LENGTH];

    cout << "Enter any sentence here: ";
    cin >> message;

    cout << message << endl; // Returning initial word of the  sentence entered

    cout << "________________________" <<endl;

    cout << "Practice Number Five!!!" <<endl;


    return 0;
}
