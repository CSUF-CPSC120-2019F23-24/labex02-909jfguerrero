// Name: Resturant bill
// This program calculates the tax and tip on a restaurant bill.

#include <iostream>

int main()
{
  double meal_cost ;
  double tax = 7.75/100;
  double tip = 20/100;
  double bill ;

  //Get the meal_cost
  std::cout << "how much was the meal? ";
  std::cin >> meal_cost;

  //calculate the  double tax
  tax = meal_cost * 7.75 / 100 ;

  //display the double tax
  std::cout << "The tax due is $" << tax << std::endl;

  //calculate the tip
  tip = meal_cost * 20 /100 ;

  //display the double tip
  std::cout << "the tip due is $" << tip << std::endl;

  //calculate the total bill
  bill = meal_cost + tip + tax ;

  //display the total bill
  std::cout << "the bill due is $" << bill << std::endl;





}
