#include <iostream>
#include <iomanip>

using namespace std;

double calculateRevolvingInterest(double balance, double annualRate, int days) {
    double dailyRate = annualRate / 100 / 365;
    return balance * dailyRate * days;
}

int main() {
    double balance, annualRate;
    int days;

    cout << "輸入未清償金額（NTD）：";
    cin >> balance;

    cout << "輸入年利率（%）：";
    cin >> annualRate;

    cout << "輸入計息天數：";
    cin >> days;

    double interest = calculateRevolvingInterest(balance, annualRate, days);

    cout << fixed << setprecision(2);
    cout << "需支付的循環利息為：NT$ " << interest << endl;

    return 0;
}