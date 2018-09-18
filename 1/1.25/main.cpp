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
    Sales_item total,trans;
    if(std::cin>>total)
    {
        while(std::cin>>trans)
        {
            if(compareIsbn(total,trans))
            {
                total+=trans;
            }else{
                cout<<total<<endl;
                total=trans;
            }
        } 
        cout<<total<<endl;
    }else{
        cerr<<"no data input"<<endl; 
        return -1;
    }
    return 0;
}

