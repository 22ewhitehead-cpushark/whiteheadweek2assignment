#include <iostream>
#include <string>


int main () { 
    std::string itemName;
    double price;
    int quantity;
    double subtotal;
    double tax;
    double total;

    const double taxRate = 0.07;

    std::cout << "Enter item name: ";
    std::cin >> itemName;

    std::cout << "Enter price per item: ";
    std::cin >> price;

    std::cout << "Enter quantity: ";
    std::cin >> quantity;

    subtotal = price * quantity;
    tax = subtotal * taxRate;
    total = subtotal + tax;

    // Output
    std::cout << "\n----- RECEIPT -----\n";
    std::cout << "Item: " << itemName << std::endl;
    std::cout << "Price: $" << price << std::endl;
    std::cout << "Quantity: " << quantity << std::endl;
    std::cout << "Subtotal: $" << subtotal << std::endl;
    std::cout << "Tax (7%): $" << tax << std::endl;
    std::cout << "Total: $" << total << std::endl;
    std::cout << "-------------------\n";

    return 0;
}
