#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int change=12;
    int heigh;
    cout<<"请输入你的身高（英尺）_______\b\b\b\b\b";
    cin>>heigh;
    cout<<"你的身高换算成英寸和英尺是:"<<(heigh/change)<<"英尺"<<(heigh%change)<<"英寸";
    cout<<endl;


    //system("pause");//命令框暂停
    return 0;
}

