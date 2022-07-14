#include <iostream>
#include <climits>
using namespace std;

int main()
{
    const int h_change=12;
    const double c_change=0.0254;
    const double p_change=2.2;
    int heigh,c_height;
    cout<<"请输入你的身高（英尺英寸）_______\b\b\b\b\b";
    cin>>heigh>>c_height;
    double m_heigh=(heigh*h_change+c_height)*c_change;

    cout<<"请输入你的体重（磅）_______\b\b\b\b\b";
    double weight;
    cin>>weight;
    double k_weight=weight/p_change;

    cout<<"你的BMI是"<<k_weight/(m_heigh*m_heigh);

    //cout<<"你的身高换算成英寸和英尺是:"<<(heigh/change)<<"英尺"<<(heigh%change)<<"英寸";
    cout<<endl;


    //system("pause");//命令框暂停
    return 0;
}


