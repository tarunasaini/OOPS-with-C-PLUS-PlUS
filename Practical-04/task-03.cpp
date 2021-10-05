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
    cout<<sum(2,8.5)<<endl;
    cout<<sum(6.0,7)<<endl;
    cout<<sum(2,6)<<endl;
    return 0;
}              
