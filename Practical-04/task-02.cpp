#include<iostream>
using namespace std;
namespace std1
{
   int sum(int a,int b)
   {
      return a+b;
   }
}
namespace std2
{
   float sum(float a,float b)
   {
      return a+b;
   }
}
using namespace std1;
using namespace std2;

int main()
{
   int a=sum(2,5.3);
   cout<<"Sum of entered values is:\n"<<a<<endl;
   return 0;
}           
