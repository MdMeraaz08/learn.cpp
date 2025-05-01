
//     FOR LOOP Questions
// 1. Print numbers from 1 to 10.  
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1 ; i<=10 ; i++){
        cout<<i<<endl;
    }

}


// 2. Print even numbers from 1 to 50.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1 ; i<=50 ; i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }

}

// 3. Print odd numbers between 1 and 100.  
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1 ; i<=100 ; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }

}
// 4. Print the first 10 multiples of 5.  
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1 ; i<=10 ; i++)
        {
            cout<<5*i<<endl;
        }

}
// 5. Calculate the sum of numbers from 1 to 100.  

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1 ; i<=100 ; i++)
        {
            sum += i;
        }
    cout << "Sum of numbers from 1 to 100 is: " << sum << endl;
}

// 6. Print numbers from 10 to 1 (reverse).  
#include <iostream>
using namespace std;

int main()
{   
    for (int i = 10 ; i>=1 ; i--){
        cout<<i<<endl;
    }
    cout << "Done!" << endl;

}   
// 7. Print the square of numbers from 1 to 20.  
#include <iostream>
using namespace std;

int main()
{   
    for (int i = 1 ; i<=20 ; i++){
        cout<<i*i<<endl;
    }
    cout << "Done!" << endl;

}
// 8. Print the table of a number entered by the user.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

// 9. Print all numbers divisible by 3 between 1 and 100.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0)
            cout << i << endl;
    }
}

// 10. Find factorial of a given number.
#include <iostream>
using namespace std;

int main()
{
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << "Factorial is: " << fact << endl;
}

// 11. Find the sum of all even numbers between 1 and n.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    cout << "Sum of even numbers: " << sum << endl;
}

// 12. Print all alphabets from 'A' to 'Z'.
#include <iostream>
using namespace std;

int main()
{
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << " ";
    }
    cout << endl;
}

// 13. Calculate the sum of squares of first n natural numbers.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    cout << "Sum of squares: " << sum << endl;
}

// 14. Print Fibonacci series up to n terms.
#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << endl;
}

// 15. Print prime numbers between 1 to 50.
#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 50; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            cout << i << " ";
    }
    cout << endl;
}

// 16. Check if a number is a prime number.
#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1)
        isPrime = false;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
}

// 17. Find the sum of digits of a number.
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

// 18. Reverse a number (e.g., 123 → 321).
#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed number: " << rev << endl;
}

// 19. Find the product of digits of a number.
#include <iostream>
using namespace std;

int main()
{
    int n, prod = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        prod *= n % 10;
        n /= 10;
    }
    cout << "Product of digits: " << prod << endl;
}

// 20. Find the smallest digit in a number.
#include <iostream>
using namespace std;

int main()
{
    int n, minDigit = 9;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d < minDigit)
            minDigit = d;
        n /= 10;
    }
    cout << "Smallest digit: " << minDigit << endl;
}

// 21. Find the largest digit in a number.
#include <iostream>
using namespace std;

int main()
{
    int n, maxDigit = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int d = n % 10;
        if (d > maxDigit)
            maxDigit = d;
        n /= 10;
    }
    cout << "Largest digit: " << maxDigit << endl;
}

// 22. Print a right-angled triangle pattern of stars (*).
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}

// 23. Print a square pattern of stars.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << "*";
        cout << endl;
    }
}

// 24. Print a number triangle (1, 22, 333, 4444...).
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << i;
        cout << endl;
    }
}

// 25. Print an inverted triangle pattern of stars.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
}


// WHILE LOOP Questions
// 26. Print numbers from 1 to 100 using while loop.  
#include <iostream>
using namespace std;

int main()
{
    int i =1;
    while(i<=100){
        cout<<i<<endl;
        i++;
    }

}
// 27. Calculate the sum of digits until the number becomes a single digit.  
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n >= 10) {
        sum = 0;
        while (n != 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    cout << "Single digit sum: " << n << endl;

}
// 28. Print the reverse of a string (without using reverse function).  
#include <iostream>
using namespace std;

int main()  
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int len = str.length();
    int i = len - 1;
    while(i >= 0) {
        cout << str[i];
        i--;
    }
    
    cout << endl;
}
// 29. Count the number of digits in a number.  
#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        n /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
}
// 30. Check if a number is a palindrome.  
#include <iostream>
using namespace std;

int main()
{   
    
    int n;
    cin >> n;
    string str = to_string(n);
    int len = str.size();
    bool isPalindrome = true;
    int i = 0;
    while(i>len/2){
        if(str[i] != str[len-i-1]){
            cout << n << " is not a palindrome." << endl;   
            break;
        }
        i++;
    }
    cout << n << " is a palindrome." << endl;   

}
// 31. Find the GCD (Greatest Common Divisor) of two numbers.  
#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2 ;
    while(n1!=0 && n2!=0){
            if(n1>n2){
                n1 = n1%n2;
            }
            else{
                n2 = n2%n1;
            }
        }
        if(n2==0 ) cout<<"Greatest Common Divisor is "<<n1 <<endl;
        else cout<<"Greatest Common Divisor is "<<n2 <<endl;
        
}

// 32. Find the LCM (Least Common Multiple) of two numbers.  
#include <iostream>
using namespace std;

int main()
{
    int n1;
    int n2 ;
    int lcm;
        
    int n = max(n1, n2);
    int i = 1;
    
    while(1) {
        int mul = n * i;
        
        if(mul % n1 == 0 && mul % n2 == 0) {
            lcm = mul;
            break;
        }
        i++;
    }
    
cout<<"Least Common Multiple is " <<lcm<<endl;

}
// 33. Print all Armstrong numbers between 1 and 1000.
// 1³ + 5³ + 3³ = 1 + 125 + 27 = 153. 

