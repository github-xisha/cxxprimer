/********************************************************************
  > File Name: 1.19.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月29日 星期三 22时53分48秒
********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two number:"<<endl;
    cin>>a>>b;
    if(a>=b)
    {
        for(;a>=b;--a)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }else{
        for(;b>=a;--b)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}

