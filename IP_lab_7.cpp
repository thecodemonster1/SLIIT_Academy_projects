

// -------------------------------------lab7ex1--------------------------------------------------------------


// by thecodemonster

#include <iostream>
#include <cmath>
// #include <chrono>  // for high_resolution_clock
using namespace std;

// main function
int main()
{
    int a[10], num, i;
    
    cout  << "Enter 10 numbers\n";
    for (i = 0; i <= 9; i++ )
    {
        cin >> a[i];
    }
    
//     a[10] = {25, 32, 45, 2, 13, 9, 6, 10, 17, 4};
    
    cout << "Enter the search key > ";
    cin >> num;
    int found = 0;
    
    for (i= 0; i < 10; i++)
    {
        if (a[i] == num)
        {
            found =1;
            cout << "The location of the search key : " << i ;
            break;
        }
        else{
            cout <<"When i = "<< i << " Search  key is not found !!!\n";
        }
    }
    return 0;
} 
// main function


// -------------------------------------lab7ex2--------------------------------------------------------------

// by thecodemonster

#include <iostream>
// #include <cmath>
using namespace std;

// main function
int main()
{
//     int A[5];
//     int B[5];
    int C[5];
    

    
    int A[5] = { 10, 20, 30, 40, 50, }; 
    int B[5] = { 34, 67, 12, 89, 12, }; 
    
//     for (int i = 0; i < 5; i++ )
//     {
//         cout << "Enter five numbers to arrray - A : ";
//         cin >> A[i]; 
//     }
//     cout << C[i] << endl;
    
    
    
//     for (int i = 0; i < 5; i++ )
//     {
//         cout << "Enter five numbers to arrray - B : ";
//         cin >> B[i];
//     }
    
    
    for (int i = 0; i < 5; i++)
    {
        C[i] = {(A[i] * B[i])};
        cout << C[i] << ", ";
    }
    
//     C[i] = {(A[i] * B[i])};
    
    
    
    return 0;
} 
// main function

// -------------------------------------lab7ex3--------------------------------------------------------------




// -------------------------------------lab7ex4--------------------------------------------------------------




// -------------------------------------lab7ex5--------------------------------------------------------------



// -------------------------------------lab7ex ending--------------------------------------------------------------
