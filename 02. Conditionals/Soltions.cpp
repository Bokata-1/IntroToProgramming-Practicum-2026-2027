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
    
    
//   Chetvurta
//    int x, y;
//    std::cin >> x >> y;
//    if (x > 0 && y > 0) {
//        std::cout << "First";
//    }
//    else if (x > 0 && y < 0) {
//        std::cout << "Fourth";
//    }
//    else if (x < 0 && y < 0) {
//        std::cout << "Third";
//    }
//    else if (x < 0 && y > 0) {
//        std::cout << "Second";
//    }
//    else if (x == 0) {
//        std::cout << "On axis";
//    }
//    else if (y == 0) {
//        std::cout << "On ordinate";
//    }
	//Peta
	//int month;
	//std::cin >> month;
	//if (month == 2) {
	//	int year;
	//	std::cin >> year;
	//	if (year % 4 == 0) {
	//		std::cout << 29;
	//	}
	//	else {
	//		std::cout << 28;
	//	}
	//}
	//	switch (month) {
	//	case 1:
	//		std::cout << 31; break;
	//	case 3:
	//		std::cout << 31; break;
	//	case 4:
	//		std::cout << 30; break;
	//	case 5:
	//		std::cout << 31; break;
	//	case 6:
	//		std::cout << 30; break;
	//	case 7:
	//		std::cout << 31; break;
	//	case 8:
	//		std::cout << 31; break;
	//	case 9:
	//		std::cout << 30; break;
	//	case 10:
	//		std::cout << 31; break;
	//	case 11:
	//		std::cout << 30; break;
	//	case 12:
	//		std::cout << 31; break;
	//	}
	//Shesta
	//int a, b;
	//std::cin >> a>> b;
	//if ((a > 99 || a < 10) || (b > 99 || b < 10)) {
	//	std::cout << "Invalid input";
	//}
	//int n1 = a / 10;
	//int n2 = a % 10;
	//int n3 = b / 10;
	//int n4 = b % 10;
	//int number = (a / 10) * 1000 + (a % 10) * 100 + b;
	//std::cout << number;
	//if (n1 < n2 && n2 < n3 && n3 < n4) {
	//	std::cout << "Yes";
	//}
	//else {
	//	std::cout << "No";
	//}
	 
	}
Sedma -  ne znam
    Osma
    int a, b;
    std::cout << "Enter numbers";
    std::cin >> a >> b;
    std::cout << "Choose: \n1)+\n2)-\n3)*\n4)/\n5)%";
    int number;
    std::cin >> number;
    switch (number) 
    {
    case 1:
        std::cout << a + b;
        break;
    case 2:
        std::cout << a - b;
        break;
    case 3:
        std::cout << a * b;
        break;
    case 4:
        std::cout << a / b;
        break;
    case 5:
        std::cout << a % b;
        break;
    }
}
