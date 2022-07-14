#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long seconds;
    cout<<"输入秒数:";
    cin>>seconds;
    cout<<seconds<<" seconds = "<<seconds/(3600*24)<<" days "<<(seconds%(3600*24))/3600<<" hours "<<((seconds%(3600*24))%3600)/60<<" minutes "<<(((seconds%(3600*24))%3600)%60)<<"seconds";

    //system("pause");//命令框暂停
    return 0;
}