#include <iostream>
using namespace std;
bool isarmstrong(int n){
    int sum = 0;
    int temp = n;
    while(temp!=0){
        int digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    cout << "Armstrong numbers between 1 and 1000: ";
    int i = 1;
    while (i <= 1000 ) {
        if (isarmstrong(i)) {
            cout << i << " "<<endl;
        }
        i++;
    }
    cout << endl;
}

// 34. Print a pattern of numbers decreasing by 1.  
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    while(n>0){
        int j = n;
        while(j>0){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;

        n--;
    }
    

}
// 35. Print the multiplication table of n using while loop.  
#include <iostream>
using namespace std;

int main()
{   
    int n ;
    cin>>n;
    int i = 1;
    while(i<=10){
        cout<< n*i <<endl;
        i++;
    }

}
// 36. Find the power of a number (e.g., 2³) without using the Math.pow function.  
#include <iostream>
using namespace std;

int main()
{
    int B, E;
    cout << "Enter Base and exponent: ";
    cin >> B >> E;
    int result = 1;
    while (E != 0) {
        result *= B;
        E--;
    }
    cout << "Result: " << result << endl;

}
// 37. Sum the series 1 + 1/2 + 1/3 + ... + 1/n.  
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    double sum = 0.0;
    int i = 1;
    while (i <= n) {
        sum += 1.0 / i;
        i++;
    }
    cout << "Sum of series: " << sum << endl;

}
// 38. Find whether a number is a strong number (sum of factorial of digits = number).  
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == n)
        cout << n << " is a strong number." << endl;
    else
        cout << n << " is not a strong number." << endl;

}
// 39. Calculate the sum of odd digits only of a number.  
#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0)
            sum += digit;
        n /= 10;
    }
    cout << "Sum of odd digits: " << sum << endl;

}
// 40. Find the second largest digit in a number.  
#include <iostream>
using namespace std;

int main()
{
    int n, largest = -1, secondLargest = -1;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        int digit = n % 10;
        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        } else if (digit > secondLargest && digit != largest) {
            secondLargest = digit;
        }
        n /= 10;
    }

    cout << "Second largest digit: " << secondLargest << endl;

}



// DO-WHILE LOOP Questions
// 41. Print menu-driven program (addition, subtraction, multiplication, division).  
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, choice;
    do {
        cout << "Menu:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << static_cast<double>(num1) / num2 << endl;
                else
                    cout << "Division by zero is not allowed." << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

}
// 42. Keep accepting numbers until user enters 0 and find the sum.  
#include <iostream>
using namespace std;

int main()
{
    int sum=0,n;
    do{
        
        cin>>n;
        sum += n;
    }while(n!=0);
    cout<<"Sum is "<<sum<<endl;

}
// 43. Display a message at least once even if condition is false (test do-while).  
#include <iostream>
using namespace std;

int main()
{
    int n;
    do {
        cout << "Enter a number (0 to exit): ";
        cin >> n;
        if (n != 0)
            cout << "You entered: " << n << endl;
    } while (n != 0);
    cout << "Exited." << endl;

}
// 44. Generate a random number guessing game (keep guessing until correct).  
#include <iostream>
using namespace std;

int main()
{
    int randomNumber = 56;
    int guess;
    cout << "Guess the number (between 1 and 100): ";
    do {
        cin >> guess;
        if (guess < randomNumber)
            cout << "Too low! Try again: ";
        else if (guess > randomNumber)
            cout << "Too high! Try again: ";
        else
            cout << "Congratulations! You guessed it right." << endl;
    } while (guess != randomNumber);

}
// 45. Accept numbers and calculate the average, stop when user enters -1.  
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, count = 0, n;
    cout << "Enter numbers to calculate average (-1 to stop): ";
    do {
        cin >> n;
        if (n != -1) {
            sum += n;
            count++;
        }
    } while (n != -1);
    
    if (count > 0)
        cout << "Average: " << static_cast<double>(sum) / count << endl;
    else
        cout << "No numbers entered." << endl;

}
// 46. Print a countdown from n to 0 using do-while.  
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    do {
        cout << n << " ";
        n--;
    } while (n >= 0);
    cout << endl;
    cout << "Countdown finished!" << endl;

}
// 47. Keep asking user to enter a positive number, repeat if negative.  
#include <iostream>
using namespace std;

int main()
{
    int n;
    do {
        cout << "Enter a positive number (negative to exit): ";
        cin >> n;
        if (n < 0)
            cout << "Negative number entered. Exiting..." << endl;
        else
            cout << "You entered: " << n << endl;
    } while (n >= 0);
    cout << "Exited." << endl;

}
// 48. Print the pattern of stars where the number of stars is user input.  
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of stars: ";
    cin >> n;
    int i = 1;
    do {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
        i++;
    } while (i <= n);
    cout << "Pattern printed!" << endl;
    cout << endl;

}
// 49. Accept integers until the sum exceeds 100.  
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    cout << "Enter a Number : ";
    do {
        cin >> n;
        sum += n;
        cout << "Current sum: " << sum << endl;
    } while (sum <= 100);
    cout << "Sum exceeded 100. Exiting..." << endl;

}
// 50. Implement a login system: ask for password until the correct password is entered.
#include <iostream>
using namespace std;

int main()
{
    string password;
    string correctPassword = "password123";
    do {
        cout << "Enter password: ";
        cin >> password;
        if (password != correctPassword)
            cout << "Incorrect password. Try again." << endl;
    } while (password != correctPassword);
    cout << "You have successfully logged in." << endl;

}



