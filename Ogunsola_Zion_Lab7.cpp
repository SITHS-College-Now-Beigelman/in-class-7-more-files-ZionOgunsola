//Zion Ogunsola
//11/3/2024
//Lab 7


#include <iostream> //Includes iostream
#include <fstream> //Includes fstream
#include <string> //Includes string
using namespace std;
 
int main () //Begins int function

{
   ifstream inFile; //Declares variable
   ofstream outFile; //Declares variable
   double score1; //Declares variable
   double score2; //Declares variable
   double score3; //Declares variable
   string name; //Declares variable
   string player; //Declares variable 
   
   inFile.open("ingame_scores.txt"); //Opens infile
   outFile.open("outgame_scores.txt"); //Opens outFile
   
   for(int i=1;i<=3;i++) //Runs for loop while condition is met
   {
   inFile >> player >> name; //Reads variables player and then name
   outFile << player << name << " "  << endl; //Outputs player then name

   
   inFile >> score1 >> score2 >> score3; //Reads all three scores
   double average = score1*5; //Computs variable average
   outFile << "Average:" << average << endl; //Outputs average
   
   
    if (average >= 0 && average <1000) //Sets if condition  
    {
        outFile << "Beginner - Keep Practicing! " << endl; //Outputs statement
    }
    else if (average >= 1000 && average < 1500) //Sets else if condition  
    {
        outFile << "Intermediate " << endl;   //Outputs statement
        
    } 
    else if (average >= 1500 && average < 1800) //Sets else if condition  
    {
         outFile << "Advanced - Good Job!" << endl;//Outputs statement
    
    } 
    else if (average >= 1800 && average <= 2000) //Sets else if condition  
    {
        outFile << "Master - Good Job!" << endl;//Outputs statement
        
    } 
    else if (average>2000) //Sets else  if condition  
    {
        outFile << "Congrats! You are an Expert!"<<endl; //Outputs statement
        
    } else //Else condition
    {
        outFile <<" Invalid valid value" <<endl; //Outputs statement
    }    
    
   }
 
    
   inFile.close(); //Closes inFile
   outFile.close(); //Close outFile
   
    return 0; //Ends int function
    
}

/*
Player1George 
Average:500
Beginner - Keep Practicing! 
Player2John 
Average:1200
Intermediate 
Player3Jeffrey 
Average:2500
Congrats! You are an Expert!
*/

