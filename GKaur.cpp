#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;


int main() {
    
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;
    if(selection==1)
    {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;

       
cout<<"marks recieved : "<<endl;
cin>>marksReceived;
cout<<"total marks : "<<endl;
cin>>totalMarksAvailable;
gradePercentage= marksReceived/totalMarksAvailable*100;

cout << "You achieved a grade of: " << gradePercentage << "%" << endl;

    }
else if(selection==2)

   {
       cout<<"Gagndeep Kaur"<<endl;
    

cout<< "One morning when I was going out of the house I met my neighbor's daughter who was pregnant"<<endl;
cout<< "When I returned home I saw her father closing the door."<<endl;
cout<<"I told him Your daughter hasn't married yet I wonder how it is possible a girl without any husband be pregnant?"<<endl; 
cout<<"For a moment her father with a bitter smile said She isn't pregnant; it is all wind in her belly. She farts and would recovery."<<endl;
cout<<"Next year perchance I saw the same girl with a baby in her arms."<<endl; 
cout<<"Next day when I was going out facing her father so I told him I saw your daughter with her fart in her arms."<<endl;

   }
   else if (selection==3)
   {
      for(int count=1; count<=10; count++) {
 cout<<count<<endl;
   }
   if (cin.fail() || selection < 1 || selection > 3)
   {
        
        cout << "Have a nice day, goodbye!" << endl;
   }
  
}}