#include <iostream>

using namespace std;

int main()
{
    int size = 10; 
    int* arr = new int[size]; 
    int index = 0; 
    int sum = 0; 

    int input; 
    cin >> input;

    while (input != -1) 
    {
        arr[index] = input;
        sum += input;
        index++;   
      
        cin >> input; 
    }
  
    cout << sum << endl;

    return 0;
}
