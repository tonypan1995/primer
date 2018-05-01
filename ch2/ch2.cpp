#include<iostream>

int main(){
    // ex2.3
    unsigned u = 10,u2=42;
    std::cout << u2-u << std::endl;
    std::cout << u-u2 << std::endl; 

    int i = 10, i2 = 42;
    std::cout << i2-i << std::endl;
    std::cout << i-i2 << std::endl; 

    std::cout << i-u << std::endl;
    std::cout << u-i << std::endl; 

    std::cout << -u << std::endl;
    
    // 2.1.3
    std::cout << "a really, really long string literal "
                 "that spans two lines" << std::endl;
    std::cout << '\7' << 'a' << '\12' << '\40' << '\0' << '\115' << '\x4d';
    // ex2.4

    return 0;
}
