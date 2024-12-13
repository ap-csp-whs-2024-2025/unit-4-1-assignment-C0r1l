#include <iostream>
#include <string>

int main()
{
  
  // \n is = new line 
  // std::endl = new line
  // std:: cout = computer output
// string is variable 
// needs quotation
// How to run code: g++ classwork.cpp -o classwork, then type ./classwork


//Exercise 1
  int x = 25;
  int y =3;

  int add_xy;
  int sub_xy;

  add_xy = x + y;
  sub_xy = x - y;

  std::cout << add_xy << std::endl << sub_xy << std::endl << x % y << std::endl;

  int z = 10;
  
    

//Exercise 2

  bool isSunny = true;
  bool hasUmbrella = false;

  std::cout << "IsSunny and hasUmbrella: " << (isSunny && hasUmbrella) << std::endl;
  std::cout << "isSunny or hasUmbrella: "  << (isSunny || hasUmbrella) << std::endl;
  std::cout << "isSunny is: " << (!isSunny) << std::endl;
  std::cout << "IsNotSunny and IsNotUmbrella: " << (!isSunny && !hasUmbrella) << std::endl;


  //Exercise 3

  int n = 7;
  double m = 4.0;
  bool hasLicense = false;

  std::cout << "N is greater than M?: " << (n > m) << std::endl;
  






 




  return 0;
}
