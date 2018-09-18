/********************************************************************
  > File Name: main.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年09月03日 星期一 22时34分42秒
********************************************************************/

#include <iostream>
#include <string>
#include "Sales_item.h"
using namespace std;
int main()
{
    Sales_item item,tmp;
    std::cin>>tmp;
    uint64_t count=1;
    while(std::cin>>item)
    {
        if(compareIsbn(item,tmp))
        {
            ++count;
        }else{
            cout<<tmp.isbn()<<":"<<count<<endl;
            tmp=item;
            count=1;
        }
    }
    cout<<tmp.isbn()<<":"<<count<<endl;
    return 0;
}

