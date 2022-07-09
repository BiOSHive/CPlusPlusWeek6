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
    //variables
    double highestScore = 0.0, lowestScore = 0;
    double averageScore = 0.0, judgeScore; //store score variable

    //dispaly 6 judges scores and only scoregrades 1-10 can be entered
    for(int scores = 1; scores <= 6; scores++) {
        cout<< "Enter Judges Score " << scores << " : "; //get input from user
        cin >> judgeScore;  //display score variable
        averageScore = scores / 6;  //calculating the average score
        
        if(scores <= 1 || scores >= 10){  //input validation
            cout << "Invalid Input \n";
        }
        if(scores > highestScore) //finding the highest score
            highestScore = scores;
        if (scores < lowestScore) //finding the lowest score
            lowestScore = scores;
    }
    cout << "\n********************************\n";
    cout << "the divers highest score is: \n"<< highestScore <<endl;
    cout << "the divers lowest score is: \n"<< lowestScore <<endl;
    cout << "the divers average score is: "<< averageScore <<endl;

}


