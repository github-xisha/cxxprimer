/********************************************************************
  > File Name: 1.9.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月26日 星期日 20时14分57秒
********************************************************************/

#include <iostream>

int main()
{
    int sum=0,val=50;
    while(val<=100)
    {
        sum+=val;
        ++val;
    }
    std::cout<<"val="<<val<<std::endl;
    std::cout<<"sum="<<sum<<std::endl;
}
