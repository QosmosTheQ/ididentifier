#include <iostream>
using namespace std;

int main()
{
    long long num, temp, digit, sum = 0;
    int count = 0;
    int lastDigit;

    cout << "TC Kimlik Numarası: ";
    cin >> num;

    temp = num;
    lastDigit = temp % 10;
    temp = temp / 10;

    while(temp != 0 && count < 10)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
        count++;
    }

    if (sum % 10 == lastDigit){
        cout << "kimlik doğru olabilir";
    }
    else{
        cout << "kimlik kesinlikle yanlış";
    }

    return 0;
}
