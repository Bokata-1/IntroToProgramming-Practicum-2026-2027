#include <iostream>

int main()
{   
    //Purva
    //int a, b;
    //std::cin >> a >> b;
    //std::cout << ((a > b) ? a : b);

    //Vtora
    //int number;
    //std::cin >> number;
    //if ((number % 4 == 0 && number%100!=0)||number%400==0) {
    //    std::cout << "Yes";
    //}
    //else {
    //    std::cout << "No";
    //}
    //Treta
    //int a, b, c;
    //std::cin >> a >> b >> c;
    //if (a + b > c && a + c > b && b + c > a) {
    //    std::cout << "Yes";
    //}
    //else {
    //    std::cout << "No";
    //}
    int x, y;
    std::cin >> x >> y;
    if (x > 0 && y > 0) {
        std::cout << "First";
    }
    else if (x > 0 && y < 0) {
        std::cout << "Fourth";
    }
    else if (x < 0 && y < 0) {
        std::cout << "Third";
    }
    else if (x < 0 && y > 0) {
        std::cout << "Second";
    }
}
