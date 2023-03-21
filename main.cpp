#include <iostream>
#include "sortlib.h"
using namespace std;

int main() {
    // -----------------------------------------------Generation of random vectors with different sizes-----------------------------------------------
    int *arr1 = generateRandomArray(200);
    int *arr2 = generateRandomArray(500);
    int *arr3 = generateRandomArray(1000);
    int *arr4 = generateRandomArray(5000);
    int *arr5 = generateRandomArray(10000);
    int *arr6 = generateRandomArray(20000);
    int *arr7 = generateRandomArray(50000);

    // ------------------------------------------------------------Applying Merge sort------------------------------------------------------------
//    merge_sort(arr1,200); 
//    merge_sort(arr2,500);
//    merge_sort(arr3, 500);
//    merge_sort(arr4, 1000);
//    merge_sort(arr5, 5000);
//    merge_sort(arr6, 10000);
//    merge_sort(arr7, 20000);
//    merge_sort(arr7, 50000);

    // print (arr2, 500);


    // ------------------------------------------------------------Applying Quick sort------------------------------------------------------------
//    quick_sort(arr1,200); 
//    quick_sort(arr2,500);
//    quick_sort(arr3, 500);
//    quick_sort(arr4, 1000);
//    quick_sort(arr5, 5000);
//    quick_sort(arr6, 10000);
//    quick_sort(arr7, 20000);
//    quick_sort(arr7, 50000);


    //----------------------------------------------------------------Applying Insertion sort------------------------------------------------

//    insertion_sort(arr1,200); 
//    insertion_sort(arr2,500);
//    insertion_sort(arr3, 500);
//    insertion_sort(arr4, 1000);
//    insertion_sort(arr5, 5000);
//    insertion_sort(arr6, 10000);
//    insertion_sort(arr7, 20000);
//    insertion_sort(arr7, 50000);


    //----------------------------------------------------------------Applying Selection sort------------------------------------------------

//    selection_sort(arr1,200); 
//    selection_sort(arr2,500);
//    selection_sort(arr3, 500);
//    selection_sort(arr4, 1000);
//    selection_sort(arr5, 5000);
//    selection_sort(arr6, 10000);
//    selection_sort(arr7, 20000);
//    selection_sort(arr7, 50000);


    //----------------------------------------------------------------Applying Bubble sort------------------------------------------------
//    bubble_sort(arr1,200); 
//    bubble_sort(arr2,500);
//    bubble_sort(arr3, 500);
//    bubble_sort(arr4, 1000);
//    bubble_sort(arr5, 5000);
//    bubble_sort(arr6, 10000);
//    bubble_sort(arr7, 20000);
//    bubble_sort(arr7, 50000);
    // print (arr1,200);








    auto start_time = chrono::high_resolution_clock::now();
    selection_sort(arr1,200);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);
    cout << "Sorting time: " << duration.count() << " milliseconds" << endl;

    auto start_time2 = chrono::high_resolution_clock::now();
    selection_sort(arr2,500);
    auto end_time2 = chrono::high_resolution_clock::now();
    auto duration2 = chrono::duration_cast<chrono::milliseconds>(end_time2 - start_time2);
    cout << "Sorting time: " << duration2.count() << " milliseconds" << endl;

    auto start_time3 = chrono::high_resolution_clock::now();
    selection_sort(arr3,1000);
    auto end_time3 = chrono::high_resolution_clock::now();
    auto duration3 = chrono::duration_cast<chrono::milliseconds>(end_time3 - start_time3);
    cout << "Sorting time: " << duration3.count() << " milliseconds" << endl;

    auto start_time4 = chrono::high_resolution_clock::now();
    selection_sort(arr4,5000);
    auto end_time4 = chrono::high_resolution_clock::now();
    auto duration4 = chrono::duration_cast<chrono::milliseconds>(end_time4 - start_time4);
    cout << "Sorting time: " << duration4.count() << " milliseconds" << endl;

    auto start_time5 = chrono::high_resolution_clock::now();
    selection_sort(arr5,10000);
    auto end_time5 = chrono::high_resolution_clock::now();
    auto duration5 = chrono::duration_cast<chrono::milliseconds>(end_time5 - start_time5);
    cout << "Sorting time: " << duration5.count() << " milliseconds" << endl;

    auto start_time6 = chrono::high_resolution_clock::now();
    selection_sort(arr6,20000);
    auto end_time6 = chrono::high_resolution_clock::now();
    auto duration6 = chrono::duration_cast<chrono::milliseconds>(end_time6 - start_time6);
    cout << "Sorting time: " << duration6.count() << " milliseconds" << endl;
    
    auto start_time7 = chrono::high_resolution_clock::now();
    selection_sort(arr7,50000);
    auto end_time7 = chrono::high_resolution_clock::now();
    auto duration7 = chrono::duration_cast<chrono::milliseconds>(end_time7 - start_time7);
    cout << "Sorting time: " << duration7.count() << " milliseconds" << endl;



    
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
        delete[] arr5;
        delete[] arr6;
        delete[] arr7;
    
    
    return 0;
}