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
    Sales_item item,item2;
    std::cin>>item>>item2;
    if(item.isbn()==item2.isbn())
        std::cout<<"sum:"<<item+item2<<std::endl;
    return 0;
}



