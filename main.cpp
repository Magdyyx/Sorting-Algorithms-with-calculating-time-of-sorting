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
//
//     cout<<"Applying Merge sort on Arr2 with size 500"<<endl;
//     print (arr2, 500);


    // ------------------------------------------------------------Applying Quick sort------------------------------------------------------------
//    quick_sort(arr1,200); 
//    quick_sort(arr2,500);
//    quick_sort(arr3, 500);
//    quick_sort(arr4, 1000);
//    quick_sort(arr5, 5000);
//    quick_sort(arr6, 10000);
//    quick_sort(arr7, 20000);
//    quick_sort(arr7, 50000);
//     cout<<"Applying Quick sort on Arr2 with size 500"<<endl;
//     print (arr2, 500);


    //----------------------------------------------------------------Applying Insertion sort------------------------------------------------

//    insertion_sort(arr1,200); 
//    insertion_sort(arr2,500);
//    insertion_sort(arr3, 500);
//    insertion_sort(arr4, 1000);
//    insertion_sort(arr5, 5000);
//    insertion_sort(arr6, 10000);
//    insertion_sort(arr7, 20000);
//    insertion_sort(arr7, 50000);
//     cout<<"Applying Insertion sort on Arr2 with size 500"<<endl;
//     print (arr2, 500);


    //----------------------------------------------------------------Applying Selection sort------------------------------------------------

//    selection_sort(arr1,200); 
//    selection_sort(arr2,500);
//    selection_sort(arr3, 500);
//    selection_sort(arr4, 1000);
//    selection_sort(arr5, 5000);
//    selection_sort(arr6, 10000);
//    selection_sort(arr7, 20000);
//    selection_sort(arr7, 50000);
//     cout<<"Applying Selection sort on Arr2 with size 500"<<endl;
//     print (arr2, 500);


    //----------------------------------------------------------------Applying Bubble sort------------------------------------------------
//    bubble_sort(arr1,200); 
//    bubble_sort(arr2,500);
//    bubble_sort(arr3, 500);
//    bubble_sort(arr4, 1000);
//    bubble_sort(arr5, 5000);
//    bubble_sort(arr6, 10000);
//    bubble_sort(arr7, 20000);
//    bubble_sort(arr7, 50000);
//     cout<<"Applying Bubble sort on Arr2 with size 500"<<endl;
//     print (arr2, 500);



    measure_time_of_sort(merge_sort, arr1, 200);
    measure_time_of_sort(merge_sort, arr2, 500);
    measure_time_of_sort(merge_sort, arr3, 1000);
    measure_time_of_sort(merge_sort, arr4, 5000);
    measure_time_of_sort(merge_sort, arr5, 10000);
    measure_time_of_sort(merge_sort, arr6, 20000);
    measure_time_of_sort(merge_sort, arr7, 50000);




    
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
        delete[] arr5;
        delete[] arr6;
        delete[] arr7;
    
    
    return 0;
}