#include<iostream>
using namespace std;
class missingnumarray
{
public:
    static int missingNumber(int array[],int sizeOfArray){
        int sumUptoN = sizeOfArray*(sizeOfArray+1)/2;
        for (int i = 0; i < sizeOfArray; i++)
        {
            sumUptoN -= array[i];
        }
    return sumUptoN;    
    }
    
};
int main(){
    int array [5] = {1,2,3,5};
    int number = missingnumarray::missingNumber(array , 5);
    cout << number <<"\n";
    return 0;
}


