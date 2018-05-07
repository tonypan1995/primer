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
    //std::cout << '\7' << 'a' << '\12' << '\40' << '\0' << '\115' << '\x4d';
    // ex2.8
    std::cout << "2\115\12" << std::endl;
    std::cout << "2\t\115\12" << std::endl;

    // ex2.9
    // std::cin >> int input_value; // Reports error!
    // double salary = wage = 9999.99; // Reports error!
    
    // ex2.14
    std::cout << "ex2.14" << std::endl;
    int i3 = 100, sum = 0;
    for (int i3 = 0; i3 != 10; ++i3) {
        sum += i3;
        //std::cout << sum << '\n';
    }
    std::cout << i3 << " " << sum << std::endl;

    // ex2.16
    int i4 = 0, &r1 = i4;
    double d = 0, &r2 = d;
    r2 = 3.14159;
    std::cout << i4 << r1 << d << r2 << std::endl;
    r2 = r1;
    std::cout << i4 << r1 << d << r2 << std::endl;
    i4 = r2;
    std::cout << i4 << r1 << d << r2 << std::endl;
    r1 = d;
    std::cout << i4 << r1 << d << r2 << std::endl;
    
    // ex2.17
    int i5, &ri5 = i5;
    i5 = 5; ri5 = 10;
    std::cout << i5 << " " << ri5 << std::endl;

    // ex2.20
    int i6 = 42;
    int* p1 = &i6;
    *p1 = *p1 * *p1;
    std::cout << i6 << " " << *p1 << " " << p1 << std::endl;
    
    // ex2.25
    int* ip, *&r3 = ip;
    int i7 = 30;
    ip = &i7;
    std::cout << *ip << " " << ip << " " << r3 << std::endl;

    // ex2.29
    int *p2;
    int i8 = 7;
    const int *const p3 = &i8;
    //p2 = p3; // ERROR. Low-level const not ignored.
    std::cout << *p3 << std::endl;

    // ex2.37
    int a=3, b=4;
    decltype(a) c=a;
    decltype(a=b) d2=a;
    std::cout << a << b << c << d2 << std::endl;
    //std::cout << __cplusplus<<std::endl;
    
    return 0;
}
