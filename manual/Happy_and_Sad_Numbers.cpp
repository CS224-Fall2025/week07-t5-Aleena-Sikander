#include <iostream>
#include <cmath>
using namespace std;

int FindHappiness(int num){
  int digit;
  int total = 0;
  if(num <= 9){
    return num;}
  else{
    int digit = num%10;
    int a = FindHappiness(num/=10)+pow(digit,2);
    total+=a;
    return a;
    }
}

int main() {
    int n;
    cout << "Enter a NUmber: " << endl;
    cin >> n;

    while (n < 1){
        cout << "Invalid input! Try again!" << endl;
        cin >> n;
    }

    int num = FindHappiness(n);

    if (num == 1)
    {
        cout << "Happy Number!";
    } else
    {
        cout << "Sad Number!";
    }

    return 0;
}
