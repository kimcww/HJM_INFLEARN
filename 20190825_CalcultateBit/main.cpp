#include<iostream>
#include<bitset>

using namespace std;
int main()
{
    // << left shift
    // >> right shift
    // ~ , & ,
    unsigned int a =3;
    cout << std::bitset<4>(a) << endl;

    unsigned int b = a <<1;

    cout << std::bitset<4>(b) << endl;

    int A = 0b0110;
    A = A>>2;
    cout << std::bitset<8>(A) << endl;
    int B=5,C=12;
    int D = B | C;
    cout << "B :" << std::bitset<8>(B) <<endl;
    cout << "C :" << std::bitset<8>(C) << endl;
    cout << std::bitset<8>(D) << endl;
    D = B & C;
    cout << std::bitset<8>(D) << endl;
    D = B ^ C;
    cout << std::bitset<8>(D) << endl;
    return 0;
}
