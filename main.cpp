#include <iostream>

void showBalance(double balance);
double deposit();
double withdraw(double balance); //new file 10:31pm 31 dec

int main() {
    double balance = 0;
    int choice;
    do {
        std::cout << "****************************\n";
        std::cout << "What would you like to do?: \n";
        std::cout << "****************************\n";
        std::cout << "1:Show My Balance \n";
        std::cout << "2:Withdraw \n";
        std::cout << "3:Deposit \n";
        std::cout << "4:Exit\n";
        std::cin >> choice;
        switch (choice) {
            case 1: showBalance(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                std::cout << "Your balance is : " << balance << "\n";
                break;
            case 3:
                balance = deposit() + balance;
                break;
            case 4:
                std::cout << "Your Final Balance is: " << balance << "\n";
                break;
            default:
                std::cout << "Please enter a valid Option.\n";
                break;
        }
    } while (choice != 4);


}
void showBalance(double balance) {
    std::cout << "Your Balance is : " << balance << "\n";
}

double withdraw(double balance) {
    double amount;
    std::cout << "How much would you like to withdraw?: ";
    std::cin >> amount;
    if (amount > balance) {
        std::cout << "You dont have the Enough money to make this Withdrawl.\n";
        return 0;
    } else {
        std::cout << "You withdrew: \n" << amount << "\n";
        return amount;
    }

}
double deposit() {
    double amount;
    std::cout << "How much Would you like to Deposit?: ";
    std::cin >> amount;
    if (amount <= 0) {
        std::cout << "Please enter a valid amount\n";
        return 0;
    }else {
        std::cout << "You deposited: \n" << amount << "\n";
        return amount;
    }
}
