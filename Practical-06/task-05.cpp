#include<iostream>
using namespace std;
int main()
{
  string str1;
  string str2;
  
  cin>>str1;
  cin>>str2;
  
  int x=str1.compare(str2);
  if(x>0)
     cout<<"str1 is larger than str2"<<endl;
  else if(x<0)
     cout<<"str2 is larger than str1"<<endl;
  else
     cout<<"str1 and str2 are equal"<<endl;
  return 0;
}           
