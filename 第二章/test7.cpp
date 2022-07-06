#include <iostream>
using namespace std;

void she_to_hua(int h,int s);

int main()
{
    int h,s;
    cout<<"输入小时：";
    cin>>h;
    cout<<"输入分钟：";
    cin>>s;
    she_to_hua(h,s);

    //system("pause");//命令框暂停
    return 0;
}

void she_to_hua(int h,int s)
{

    cout <<"Time: "<<h<<":"<<s<<endl;

}
