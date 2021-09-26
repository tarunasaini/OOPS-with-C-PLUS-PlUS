//Program to check whether a number is prime or not
#include<iostream>
using namespace std;
int main()
{
     int n,i,count=0;
     cout<<"Enter the number to be checked: ";
     cin>>n; 
     for(i=2;i<=n;i++)
     {
          if(n%i==0)
          count++;
     }
     if(count>1){
       cout<<n<<" is not a prime number.";
     }
     else 
       cout<<n <<" is a prime number.";
     return 0;
}     
