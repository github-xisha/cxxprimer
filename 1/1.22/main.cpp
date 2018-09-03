/********************************************************************
  > File Name: main.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年09月03日 星期一 22时34分42秒
********************************************************************/

#include <iostream>
#include <string>
#include "Sales_item.h"

int main()
{
    Sales_item item,sum("abc");
    while(std::cin>>item)
    {
        if(compareIsbn(sum,item))
        {
            sum+=item;
        }
    }
    std::cout<<"sum:"<<sum<<std::endl;
    return 0;
}



