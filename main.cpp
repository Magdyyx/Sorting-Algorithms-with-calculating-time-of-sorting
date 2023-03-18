#include <iostream>
#include "sortlib.h"
using namespace std;

int main() {
    // -----------------------------------------------Generation of random vectors with different sizes-----------------------------------------------
    vector<int> v1 = generate_random_vector(200);
    vector<int> v2 = generate_random_vector(500);
    vector<int> v3 = generate_random_vector(1000);
    vector<int> v4 = generate_random_vector(5000);
    vector<int> v5 = generate_random_vector(10000);
    vector<int> v6 = generate_random_vector(20000);
    vector<int> v7 = generate_random_vector(50000);
    // ------------------------------------------------------------Applying Merge sort------------------------------------------------------------
//    merge_sort(v1); print (v1);
//    merge_sort(v2);
//    merge_sort(v3);
//    merge_sort(v4);
//    merge_sort(v5);
//    merge_sort(v6);
//    merge_sort(v7);
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
    // ------------------------------------------------------------Calculating time of Merge sort------------------------------------------------------------
    cout<<"Calculating Time of Quick sort:" << endl;
    cout<<"Time of Vector of size 200"<<endl;
    measure_time_of_sort(quick_sort,v1);
    cout<<"Time of Vector of size 500"<<endl;
    measure_time_of_sort(quick_sort,v2);
    cout<<"Time of Vector of size 1000"<<endl;
    measure_time_of_sort(quick_sort,v3);
    cout<<"Time of Vector of size 5000"<<endl;
    measure_time_of_sort(quick_sort,v4);
    cout<<"Time of Vector of size 10000"<<endl;
    measure_time_of_sort(quick_sort,v5);
    cout<<"Time of Vector of size 20000"<<endl;
    measure_time_of_sort(quick_sort,v6);
    cout<<"Time of Vector of size 50000"<<endl;
    measure_time_of_sort(quick_sort,v7);
    return 0;
}