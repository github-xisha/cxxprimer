/********************************************************************
  > File Name: 1.18.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月29日 星期三 22时31分56秒
********************************************************************/

#include <iostream>

int main()
{
    int currVal=0,val=0;
    if(std::cin>>currVal)
    {
        int count=1;
        while(std::cin>>val)
        {
            if(val==currVal)
            {
                ++count;
            }else{
                std::cout<<currVal<<" occurs "<<count<<" times"<<std::endl;
                count=1;
                currVal=val;
            }
        }
        std::cout<<currVal<<" occurs "<<count<<" times"<<std::endl;
    }
    return 0;
}
