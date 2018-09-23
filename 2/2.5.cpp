/********************************************************************
  > File Name  2.5.cpp
  > Author xisha
  > Mail  1540348087@qq.com
  > Created Time  2018年09月23日 星期日 16时37分47秒
********************************************************************/

#include <typeinfo>
#include <iostream>
using namespace std;

int main()
{
    cout<<"type  size"<<endl;
    cout<<"'a' "<<sizeof('a')<<endl;
    cout<<"u'a' "<<sizeof(u'a')<<endl;
    cout<<"U'a' "<<sizeof(U'a')<<endl;
    cout<<"L'a' "<<sizeof(L'a')<<endl;
    
    cout<<"\"a\" "<<sizeof("a")<<endl;
    cout<<"u\"a\" "<<sizeof(u"a")<<endl;
    cout<<"U\"a\" "<<sizeof(U"a")<<endl;
    cout<<"L\"a\" "<<sizeof(L"a")<<endl;

    cout<<"10 "<<sizeof(10)<<endl;
    cout<<"10u "<<sizeof(10u)<<endl;
    cout<<"10L "<<sizeof(10L)<<endl;
    cout<<"10LL "<<sizeof(10LL)<<endl;
    cout<<"10uL "<<sizeof(10uL)<<endl;
    cout<<"012 "<<sizeof(012)<<endl;
    cout<<"0xC "<<sizeof(0xC)<<endl;
    cout<<"0xffffffffff "<<sizeof(0xffffffffff)<<endl;

    cout<<"double "<<sizeof(double)<<endl;
    cout<<"float "<<sizeof(float)<<endl;
    cout<<"3.14 "<<sizeof(3.14)<<endl;
    cout<<"3.14f "<<sizeof(3.14f)<<endl;
    cout<<"3.14L "<<sizeof(3.14L)<<endl;

    cout<<"10. "<<sizeof(10.)<<endl;
    cout<<"10e-2 "<<sizeof(10e-2)<<endl;

}
