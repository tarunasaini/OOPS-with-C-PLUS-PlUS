#include<iostream>
using namespace std;
namespace std1
{
  int sum(int a,int b)
  {
     return(a+b);
  }
}

namespace std2
{
   float sum(float a,float b)
   {
      return(a+b);
   }
}
int main()
{
    int a= std1::sum(6,3);
    float b=std2::sum(6.3,3.0);
    cout<<"Sum of entered values is :\n"<<a<<"\n"<<b<<endl;
    return 0;
    
}                 
  
