#include<iostream>
#include<string>

using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "jecrc";
    cout << "str1: " << str2 << endl;

    int n = str1.length();
    cout << "Length of str1: " << n << endl;

    cout<<"After appending string is : "<<str1.append("Students")<<endl;
    cout<<"Is string empty : "<<str2.empty()<<endl;

    //concatation of string
    cout<<"After concatination string is : "<<str1+ " " +"bachhon"<<endl;
    