/********************************************************************
  > File Name: 1.8.cpp
  > Author:xisha
  > Mail: 1540348087@qq.com
  > Created Time: 2018年08月25日 星期六 21时40分21秒
********************************************************************/

#include <iostream>

int main()
{
    /*
     *
     *注释对不能嵌套
     *
     *
     */
    std::cout<<"/*";
    std::cout<<"*/";
    std::cout<</* "*/" */"; 
    std::cout<</* "*/" /* "/*" */;
    return 0;
}
