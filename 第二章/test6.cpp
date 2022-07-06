#include <iostream>
using namespace std;

double she_to_hua(double n);

int main()
{
    cout<<"输入光年：";
    double she;
    cin>>she;
    cout<<"转换成公里是"<<she_to_hua(she);

    //system("pause");//命令框暂停
    return 0;
}

double she_to_hua(double s)
{
    double h;
    h=s*63240;
    return h;
}
