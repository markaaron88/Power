/*
Title : power.cpp
Abstract:Write a C++ program called power.cpp to compute 2n for a nonnegative integer n. In this
program, you have to develop a recursive function to calculate it. And also, you can’t use a library
in the program.
Author: Mark Mariscal
ID: 7198
Date: 01/20/2020
 */


#include <iostream>
using namespace std;
int recursion(int n){

    if(n == 0){
        return 1;
    } else{
        return 2 * recursion(n - 1);
    }

}
int main(){

    int num;
    cout << "Enter a number:"; //asks input
    cin >> num; // recieves input
    int res = recursion(num);
    cout << "\nResult:" << res << endl ;
    return 0;
}