//
//  main.cpp
//  PRG-4-11-Math-Tutor
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  This is a modification of Programming Challenge 17 from Chapter 3. Write a program
//  that can be used as a math tutor for a young student. The program should display two
//  random numbers that are to be added, such as:
//
//   247
//  +129
//  ----
//
//  The program should wait for the student to enter the answer. If the answer is correct,
//  a message of congratulations should be printed. If the answer is incorrect, a message
//  should be printed showing the correct answer.


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    const int MIN_VALUE = 100;
    const int MAX_VALUE = 999;
    
    int intValue1,
        intValue2,
        intValueSum,
        intValueGuess;
    
    unsigned seed = time(0);
    
    srand(seed);
    
    intValue1 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    intValue2 = (rand() % (MAX_VALUE - MIN_VALUE +1)) + MIN_VALUE;
    intValueSum = intValue1 + intValue2;
    
    cout << setw(4) << right << intValue1 << endl;
    cout << setw(1) << right << "+"
         << setw(3) << right << intValue2 << endl;
    cout << "----\n";
    
    cin >> setw(4) >> right >> intValueGuess;
    while(!cin || intValueGuess < 0 || intValueGuess > 9999)
    {
        cout << "Please enter a guess between 0 and 9999:\n";
        cin.clear();
        cin.ignore();
        cin >> intValueGuess;
    }
    
    if(intValueGuess == intValueSum)
    {
        cout << "Congratulations! You got the answer right!";
    }
    else
    {
        cout << "The correct answer is " << intValueSum;
    }
    
    return 0;
}


