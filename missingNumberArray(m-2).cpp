#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class missingnumarray
{
public:
    static int missingNumber(int array[],int sizeOfArray){
        sort(array,array + sizeOfArray);
        int missingNumber = 0;
        for (int i = 0; i < sizeOfArray-1 && array[i+1]-array[i] == 1; i++)
        {
            missingNumber++;
        }
        return ++missingNumber;
    }
    
};
int main(){
    int array [5] = {1,2,3,5};
    int number = missingnumarray::missingNumber(array , 5);
    cout << number <<"\n";
    return 0;
}


