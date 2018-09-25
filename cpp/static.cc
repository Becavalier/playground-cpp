#include <iostream>

using namespace std;

class Account {
public:
  Account () = default;
  Account (string owner, double amount) : owner(owner), amount(amount) {};
  void calculate () {
    amount += amount * interestRate;
  }

  double total (void) const {
    return this->amount;
  }

  static double rate () {
    return interestRate;
  }

  static void rate(double p);

private:
  string owner;
  double amount;
  static constexpr int period = 30;
  static double interestRate;
};

void Account::rate(double p) {
  interestRate = p;
}

// Define static member outside the class defination;
double Account::interestRate = 100;

int main (int argc, char **argv) {
  Account account = {"YHSPY", 10000};
  account.rate(10.0);
  account.calculate();
  cout << account.total() << endl;
  return 0;
}
