#include <iostream>
using namespace std; 

int main() {
  //Code here 
  string names[5] ={"fahad","faheem","mom","dad","rin"};
  string relationship[5]={"son","son","parent","parent","gf"};
  for(int i =0;i<5;i++)
  cout<<"Enter your name: ";
  cin>>names[5];
  cout<<"What your realtionship to them: "<<endl;
  cin>>relationship[5];
  for(int i =0;i<5;i++)
  cout<<"Name and family: "<<names[i]<< " is my " <<relationship[i]<<endl;
}