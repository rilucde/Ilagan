//Performance Task 4
// Name: Meleager Jewel B. Ilagan
// Section: BSIE 1-1
// Date: April 22, 2022


#include<iostream>
#include <fstream>

using namespace std;

const int SIZE = 10;
void partially_filledarr(int arr[], int size, int& num_used);
int search(const int e[], int num_used, int key);


int main(){

    int arr[SIZE], list_size, key;
    partially_filledarr(arr, list_size, key);
    char n;
    int result;
    int name;

     ofstream File;
     File.open("Arrays_Output.txt", ios:: app);
    do
    { 

        cout << endl;
        cout << "      Enter a key element to search for : ";
        cin >> key;
        result = search(arr, list_size, key);
        if (result == -1)
            cout << key << " is not on the list." <<endl;
        else 
            cout << endl;
            File << "Output : "<< endl;
            File << key << " is stored in array position "
                 << result <<endl;
            
            cout << endl;
            File << "================================" << endl;
            File << "(Note: The first position is 0)" << endl;
            File << "================================" << endl;

        cout << "      Do you want to search again? [y/n]: ";
        cin >> n;
    } while ((n !='n') && (n != 'N'));

    cout << endl;
    cout << "==================[ Thank you for using the app! ]=================" <<endl;
    
    File << "Numbers that the user entered : " << endl;
    for(int x = 0; x < SIZE; x++){
        File << "[" << arr[x] << "] ";
    if (arr[x] < 0){
        }   
    }
    return 0;
}

void partially_filledarr(int arr[], int size, int& num_used){
    cout << "================[ Partially Filled Array App ]===================" << endl << endl;
    for (int x = 0; x < SIZE; x++){
        cout << "      Enter a non negative number (Negative to end): ";
        cin >> arr[x];
        if (arr[x] < 0){
        break;

        }
    }
}

int search(const int e[], int num_used, int tar)
{
    int index = 0;
    bool found = false;
    while ((!found) && (index < num_used))
        if (tar == e[index])
            found = true;
        else
            index++;

    if(found)
        return index;
    else
        return -1;
}
void read()
{
 string data;
 ifstream ReadFile("Arrays_Output.txt");
 while (getline (ReadFile, data)) 
 {
 cout << data << endl;
 }
 ReadFile.close();
}
