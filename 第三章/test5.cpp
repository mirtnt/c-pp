#include <iostream>
#include <climits>
using namespace std;

int main()
{
    long long all_human;
    long long usa_human;
    cout<<"输入全球人口总数"<<endl;
    cin>>all_human;
    cout<<"输入美国人口总数"<<endl;
    cin>>usa_human;
    cout<<"美国人口总数占全球人口总数的"<<double(usa_human)/double(all_human)*100<<"%";





    //system("pause");//命令框暂停
    return 0;
}

