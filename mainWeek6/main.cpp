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
    
    determineLowestScore();
    cout << "********************************\n";
    
    determineHighestScore();

}

//MARK: functions
//Accept the data – prompt the user for the judge’s score. average score
void acceptsData() {
    double score1,
    score2,
    score3,
    score4,
    score5,
    score6;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score1;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score2;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score3;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score4;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score5;
    
    cout << "Enter Judges Score: "<<endl;
    cin >> score6;
}

//determine highest score of all scores
void determineHighestScore () {
   //variables
}

//determine lowest score of all scores
void determineLowestScore() {
    //variables
}
