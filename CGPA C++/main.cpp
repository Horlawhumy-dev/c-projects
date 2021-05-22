#include <iostream>

using namespace std;


string DeptName(string response){
    cout << "What department are you in faculty of technology? (just type the short-forms): ";
    getline(cin, response);


    return response;
    }

int main()
{   cout << "\nWELCOME TO HAROF'S CGPA APP!!!" << endl;

    string answer = DeptName(response);

     if( response == "csc" || response == "CSC"){
        cout << "You are from Computer Science and Engineering department" <<endl;
    }else{
        cout << "Invalid Department!" << endl;
    }
    cout << answer;

    return 0;
}
