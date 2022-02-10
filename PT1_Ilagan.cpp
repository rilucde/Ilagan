//Name: Meleager Jewel Ilagan
//Activity: PT1
//Date: February 10, 2022
//Year and Section: BSIE 1-1


#include <iostream>

using namespace std;

int main(){
  
    int CN, RN, CH, n;
    char x;
    
do{ 
    cout <<endl;
    cout << "============================== [ ODD / EVEN number Scheme ] ===============================" << endl;
   
    cout << "Enter range of numbers          : ";
    cin>>RN;
   
    cout << "Enter the " << RN << " consecutive numbers : ";
    cin>>CN;
    cout <<endl;

n=1; 
    while (n <= RN){
      if(n % 2 == 0){
        cout << n;
            cout << " - is an even number"; 
        cout << endl;
    }
    else{
        cout << n;
            cout << " - is an odd number"; 
        cout << endl;
    }
     n++;
   
    }
    cout << endl;

    cout << "======================== [ You are at the end of the program ^-^ ] ========================" << endl;
    cout << endl;
    cout << "Do you want to Try again? [Y/N]: ";
    cin >> x;
}while (x == 'y' || x == 'Y' );
    
    cout <<endl;
    cout << "========================   [ Thank you for using the program! ]   =========================" <<endl;


   return 0;
}
