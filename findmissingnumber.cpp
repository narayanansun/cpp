// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int array[] ={3,4,6,5,8,7,1};
    int min=0;
    int max=0;
    int arrayActualValue=0;
    int arrayExpectedValue=0;
    
    int sizeOfArray = sizeof(array)/sizeof(int);
    
    std::cout << "Array Size" << sizeOfArray << "\n";
    min = array[0];
    max = array[0];
    
    for (int i=0; i<sizeOfArray; i++)
    {
        arrayActualValue += array[i];
        if (min > array[i])
            min = array[i];
        if (max < array[i])
            max = array[i];
    }
    std::cout << "Min :" << min << "\n";
    std::cout << "Max :" << max << "\n";
    
    arrayExpectedValue = ((sizeOfArray+1) * (sizeOfArray+1+1) /2);
    std::cout << "arrayExpectedValue :" << arrayExpectedValue<< "\n";
    std::cout << "arrayActualValue :" << arrayActualValue << "\n";
    std::cout << "Missing Number :" << arrayExpectedValue - arrayActualValue << "\n";
    return 0;
}