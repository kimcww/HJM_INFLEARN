#include <iostream>
#include <bitset>

using namespace std;

int main()
{

    const unsigned char option0 = 1 <<0;
    const unsigned char option1 = 1 << 1;
    const unsigned char option2 = 1 << 2;
    const unsigned char option3 = 1 <<3;

    unsigned char items_flag = 0;
    cout << bitset<8>(option0) << endl;
    cout << bitset<8>(option1) << endl;
    cout << bitset<8>(option2) << endl;
    cout << bitset<8>(option3) << endl;

    cout  << "No item " <<bitset<8>(items_flag) <<endl;

    // get item0

    items_flag |= option0;
    // get item1

    items_flag |= option1;

    cout << "Item : " << bitset<8>(items_flag) << endl;

    // lost item1

    items_flag &= ~option1;

    cout <<"Item :" <<bitset<8>(items_flag) <<endl;

    unsigned int pixel_color = 0xDAA520;
    unsigned int red_mask = 0xFF0000;
    unsigned int green_mask = 0x00FF00;
    unsigned int blue_mask = 0x0000FF;
    unsigned char red ,blue ,green;

    //24bit 크기이기에 char 로 보기위해서 shift 시켜야함

    red = (pixel_color & red_mask) >> 16;
    green = (pixel_color & green_mask) >> 8;
    blue = pixel_color & blue_mask;


    cout << "Red : " << std::bitset<8>(red) <<endl;
    cout << "Green : " << std::bitset<8>(green) <<endl;
    cout << "Blue : " << std::bitset<8>(blue) <<endl;
    return 0;
}
