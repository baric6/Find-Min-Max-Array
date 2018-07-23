#include <iostream>

using namespace std;

int main (){

//find largest number//
    const int size = 6;
    int num_array[size] = {3,56, 5, 123, 0, 99};

    int largest, smallest;
    int count = 0;

    cout << endl;

     cout << "The numbers in the array is: ";
    for(int i = 0; i < size; i++){
   cout << num_array[i] << " ";
}
    cout << endl;

//crazy way to set everything to 0//
    largest = smallest = num_array[0];
    for (count = 1; count < size; count++){

        if(num_array[count] > largest){
        largest = num_array[count];
        }
        if(num_array[count] < smallest){
        smallest = num_array[count];
        }
    
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;
    cout << endl;
    return 0;
}
