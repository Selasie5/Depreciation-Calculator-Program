/* This program calculates and displays the depreciation tables.
 *
 * Input: Amount to be depreciated and the number of years.
 * Output: A depreciation table
 */

#include <iostream>
#include <cassert>
#include <iomanip>
using namespace std;

int YearSum(int n)
{
    assert(n > 0);
    return n * (n+1)/2;
}
void DisplayTable(int numYears, double amount, double yearSum)
{
    cout << "\nYear-Depreciation"
    <<"\n-------------------\n";
    double depreciation;
    cout << showpoint << fixed << setprecision(2);
    for (int year=  1; year <= numYears; year++)
    {
        depreciation = (numYears-year +1) * amount /yearSum;
        cout << setw(3) << year
             << setw(13)<<depreciation << endl;
    }
}

int main() {
   int numYears;
   double amount;
   cout << "This program computes a depreciation table using\n"
           "the sum-of-the-years' digits method .\n\n"
           "Enter the number of years over which to depreciate: ";
   cin >> numYears;
   cout << "Enter the amount to be depreciated";
   cin>> amount;
   double sum = YearSum(numYears);
    DisplayTable(numYears, amount,sum);
    return 0;
}
