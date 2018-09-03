/********************************************************************
  > File Name: 1.13.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月26日 星期日 20时35分57秒
********************************************************************/

#include <iostream>
using namespace std;

void test()
{
    int sum=0;
    for(int val=50;val<=100;++val)
    {
        sum+=val;
    }
    cout<<"sum="<<sum<<endl;
}

void test2()
{
    for(int val=10;val>=0;--val)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void test3()
{
    cout<<"Enter two numbers:"<<endl;
    int a,b;
    cin>>a>>b;
    int max=a>b?a:b;
    int min=a>b?b:a;
    for(;min<=max;++min)
    {
        cout<<min<<" ";
    }
    cout<<endl;
}

int main()
{
    //test();
    //test2();
    test3();
}

