#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str1[50],str2[50];
  int i=0, chk=0;
  cout<<"Enter str1:";
  cin>>str1;
  cout<<"Enter str2:";
  cin>>str2;      
  while(str1[i]!='\0'||str2[i]!='\0')
  {
    if(str1[i]!=str2[i])
    {
      chk=1;
      break;
    }
    i++;
  }
  if(chk==0)
     cout<<"\nString are equal";
  else
     cout<<"\nStrings are not equal";
  return 0;
}               
