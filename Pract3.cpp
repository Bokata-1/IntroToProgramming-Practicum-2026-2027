 //Purva
 //int n;
 // do{
 //    std::cin >> n;
 // }while(n<1);
 //
 //for (int i = 1; i < n; i++) {
 //    for (int j = 1; j < n; j++) {
 //        if (i + j == n) {
 //            std::cout << "x = " << i << " y = " << j<<"\n" ;
 //        }
 //    }
 //}
 //Vtora
 //int number1, number2;
 //int del;
 //
 //    std::cin >> number1 >> number2;

 //if (number1 > number2) {
 //    del = number2;
 //}
 //else {
 //    del = number1;
 //}
 //while (del > 0) {
 //    if (number1 % del == 0 && number2 % del == 0) {
 //        std::cout << del<<" ";
 //    }
 //    del--;
 //}
 //Treta
 //unsigned number;
 //std::cin >> number;
 //unsigned del=1;
 //unsigned sborDeliteli = 0;
 //while (number > del) {
 //    if (number%del==0) {
 //        sborDeliteli = sborDeliteli + del;
 //    }
 //    del++;
 //}
 //if (number == sborDeliteli) {
 //    std::cout << "perfect";
 //}
 //else {
 //    std::cout << "not perfect";
 //}
 //Chetvurta
 //unsigned n;
 //std::cin >> n;
 //for (int i = 0; i < n; i++) {
 //    for (int j = 0; j < n; j++) {
 //        if (i == j) {
 //            std::cout << 0;
 //        }
 //        else if (j > i) {
 //            std::cout << "+";
 //        }
 //        else {
 //            std::cout << "-";
 //        }
 //    }
 //    std::cout << "\n";
 //}
 //Peta
 //int number, index;
 //std::cin >> number>>index;
 //int indexCopy = index;
 //bool expr = 0;
 //while (index > 1) {
 //    if (number<10) {
 //        std::cout << "Dont have digits ont index " << indexCopy;
 //        expr = 1;
 //        break;
 //    }
 //
 //    number = number/10;
 //    index--;
 //}
 //if(expr == 0){
 //    std::cout << number % 10;
 //}
//}
