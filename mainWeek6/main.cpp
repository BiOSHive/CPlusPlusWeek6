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
    cout << "**** Points are given on a scale 1 -10, Enter divers scores below. ****\n"<<endl;
    acceptsData();
    cout << "********************************\n";


}

//MARK: functions
//Accept the data – prompt the user for the judge’s score. average score
void acceptsData() {
    float judgeScore; //store score variable

    //dispaly 6 judges scores and only scoregrades 1-10 can be entered
    for(int scores = 1; scores <= 10; scores++) {
        cout<< "Enter Judges Score " << scores << " : "; //get input from user
        cin >> judgeScore;  //display score variable
        if(scores <= 1 || scores >= 10){  //input validation
            cout << "Invalid Input \n";
        }
    }
}

//determine highest score of all scores
void determineHighestScore () {
   //variables
  
}

//determine lowest score of all scores
void determineLowestScore() {
    //variables
    
}


