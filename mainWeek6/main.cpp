//
//  main.cpp
//  mainWeek6
//     DIVE TEAM CALCULATOR
//  The following code will allow the user to input data of the divers in the competition and calculator their high and low scores and their average score entered by 6 judges on a scale from 1-10.
//
//  Created by Meisha Jones on 7/2/22.
//

#include <iostream>
using namespace std;

//function protyping
void acceptsData();
void determineHighestScore ();
void determineLowestScore();


//main function
int main()
{
    cout << "***Points are given on a scale 1 -10, Enter divers scores below.***\n"<<endl;
    acceptsData();
    return 0;
}

//MARK: functions
//Accept the data – prompt the user for the judge’s score. average score
void acceptsData() {
    cout <<"Enter Divers Scores: \n"<<endl;
    int judgesScore = 0;
    if (judgesScore < 1 || judgesScore > 10) //error checking to see if input is with 1-10
        cout << "you entered an invalid number, try again.\n"<<endl;
    else
        cout << "score entered correctly "<<endl;
}

//determine highest score of all scores
void determineHighestScore () {
   //variables
    int highestScore;
}

//determine lowest score of all scores
void determineLowestScore() {
    //variables
    int lowestScore;
}
