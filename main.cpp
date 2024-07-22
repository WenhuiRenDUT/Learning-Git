#include<iostream>
int main()
{
    std::cout<<"Hello"<<std::endl;

    int x = 1;
    for(int i = 0; i < 10; i++) {
        x = x + i;
    }
    std::cout<< x <<std::endl;

    for (int i = 0; i < 10; i++) {
        x = x + i;
    }
    std::cout << x << std::endl;

    for (int i = 0; i < 10; i++) {
        x = x + i;
    }
    std::cout << x << std::endl;
    return 0;
}