// Created by: Finn Kitor
// Date: September 28th, 2023
// This program asks the user for the diameter
// then it calculates and displays the total cost
// of the pizza with tax
#include <iomanip>
#include <iostream>

int main() {
    // declare constants
    const float LABOUR_COST = 2.00;
    const float RENTAL_COST = 2.25;
    const float INGRED_COST = 1.50;
    const float TAX_RATE = 0.13;

    // declare variables
    int diameter;
    float subtotal, tax, total;

    // get the user input to terminal
    std::cout << "Enter the diameter (inches): ";
    std::cin >> diameter;

    // calculate subtotal, tax and the total
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = subtotal * TAX_RATE;
    total = subtotal + tax;

    // terminal displays total
    std::cout << "The total with HST is: $" << std::fixed << std::setprecision(2) << std::setfill('0') << total << "\n";
}