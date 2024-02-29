#include<iostream>

using namespace std;
int main(){

    int num,reversed_num=0,remainder;

    cout<<"Enter The Number : "<<endl;
    cin>>num;

    while(num!=0){
        remainder = num % 10;
        reversed_num = reversed_num*10 + remainder;
        num /= 10;
    }
    cout<<"Reversed number is :"<<reversed_num<<endl;


}