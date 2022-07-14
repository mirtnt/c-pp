#include <iostream>
#include <climits>
using namespace std;

int main()
{
    char n_char=CHAR_MAX;
    short n_short=SHRT_MAX;
    int n_int=INT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;

    cout<<n_char<<endl;
    cout<<n_short<<endl;
    cout<<n_int<<endl;
    cout<<n_long<<endl;
    cout<<n_llong<<endl;
    cout<<sizeof n_char<<endl;
    cout<<sizeof n_short<<endl;
    cout<<sizeof n_int<<endl;
    cout<<sizeof n_long<<endl;
    cout<<sizeof n_llong<<endl;
    cout<<endl;

    int wrens (432);//c++有 同int wrens=432
    cout<<wrens<<endl;
    int emus{7};//同int emus=7
    cout<<emus<<endl;
    int rocs {};//同int rocs=0
    cout<<rocs<<endl;
    cout<<endl;

    unsigned char un_char=UCHAR_MAX;
    unsigned short un_short=USHRT_MAX;
    unsigned int un_int=UINT_MAX;//同unsigned un_int=UINT_MAX;
    unsigned long un_long=ULONG_MAX;
    unsigned long long un_llong=ULLONG_MAX;
    cout<<un_char<<endl;
    cout<<un_short<<endl;
    cout<<un_int<<endl;
    cout<<un_long<<endl;
    cout<<un_llong<<endl;
    cout<<sizeof un_char<<endl;
    cout<<sizeof un_short<<endl;
    cout<<sizeof un_int<<endl;
    cout<<sizeof un_long<<endl;
    cout<<sizeof un_llong<<endl;
    cout<<endl;

    int int10=42;
    int int08=042;
    int int16=0x42;
    cout<<int10<<endl;
    cout<<int08<<endl;
    cout<<int16<<endl;
    cout<<dec;//显示整数以10进制格式,属于iostream
    cout<<int10<<endl;
    cout<<oct;//显示整数以8进制格式,属于iostream
    cout<<int08<<endl;
    cout<<hex;//显示整数以16进制格式,属于iostream
    cout<<int16<<endl;
    cout<<dec;
    cout<<endl;

    char ch=80;
    cout<<ch<<endl;
    cout.put(ch+1);
    cout<<endl;
    cout.put('!');//通过cout对象调用put函数
    cout<<endl;

    cout<<"--------";
    cout<<endl;
    cout<<"\n";
    cout<<'\n';
    cout<<endl;
    cout<<"--------\b\b\b\b";//\b退格
    cout<<endl;

    //使用\u和\U输出unicode码
    int k\u00F6rper=0;//\u00F6 是o上面两个并排点
    cout <<"let them eat g\u00E2teau.";//\u00E2是
    cout<<k\u00F6rper<<endl;

    //使用wcout wcin 输入输出宽字符
    wchar_t bob=L'P';
    wcout<<bob<<endl;
    bob=L'\u00E2';
    wcout<<bob<<endl;
    wcout<<L"tall"<<endl;

    //unicode 类型
    char16_t ch1=u'q';
    char32_t ch2=U'\U0000222B';
    cout<<ch1<<endl;
    cout<<ch2<<endl;

    bool start=-100;//bool start=true
    bool stop =0;//bool stop=false;
    int ans=true;//int ans=1
    int promise=false;//int promise=0;
    cout<<endl;

    const int Months=12;//设置Months常量
    cout<<"常量Months is "<<Months;
    //Months=13;//常量设置后无法修改
    cout<<endl;

    float fudian=8.451f;
    cout<<"float fudian is "<<fudian<<endl;
    float fudian1=3.45E6;//3.45*10^6
    cout<<"float 3.45E6 is "<<fudian1<<endl;
    float fudian2=3.45E-6;//3.45*10^(-6)
    cout<<"float 3.45E-6 is "<<fudian2<<endl;
    cout.setf(ios_base::fixed,ios_base::floatfield);//强制以小数点输出
    cout<<"float 3.45E6 is "<<fudian1<<endl;
    cout<<"float 3.45E-6 is "<<fudian2<<endl;
    cout<<endl;

    float logs=120/4*5;
    cout <<"logs is "<<logs<<endl;
    int debt=7.2e12;
    cout <<"debt is "<<debt<<endl;
    int debt1{214514};//{}能检测类型是否匹配,且是否是有效值，所以对变量无效
    cout<<endl;


    char turn1='Q';
    cout<<turn1<<endl;
    cout<<(int)turn1<<endl;//from c
    cout<<int(turn1)<<endl;//made in c++
    cout<<endl;

    auto n=100;//int
    auto x=1.5;//double
    auto y=1.3e12L;//long double
    cout<<endl;

    //基本类型分为整型和浮点型
    //整型从小到大是bool,char,signed char,unsigned char,short,unisigned short,int,unsigned int,long,unisigned long,long long,unisigned long long;
    //还有char16_t,char32_t,wchar_t;
    //浮点型float,double,long double;

    short a1=80;
    unsigned int b1=42110;
    long long c1{3000000000};
    auto d1=2.2L;//long double
    cout<<endl;


    //system("pause");//命令框暂停
    return 0;
}


