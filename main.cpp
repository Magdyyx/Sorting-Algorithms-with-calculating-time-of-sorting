#include <iostream>
#include "sortlib.h"
using namespace std;

int main() {

    // ------------------------------------------------------------Applying Merge sort------------------------------------------------------------
    vector<int> v1 = generate_random_vector(200);
    vector<int> v2 = generate_random_vector(500);
    vector<int> v3 = generate_random_vector(1000);
    vector<int> v4 = generate_random_vector(5000);
    vector<int> v5 = generate_random_vector(10000);
    vector<int> v6 = generate_random_vector(20000);
    vector<int> v7 = generate_random_vector(50000);
    measure_time_of_sort(merge_sort,v1);
    measure_time_of_sort(merge_sort,v2);
    measure_time_of_sort(merge_sort,v3);
    measure_time_of_sort(merge_sort,v4);
    measure_time_of_sort(merge_sort,v5);
    measure_time_of_sort(merge_sort,v6);
    measure_time_of_sort(merge_sort,v7);
    // ------------------------------------------------------------Applying Quick sort------------------------------------------------------------



    return 0;
}