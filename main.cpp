//LECTURE 5
//SWITCH
//LOOPS

//SWITCH enter the number and got the day of the week
// #include<iostream>
// using namespace std;
// int main () {
//     int day;
//     cout<<"Enter number from 1-7: ";
//     cin>>day;
//     switch (day) {
//         case 1:
//             cout<<"It is Monday";
//             break;
//         case 2:
//             cout<<"It is Tuesday";
//             break;
//         case 3:
//             cout<<"It is Wednesday";
//             break;
//         case 4:
//             cout<<"It is Thursday";
//             break;
//         case 5:
//             cout<<"It is Friday";
//             break;
//         case 6:
//             cout<<"It is Saturday";
//             break;
//         case 7:
//             cout<<"It is Sunday";
//             break;
//         default:
//             cout<<"Error,please, enter number between 1 and 7";
//     }
//     return 0;
// }


//Switch
//Arithmetic operations

// #include<iostream>
// using namespace std;
// int main () {
//     char operation;
//     double num1, num2;
//     cout<<"Choose one of the arithmetic operations (+,-,/, *): ";
//     cin>>operation;
//     cout<<"Enter two numbers: ";
//     cin>>num1>>num2;
//     switch (operation) {
//         case '+':
//             cout<<"Result: "<<num1+num2;
//             break;
//         case '-':
//             cout<<"Result: "<<num1-num2;
//             break;
//         case '/':
//             cout<<"Result: "<<num1/num2;
//             break;
//         case '*':
//             cout<<"Result: "<<num1*num2;
//             break;
//         default:
//             cout<<"Invalid";
//     }
//     return 0;
// }

//Loops for while do while
//do while
// #include<iostream>
// using namespace std;
// int main () {
//     int number;
//     do {
//         cout<<"Enter a positive number: ";
//         cin>>number;
//     }while (number<0);
//     cout<<"The number is "<<number;
//     return 0;
// }


//for loop for repetition

// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=1; i<=10; i+=2 ) {
//         cout<<i<<'\n';
//     }
//     return 0;
// }


//Calculate harmonic series
// #include<iostream>
// using namespace std;
//     double harmonicseries (int number){
//         double sum=0;
//         for (int i=1; i<=number; ++i) {
//             sum+=1/number;
//         }
//         return sum;
//     }
// int main () {;
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (number<=0)
//         cout<<"Enter a positive number: ";
//     else
//         cout<<"The sum of harmonic series: "<<number<<harmonicseries<<endl;
//     return 0;
// }

//LAB5
//Problem 1.1.
// Write a program in C++ to print the first 10 natural numbers in one row.
// #include<iostream>
// using namespace std;
// int main (){
//     for (int i=1; i<=10; i++)
//         cout<<i<<endl;
//     return 0;
// }

//Problem 1.2
//1.2 Write a program in C++ to print the first N natural numbers in one row (take N from input)
// #include<iostream>
// using namespace std;
// int main () {
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     for (int i=1; i<=number; i++)
//         cout<<i<<'\n';
//     return 0;
// }

//Problem 1.3
//Write a program in C++ to print the sum of first 10 natural numbers in one row
// #include<iostream>
// using namespace std;
// int main (){
//     int sum;
//     for (int i=1; i<=10; i++)
//         sum+=i;
//         cout<<sum<<endl;
//    return 0;
// }

//Problem 1.4
//Write a program in C++ to print the sum of first N natural numbers in one row
// #include<iostream>
// using namespace std;
// int main () {
//     int number, sum;
//     cout<<"Enter a number: ";
//     cin>>number;
//     for (int i=1; i<=number; i++)
//         sum+=i;
//     cout<<sum<<'\n';
//     return 0;
// }

//Problem 1.5
//Write a program in C++ to print the average of first 10 natural numbers in one row
// #include<iostream>
// using namespace std;
// int main () {
//     int sum;
//     double average;
//     for (int i=1; i<=10; i++)
//         sum+=i;
//         average=sum/10;
//     cout<<"The average of 10 numbers is "<<average<<endl;
//     return 0;
// }


//Problem 1.6
//Write a program in C++ to print the average of first N natural numbers in one row
// #include<iostream>
// using namespace std;
// int main () {
//     int number, sum=0;
//     double average=0;
//     cout<<"Enter a number: ";
//     cin>>number;
//     for (int i=1; i<=number; i++)
//         sum+=i;
//         average=sum/number;
//     cout<<"The average of "<<number<<"numbers is "<<average<<'\n';
//     return 0;
// }

//Problem 2.1
//Write a program in C++ to print odd number among the
//first 10 natural numbers in one row
// #include<iostream>
// using namespace std;
// int main () {
//     for (int i=1; i<=9; i+=2)
//         cout<<i<<'\n';
//     return 0;
// }

//2.2
//Write a program in C++ to print even number among the
//first 10 natural numbers in one row
// #include<iostream>
// using namespace std;
// int main() {
//     for (int i=0; i<=10; i+=2)
//         cout<<i<<'\n';
//     return 0;
// }

//Problem 2.3
//Write a program in C++ to print odd number among the
//first N natural numbers in one row (take N from input)

// #include<iostream>
// using namespace std;
// int main (){
//     int number;
//     cout<<"Enter a number: ";
//     cin>>number;
//     for (int i=1; i<=number; i+=2)
//         cout<<i<<'\n';
//     return 0;
//}

