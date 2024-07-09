// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  // Used to store balance
  double balance = 0.0;
  // Used to store total deposits
  double totalDeposits = 0.0;
  // Used to store total withdrawals
  double totalWithdrawals = 0.0;
  // Take the beginning balance
  cout << "Enter beginning balance: ";
  cin >> balance;
  // Take the total deposits
  cout << "Enter total deposits: ";
  cin >> totalDeposits;
  // Take the total withdrawals
  cout << "Enter total withdrawals: ";
  cin >> totalWithdrawals;
  // Add the total deposits to the balance
  balance += totalDeposits;
  // Subtract the total withdrawals from the balance
  balance -= totalWithdrawals;
  // Display the ending balance
  cout << "Ending balance: " << balance << endl;

  return 0;
} // end of main function