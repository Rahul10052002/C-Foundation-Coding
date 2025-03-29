#include<iostream>
#include<climits>   // This header is for INT_MAX and INT_MIN
#include<algorithm> // This header is for Max and Min Function
using namespace std;

int main() {
    int size = 7;
    int sum=0;
    int Num[size] = {10, 20, -10, 30, 10, 0, 10};
    int smallest = INT_MAX;    // for smallest, compare Num with +infinity
    int largest = INT_MIN;     // for largest, compare Num with -infinity
    for (int i = 0; i < size; i++) {
        largest = max(largest, Num[i]);
        smallest = min(smallest, Num[i]);
        sum =sum + Num[i];  // sum of all elements in an array.
    }
    cout <<"Largest Element in array is :" <<largest<<endl;
    cout <<"Smallest Element in array is :" <<smallest<<endl;
    cout << "Sum of all elements in array : " << sum;
    return 0;
}
