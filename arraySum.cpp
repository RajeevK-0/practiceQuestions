#include<iostream>
using namespace std;

class DynamicArray{
   
    public:
    static int sum(int givenArray[], int sizeOfArray)
    {
        int t = 0;
        for(int i = 0; i<sizeOfArray; i++)
        {
            t += givenArray[i];
        }
        return t;
    }
};


int main(){
int givenArray[5] = {1,2,3,4,5};
int sumOfArray = DynamicArray::sum(givenArray, 5);
cout<<sumOfArray;
return 0;
}