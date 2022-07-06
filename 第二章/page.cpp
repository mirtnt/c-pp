#include <iostream>
#include <limits>
#include <cmath>
using namespace std;
using std::cout;

void simon(int);

int main()
{
    int carrots;
    cout <<"随便输入一个整数"<<endl;
    cin >> carrots;
    cout <<"刚刚输入的是 "<<carrots<<endl;
    cout <<sqrt(carrots)<<endl;
    string a ="abcdefg";
    cout << a;
    cout <<"\n\n";
    simon(5);
    cout <<endl;
    std::cout << "cout:Hello World!" << std::endl;
    cout << "Hello World!" <<endl;


    //system("pause");//命令框暂停
    return 0;
}

void simon(int n)
{
    cout <<"simon says touch you toes "<<n<<" times."<<endl;
}
