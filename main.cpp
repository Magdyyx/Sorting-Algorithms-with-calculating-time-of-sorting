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

    // ------------------------------------------------------------Calculating time of Merge sort------------------------------------------------------------
//    cout<<"Calculating Time of Merge sort:" << endl;
//    cout<<"Time of Vector of size 200"<<endl;
//    measure_time_of_sort(merge_sort,v1);
//    cout<<"Time of Vector of size 500"<<endl;
//    measure_time_of_sort(merge_sort,v2);
//    cout<<"Time of Vector of size 1000"<<endl;
//    measure_time_of_sort(merge_sort,v3);
//    cout<<"Time of Vector of size 5000"<<endl;
//    measure_time_of_sort(merge_sort,v4);
//    cout<<"Time of Vector of size 10000"<<endl;
//    measure_time_of_sort(merge_sort,v5);
//    cout<<"Time of Vector of size 20000"<<endl;
//    measure_time_of_sort(merge_sort,v6);
//    cout<<"Time of Vector of size 50000"<<endl;
//    measure_time_of_sort(merge_sort,v7);





    // ------------------------------------------------------------Applying Quick sort------------------------------------------------------------
//    quick_sort(v1); print (v1);
//    quick_sort(v2);
//    quick_sort(v3);
//    quick_sort(v4);
//    quick_sort(v5);
//    quick_sort(v6);
//    quick_sort(v7);


    //----------------------------------------------------------------Applying Insertion sort------------------------------------------------

    //insertion_sort(v1); 
    //insertion_sort(v2);
    //insertion_sort(v3);
    //insertion_sort(v4);
    //insertion_sort(v5);
    //insertion_sort(v6);
    //insertion_sort(v7);
    //print (v5);


    //----------------------------------------------------------------Applying Selection sort------------------------------------------------

    // selection_sort(v1);
    // selection_sort(v2);
    // selection_sort(v3);
    // selection_sort(v4);
    // selection_sort(v5);
    // selection_sort(v6);
    // selection_sort(v7);
    // print (v3);


    //----------------------------------------------------------------Applying Bubble sort------------------------------------------------
    // bubble_sort(v1);
    // bubble_sort(v2);
    // bubble_sort(v3);
    // bubble_sort(v4);
    // bubble_sort(v5);
    // bubble_sort(v6);
    // bubble_sort(v7);
    // print (v7);


    //----------------------------------------------------------------calculating time of selection sort------------------------------------------------
    cout<<"Calculating Time of insertion sort:" << endl;
    cout<<"Time of Vector of size 200"<<endl;
    measure_time_of_sort(selection_sort,arr1 , 200);
    cout<<"Time of Vector of size 500"<<endl;
    measure_time_of_sort(selection_sort,arr2 , 500);
    cout<<"Time of Vector of size 1000"<<endl;
    measure_time_of_sort(selection_sort,arr3,1000);
    cout<<"Time of Vector of size 5000"<<endl;
    measure_time_of_sort(selection_sort,arr4, 5000);
    cout<<"Time of Vector of size 10000"<<endl;
    measure_time_of_sort(selection_sort,arr5,10000);
    cout<<"Time of Vector of size 20000"<<endl;
    measure_time_of_sort(selection_sort,arr6,20000);
    cout<<"Time of Vector of size 50000"<<endl;
    measure_time_of_sort(selection_sort,arr7,50000);



    //----------------------------------------------------------------Calculating time of insertion sort------------------------------------------------
    // cout<<"Calculating Time of insertion sort:" << endl;
    // cout<<"Time of Vector of size 200"<<endl;
    // measure_time_of_sort(insertion_sort,v1);
    // cout<<"Time of Vector of size 500"<<endl;
    // measure_time_of_sort(insertion_sort,v2);
    // cout<<"Time of Vector of size 1000"<<endl;
    // measure_time_of_sort(insertion_sort,v3);
    // cout<<"Time of Vector of size 5000"<<endl;
    // measure_time_of_sort(insertion_sort,v4);
    // cout<<"Time of Vector of size 10000"<<endl;
    // measure_time_of_sort(insertion_sort,v5);
    // cout<<"Time of Vector of size 20000"<<endl;
    // measure_time_of_sort(insertion_sort,v6);
    // cout<<"Time of Vector of size 50000"<<endl;
    // measure_time_of_sort(insertion_sort,v7);


    //----------------------------------------------------------------calculating time of Bubble sort------------------------------------------------
    // cout<<"Calculating Time of Bubble sort:" << endl;
    // cout<<"Time of Vector of size 200"<<endl;
    // measure_time_of_sort(bubble_sort,v1);
    // cout<<"Time of Vector of size 500"<<endl;
    // measure_time_of_sort(bubble_sort,v2);
    // cout<<"Time of Vector of size 1000"<<endl;
    // measure_time_of_sort(bubble_sort,v3);
    // cout<<"Time of Vector of size 5000"<<endl;
    // measure_time_of_sort(bubble_sort,v4);
    // cout<<"Time of Vector of size 10000"<<endl;
    // measure_time_of_sort(bubble_sort,v5);
    // cout<<"Time of Vector of size 20000"<<endl;
    // measure_time_of_sort(bubble_sort,v6);
    // cout<<"Time of Vector of size 50000"<<endl;
    // measure_time_of_sort(bubble_sort,v7);


    // ------------------------------------------------------------Calculating time of Quick sort------------------------------------------------------------
    // cout<<"Calculating Time of Quick sort:" << endl;
    // cout<<"Time of Vector of size 200"<<endl;
    // measure_time_of_sort(quick_sort,v1);
    // cout<<"Time of Vector of size 500"<<endl;
    // measure_time_of_sort(quick_sort,v2);
    // cout<<"Time of Vector of size 1000"<<endl;
    // measure_time_of_sort(quick_sort,v3);
    // cout<<"Time of Vector of size 5000"<<endl;
    // measure_time_of_sort(quick_sort,v4);
    // cout<<"Time of Vector of size 10000"<<endl;
    // measure_time_of_sort(quick_sort,v5);
    // cout<<"Time of Vector of size 20000"<<endl;
    // measure_time_of_sort(quick_sort,v6);
    // cout<<"Time of Vector of size 50000"<<endl;
    // measure_time_of_sort(quick_sort,v7);


    
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
        delete[] arr5;
        delete[] arr6;
        delete[] arr7;
    
    
    return 0;
}