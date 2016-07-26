//
//  main.cpp
//  TeacherProject
//
//  Created by Henrichsen, Cody on 7/26/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sandwich.h"

using namespace std;

int main()
{

    Sandwich mySandwich;
    cout << mySandwich.getName() << endl;
    cout << "Lets rename my sandwich" << endl;
    cout << "Type in a new name: ";
    string tempName;
    
 //   cin >> tempName;
    getline(cin, tempName);
    mySandwich.setName(tempName);
    cout << mySandwich.getName() << endl;
    
    // insert code here...
//    cout << "Hello, World!\n";
//    double myFraction;
//    cout << myFraction << endl;
//    myFraction = 3.15;
//    cout << myFraction << endl;
//    int myFavoriteNumber;
//    cin >> myFavoriteNumber;
//    cout << myFavoriteNumber <<endl;
//    bool myBoolean = true;
//    cout << myBoolean <<endl;
//    string myWords;
//    myWords = "lsdfjaksdjf";
//    cout << myWords << endl;
    return 0;
}
