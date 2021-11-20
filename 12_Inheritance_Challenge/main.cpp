#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "I_Printable.h"
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Utils.h"

using namespace std;

int main() {
    cout << setprecision(2) << fixed;
    
    Account* obj = new Trust_Account {"Methran", 1200};
    
    cout << *obj << endl;

    return 0;
}