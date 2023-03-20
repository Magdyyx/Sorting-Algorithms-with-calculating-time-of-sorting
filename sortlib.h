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
namespace sortlib {
    vector<int> generate_random_vector(int n);
    int random_int(int min, int max);
    template <typename T>
    void measure_time_of_sort(void (*sort_func)(vector<T>&), vector<T>& arr) ;
    void generate_random_array_of_size_n();
    template <typename T>
    void bubble_sort(vector<T>& arr);
    template <typename T>
    void selection_sort(vector<T>& arr);
    template <typename T>
    void insertion_sort(vector<T>& arr);
    template <typename T>
    void merge_sort(vector<T>& arr);
    template <typename T>
    void quick_sort(vector<T>& arr);
    template <typename T>
    void shellSort(T arr[])
}

//-------------------------------------------Implementation of generating random arrays with random variables-------------------------------------------
template <typename T>
T random_int(T min, T max)
{
    mt19937 rng(random_device{}());
    uniform_int_distribution<T> dist(min, max);
    return dist(rng);
}
template <typename T>
vector<T> generate_random_vector(T n)
{
    vector<T> v(n);
    generate(v.begin(), v.end(), [](){ return random_int(0, 100); });
    return v;
}
//-------------------------------------------Implementation of calculating the time of sorting-------------------------------------------


template <typename T>
void measure_time_of_sort(void (*sort_func)(vector<T>&), vector<T>& arr) {
    auto start_time = chrono::high_resolution_clock::now();
    sort_func(arr);
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::microseconds>(end_time - start_time).count();
    cout << "Sorting time: " << duration << " microseconds" << endl;
}
//------------------------------------------------------------Implementation of Merge sort------------------------------------------------------------
template <typename T>
void merge(vector<T>& arr, int left, int mid, int right) {
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
void merge_sort_helper( vector<T>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        merge_sort_helper(arr, left, mid);
        merge_sort_helper(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
template <typename T>
void merge_sort( vector<T>& arr) {
    merge_sort_helper(arr, 0, arr.size() - 1);
}
template <typename T>
void print(vector<T> arr){
    for (auto num : arr) {
        cout << num << " ";
    }
    cout <<  endl;
}


//----------------------------------------------------------Implementation of quick sort----------------------------------------------------------

template <typename T>
T partition(vector<T>& arr, int low, int high) {
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
void quick_sort_helper(vector<T>& arr, int low, int high) {
    if (low < high) {
        int pivot_idx = partition(arr, low, high);
        quick_sort_helper(arr, low, pivot_idx - 1);
        quick_sort_helper(arr, pivot_idx + 1, high);
    }

}
template <typename T>
void quick_sort( vector<T>& arr) {
    quick_sort_helper(arr, 0, arr.size() - 1);
}

template <typename T>
void shellSort(T arr[])
{
    int size{sizeof(arr) / sizeof(arr[0])};
    int gap{size / 2};

    for (gap; gap > 0; gap--)
    {
        for (int i{}; i + gap < size; i++)
        {
            if (arr[i] > arr[i + gap])
                swap(arr[i], arr[i + gap]);
        }
    }
}
#endif //PROGRAM_SORTLIB_H
