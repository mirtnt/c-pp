#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int d,f,m;
    cout<<"输入度"<<endl;
    cin>>d;
    cout<<"输入分"<<endl;
    cin>>f;
    cout<<"输入秒"<<endl;
    cin>>m;
    cout<<d<<" degrees "<<f<<" minutes "<<m<<" seconds = "<<double(d)+double(f)/60+double(m)/3600<<" degress ";

    //system("pause");//命令框暂停
    return 0;
}
