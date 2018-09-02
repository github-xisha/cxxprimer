/********************************************************************
  > File Name: 1.11.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月26日 星期日 20时22分15秒
********************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    int max,min;
    max= a>b?a:b;
    min= a>b?b:a;
    int i=0;
    while(min<=max)
    {
        cout<<min<<" ";
        if(i==10)
        {
            cout<<endl;
            i=0;
        }
        ++min;
        ++i;
    }
    cout<<endl;
}
