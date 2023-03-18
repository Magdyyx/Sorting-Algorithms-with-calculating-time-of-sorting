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
    void quick_sort(vector<T>& arr, int left, int right);
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


#endif //PROGRAM_SORTLIB_H