//Switch problem
// #include<iostream>
// using namespace std;
// int main() {
//     int a,b, number;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
//     cout<<"Choose one number from 1 to 4: ";
//     cin>>number;
//     switch (number) {
//         case 1:
//             cout<<"Result: "<<a+b<<'\n';
//         break;
//         case 2:
//             cout<<"Result: "<<a-b<<'\n';
//         break;
//         case 3:
//             cout<<"Result: "<<a*b<<'\n';
//         break;
//         case 4:
//             cout<<"Result: "<<a/b<<'\n';
//         break;
//         default:
//             cout<<"Error"<<'\n';
//     }
//     return 0;
// }

//Problem 2.4
//Write a program in C++ to print even number among the
//first N natural numbers in one row(take N from input
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter a number:";
//     cin>>n;
//     for (int i=0; i<=n; i+=2)
//         cout<<i<<endl;
//     return 0;
// }

//Problem 2.5
//Write a program in C++ to print numbers within range from 1 to 100, that are divisible by 10.
// #include<iostream>
// using namespace std;
// int main (){
//     for (int i=10; i<=100; i+=10)
//         cout<<i<<'\n';
//     return 0;
// }

//Problem 2.6
//Write a program in C++ to print numbers within range from 1 to N, that are divisible by 10
// #include<iostream>
// using namespace std;
// int main () {
//     int num;
//     cout<<"Enter a number: ";
//     cin>>num;
//     for (int i=10; i<=num; i+=10)
//         cout<<i<<'\n';
//     return 0;
// }


//Problem 5
// #include<iostream>
// using namespace std;
// int main () {
//     int classes, hours;
//     double mark, total, average;
//     cout<<"Enter number of classes: ";
//     cin>>classes;
//     cout<<"Enter credit hours: ";
//     cin>>hours;
//     cout<<"Enter your mark: ";
//     cin>>mark;
//     for ( int i=1; i<=classes; i++)
//         total=0;
//         for (int j=1;j<=hours; j++)
//             total+=hours;
//     average=total/hours;
//     cout<<"Average GPA is "<<average<<'\n';
//     return 0;
// }

//Problem7
// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for (int i=0; i<n; i++ ) {
//         for (int j=0; j<n; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//

//problem8
// #include<iostream>
// using namespace std;
// int main () {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     for (int i=1; i<=n; i++) {
//         for (int j=0; j<i; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//Problem 9 //prime or not
// #include<iostream>
// using namespace std;
// int main() {
//     int number;
//     bool isPrime=true;
//     cout<<"Enter a number: ";
//     cin>>number;
//     if (number<2) {
//         cout<<"False";
//     }else {
//         for (int i=2; i*i<=number; i++) {
//             if (number%i==0) {
//                 isPrime=false;
//                 break;
//             }
//         }
//     }
//     if (isPrime) {
//         cout<<"It is a prime number";
//     }else {
//         cout<<"It is not a prime number";
//     }
//     return 0;
// }


//Problem10
// #include <iostream>
// using namespace std;
//
// // Function to calculate the sum of the series (1*1) + (2*2) + ... + (n*n)
// int sumOfSeries(int n) {
//     int sum = 0;
//     for (int i = 1; i <= n; i++) {
//         sum += (i * i);
//     }
//     return sum;
// }
//
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//
//     if (n < 1) {
//         cout << "Please enter a positive integer." << endl;
//         return 1;
//     }
//
//     cout << "Sum of the series: " << sumOfSeries(n) << endl;
//     return 0;
// }

//Problem 11 calculate both negative, positive, sum, average
// #include <iostream>
// using namespace std;
//
// int main() {
//     int num, countPos=0, countNeg = 0, count = 0;
//     double total = 0;
//     cout << "Enter numbers (end with 0): ";
//     while (cin >> num && num != 0) {
//         if (num > 0) countPos++;
//         else countNeg++;
//         total += num;
//         count++;
//     }
//
//     if (count == 0) {
//         cout << "No numbers entered except 0." << endl;
//     } else {
//         double average = total / count;
//         cout << "Positive numbers: " << countPos << endl;
//         cout << "Negative numbers: " << countNeg << endl;
//         cout << "Total: " << total << endl;
//         cout << "Average: " << average << endl;
//     }
//
//     return 0;
// } didnt work

//Problem12 1203 3021
// #include <iostream>
// using namespace std;
// int main () {
//     int num, reversedNum = 0;
//         cout << "Enter a number: ";
//         cin >> num;
//         while (num > 0) {
//             int digit = num % 10;
//             num/=10;
//             reversedNum = reversedNum * 10 + digit;
//         }
//         cout << "Reversed number: " << reversedNum << endl;
//         return 0;
//     }

//problem 13
// #include<iostream>
// using namespace std;
// int main () {
//      int n;
//      cout<<"Enter a number: ";
//      cin>>n;
//      for (int i=1; i<=n; i++) {
//          for (int j=0; j<i; j++) {
//              cout<<i;
//          }
//          cout<<endl;
//      }
//      return 0;
// }

//problem14
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main () {
//     int binaryNum,decimalNum=0,lastDigit,power=0;
//     cout<<"Enter a binary number: ";
//     cin>>binaryNum;
//     while (binaryNum>0) {
//         lastDigit=binaryNum%10;
//         binaryNum/=10;
//         decimalNum+=lastDigit*pow(2,power);
//         power++;
//     }
//     cout << "Decimal equivalent: " <<decimalNum<< endl;
//     return 0;
// }
