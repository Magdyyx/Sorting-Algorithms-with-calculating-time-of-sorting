//
// Created by ahmed on 3/18/2023.
//
using namespace std;
#ifndef PROGRAM_SORTLIB_H
#define PROGRAM_SORTLIB_H
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <chrono>
#include <cstdlib>
#include <ctime>
namespace sortlib {
    template <typename T>
    T *generateRandomArray(T n);
    template<typename T>
    void measure_time_of_sort(void (*sort_func)(T[], int), T arr[], int n);

    void Swap(int&x, int&y);
    template <typename T>
    void bubble_sort(T arr[], int n);
    template <typename T>
    void selection_sort(T arr[], int n);
    template <typename T>
    void insertion_sort(T arr[] , int n);
    template <typename T>
    void merge_sort(T arr[], int n);
    template <typename T>
    void quick_sort(T arr[], int n);
    template <typename T>
    void shellSort(T arr[], const int size);
    template <typename T>
    void countSort(T arr[], const int size);
    
}

//-------------------------------------------Implementation of generating random arrays with random variables-------------------------------------------
template <typename T>
T* generateRandomArray(T n) {
    T* arr = new T[n];
    srand(time(NULL)); // Seed the random number generator with current time
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generate random number between 0 and 99
    }
    
    return arr;
}
//-------------------------------------------Implementation of Calculating time of sorts-------------------------------------------
template<typename T>
void measure_time_of_sort(void (*sort_func)(T[], int), T arr[], int n) {
    auto start_time = chrono::high_resolution_clock::now();
    sort_func(arr, n);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count();
    cout << "Sorting time: " << duration << " microseconds" << endl;
}
//------------------------------------------------------------Implementation of Merge sort------------------------------------------------------------
template <typename T>
void merge(T arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<T> L(n1), R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
template <typename T>
void merge_sort_helper(T arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort_helper(arr, left, mid);
        merge_sort_helper(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
template <typename T>
void merge_sort( T arr[], int n) {
    merge_sort_helper(arr, 0, n - 1);
}
template <typename T>
void print(T arr[], int n){
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout <<  endl;
}


//----------------------------------------------------------Implementation of quick sort----------------------------------------------------------

template <typename T>
T partition(T arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i + 1;
}
template <typename T>
void quick_sort_helper(T arr[], int low, int high) {
    if (low < high) {
        int pivot_idx = partition(arr, low, high);
        quick_sort_helper(arr, low, pivot_idx - 1);
        quick_sort_helper(arr, pivot_idx + 1, high);
    }

}
template <typename T>
void quick_sort(T arr[], int n) {
    quick_sort_helper(arr, 0, n - 1);
}

//------------------------------------------------------Implementation of insertion sort -------------------------------------------------
template <typename T>
void insertion_sort(T arr[], int n){
    int key, j;
    for (int i = 1; i < n ; i++)
    {
        key = arr[i];
        j= i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;         
    }
}

//------------------------------------------------------Swap function for positions------------------------------------------------
void Swap(int&x, int&y) {
    int temp = x;
    x = y;
    y = temp;
}   

//------------------------------------------------------Implementation of selection sort ------------------------------------------------
template <typename T>
void selection_sort(T arr[], int n){
    
    int i , j, min;
    for(i = 0; i < n; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;
        Swap(arr[i] , arr[min]);
    }
}


//------------------------------------------------------Implementation of Bubble sort ------------------------------------------------
template <typename T>
void bubble_sort(T arr[], int n){
    bool flag; //if true, array is sorted
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                Swap(arr[j], arr[j+1]);
                flag= false;
            }
        }
        if(flag == true){
            break;
        }
        
    }
    
}

//------------------------------------------------------------Implementation of Shell sort------------------------------------------------------------

template <class T>
void shellSort(T arr[], const int size)
{
    int gap{size / 2};

    for (gap; gap > 0; gap--)
        for (int i{}; i + gap < size; i++)
            if (arr[i] > arr[i + gap])
                swap(arr[i], arr[i + gap]);
}

//------------------------------------------------------------Implementation of Count sort------------------------------------------------------------

template <class T>
void countSort(T arr[], const int size)
{
    int max = arr[0];

    for (int i{1}; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    max++;
    int frequency[max];

    for (int i{}; i < max; i++)
        frequency[i] = 0;

    for (int i{}; i < size; i++)
        frequency[arr[i]]++;

    int x{};

    while (x <= size)
        for (int i{}; i < max; i++)
        {
            for (int j{}; j < frequency[i]; j++)
            {
                arr[x] = i;
                x++;
            }

            if (x > size)
                break;
        }
}




#endif //PROGRAM_SORTLIB_H
