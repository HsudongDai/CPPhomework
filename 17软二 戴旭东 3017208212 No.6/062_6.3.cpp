//17软二戴旭东 转专业
#include <iostream>
using std::cout;

int reverse(int);
bool isPalindrome(int);

int main()
{
    int num;
    cout << "Judge whether it is a palindrome.\n";
    cout << "Please enter a number: ";
    std::cin >> num;
    if (isPalindrome(num))
        cout << "Yes, " << num << " is a palindrome.";
    else
        cout << "Sorry, it's not a palindrome.";
    return 0;
}

int reverse(int num)
{
    int reversed = 0;
    int rem = 0;
    while (num != 0){
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num){
    return num == reverse(num);
}
