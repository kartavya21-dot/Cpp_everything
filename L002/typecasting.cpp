#include<iostream>
using namespace std;

int main()
{
  int a ='a';
  cout<< a << endl ;  // As ASCII value of a is 97, therefore 97 is printed

  char ch =98;
  cout<< ch << endl;  // ASCII value of b is 98

  char ch1 = 123456;
  cout<< ch1<<endl;  //characters are stored in 1 byte = 8bit, therefore it limits the number to 64, and 64 is ASCII value of @
  
  unsigned int n= 112; //will only take +ve values (from 0 to 2^32-1 )
  cout<< n << endl;
}