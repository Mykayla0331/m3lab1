//m2lab1
//MYKAYLA LEWIS
// 2/23/26

#include <iostream>
using namespace std;

// list prototypes of all the choices up here
void go_shop();
void walk();

// main() goes here
int main() {
    int choice;
    // game starts here
    cout << "ANIMAL SHELTER" << endl << endl;
    cout << "You are about your day when you spot something in the corner of your eye. Something seemingly soft and fuzzy, more of a burnt-orange color..." << endl;
    cout << "\"Is that...?\"" << " you wondered." << "\"...a cat? \"" << " It seems like this in a pet store, as you back a few paces." << endl;
    cout << "Do you: " << endl;
    cout << "1. Go in?" << endl;
    cout << "2. Keep walking?" << endl;
    cout << "> ";
    cin >> choice;
    if (1 == choice) {
        go_shop();
    }
    else if (2 == choice) {
        walk();
    }
    else{
        cout << "Not a choice." << endl;
    }
    cout << "*THE END*" << endl << endl;
}