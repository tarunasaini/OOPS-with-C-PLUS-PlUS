#include<iostream>
using namespace std;
int main()
{
  char c = 'a';
  bool b = 1;
  short s = 2;
  int i = 34;
  long l = 1234;
  float f = 4.1f;
  double d = 4.12356;
  long double ld = 4.3564148;
  wchar_t w=L'A';
  
  
  cout<<"char:"<<sizeof(char)<<"\n"<<"c:"<<sizeof(c)<<endl;
  cout<<"bool:"<<sizeof(bool)<<"\n"<<"b:"<<sizeof(b)<<endl;
  cout<<"short:"<<sizeof(short)<<"\n"<<"s:"<<sizeof(s)<<endl;
  cout<<"int:"<<sizeof(int)<<"\n"<<"i:"<<sizeof(i)<<endl;
  cout<<"long:"<<sizeof(long)<<"\n"<<"l:"<<sizeof(l)<<endl;
  cout<<"float:"<<sizeof(float)<<"\n"<<"f:"<<sizeof(f)<<endl;
  cout<<"double:"<<sizeof(double)<<"\n"<<"d:"<<sizeof(d)<<endl;
  cout<<"long double:"<<sizeof(long double)<<"\n"<<"ld:"<<sizeof(ld)<<endl;
  cout<<"wchar_t:"<<sizeof(wchar_t)<<"\n"<<"w:"<<sizeof(w)<<endl;
  
 
  return 0;
}
