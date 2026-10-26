# include <iostream>

int main(){

    double salary;
    int necessities;
    int investments;
    int savings;
    int studies;
    int leisure;

    std::cout << "===========================\n";
    std::cout << "PERSONAL FINANCE CALCULATOR\n";
    std::cout << "===========================\n\n";

    std::cout << "Enter your monthly salary: ";
    std::cin >> salary;

    std::cout << "\n";    


    std::cout << "Enter percentage for necessities: ";
    std::cin >> necessities;

    std::cout << "Enter percentage for investments: ";
    std::cin >> investments;

    std::cout << "Enter percentage for savings: ";
    std::cin >> savings;

    std::cout << "Enter percentage for studies: ";
    std::cin >> studies;

    std::cout << "Enter percentage for leisure: ";
    std::cin >> leisure;

    std::cout << "\n";    
    
    std::cout << "==============\n";
    std::cout << "MONTHLY BUDGET\n";
    std::cout << "==============\n\n";

    std::cout << "Salary: $ " << salary <<"\n\n";

    std::cout << "Necessities: $ " << salary * necessities / 100.0 << "\n";
    std::cout << "Investments: $ " << salary * investments / 100.0 << "\n";
    std::cout << "Savings: $ " << salary * savings / 100.0 << "\n";
    std::cout << "Studies: $ " << salary * studies / 100.0 << "\n";
    std::cout << "Leisure: $ " << salary * leisure / 100.0 << "\n\n";

    int totalPercentage = necessities + investments + savings + studies + leisure;
    double totalAllocated = totalPercentage * salary / 100;

    std::cout << "Total allocated: $ " <<totalAllocated <<"\n";
    std::cout << "Total percentage: " <<totalPercentage << "%\n";
    std::cout << "Remaining balance: $ " <<salary - totalAllocated <<"\n\n";

    return 0;
}
