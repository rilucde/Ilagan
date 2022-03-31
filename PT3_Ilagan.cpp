#include <iostream>
#include <fstream>
using namespace std;
string name, yearsection, subject, remarks;
int sum = 0, number = 0, ctr=1, n, average, score;
void promptAndWait();
void exam();
void read();
void clear();

int main()
{
 //Input
 int ch, wait = 0, temp;
 do
 {
 system("cls");
 cout << " ************ Exam Calculator ************" << endl;
 cout << "         [1] Input New Data " << endl;
 cout << "         [2] View File Data" << endl;
 cout << "         [3] Clear File Data" << endl;
 cout << "         [0] Exit" << endl;
 cout << "         Select an option : ";
 cin >> ch;
 switch (ch)
 {
 case 1:
 {
 
 exam();
 promptAndWait();
 break;
 }
 case 2:
 {
 
 read();
 promptAndWait();
 break;
 } 
 case 3:
 {
 
 clear();
 promptAndWait();
 break;

 } 
 case 0:
 {
 
 cout << "Thank you for using the program.";
 return 0;
 break;
 } 
 default:
 {
 cout << "Invalid Input.";
 promptAndWait();
 break;
 }
 }
 }while(wait == 0);
}
void promptAndWait()
{
 cin.ignore();
 cout << "\nPress Enter Continue...";
 cin.get();
}
 //Process
void exam()
{
 ofstream File;
 File.open("Exam_Result_Output.txt", ios:: app);
 

 string name, yearsection, subject, remarks;
int sum = 0, number = 0, ctr=1, n, average, score, schnum;

 cout << "\nEnter your School ID      : ";
 cin >> schnum;
 cin.ignore();
 cout << "Enter your Name           : ";
 getline(cin,name);
 cout << "Enter your Year & Section : ";
 cin >> yearsection;
 cout << "Enter Subject             : ";
 cin >> subject;
 cout << endl;
 cout << "<< Enter your Exam Score (Note: Enter a negative number to end) >>" << endl;
 
do{
    cout << "                   Exam Score[" << ctr << "] : ";
    cin >>number;
    if(number < 0){
        break;
    }
    sum += number;
    ctr++;
}while (number > 0);
    
    n = ctr - 1;
    average = sum / n;
    cout<< endl;

    if(average > 91 || 100 < average)
    {
    remarks = "Excellent! ";
    }
    else if(average > 81 || 90 < average)
    {
    remarks = "Very Good! "; 
    }
    else if(average > 71 || 80 < average)
    {
    remarks = "Good "; 
    }
    else if(average > 60 || 70 < average)
    {
    remarks = "Average "; 
    }

    
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);
 File << "---------------------------------------" << endl;
 File << "Student ID     : " << schnum << endl;
 File << "Student Name   : " << name << endl;
 File << "Year & Section : " << yearsection << endl;
 File << "Subject        : " << subject  << endl;
 File << "Exam grade     : " << average << endl;
 File << "Remarks        : " << remarks << endl;
 File << "---------------------------------------" << endl;
 File.close();
}
 //Output
void read()
{
 string data;
 ifstream ReadFile("Exam_Result_Output.txt");
 while (getline (ReadFile, data)) 
 {
 cout << data << endl;
 }
 ReadFile.close();
}
void clear()
{
 fstream Clear;
 Clear.open("Exam_Result_Output.txt", ios::out | ios::trunc); 
 cout << "Data Cleared" << endl;
 
}
