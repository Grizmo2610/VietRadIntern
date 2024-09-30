#include <iostream>
#include <ostream>
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

void merge(vector<int>& vec, int left, int mid, int right) {
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    // Create temporary vectors for left and right subarrays
   vector<int> leftVec(n1);
   vector<int> rightVec(n2);

    // Copy data to temporary vectors
    for (int i = 0; i < n1; i++)
        leftVec[i] = vec[left + i];
    for (int j = 0; j < n2; j++)
        rightVec[j] = vec[mid + 1 + j];

    // Merge the temporary vectors back into the original vector
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftVec[i] <= rightVec[j]) {
            vec[k] = leftVec[i];
            i++;
        } else {
            vec[k] = rightVec[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftVec, if any
    while (i < n1) {
        vec[k] = leftVec[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightVec, if any
    while (j < n2) {
        vec[k] = rightVec[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& vec, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // Avoid overflow

        // Recursively sort the two halves
        mergeSort(vec, left, mid);
        mergeSort(vec, mid + 1, right);

        // Merge the sorted halves
        merge(vec, left, mid, right);
    }
}

void mergeSort(vector<int> & vec) {
    mergeSort(vec, 0, vec.size() - 1);
}

void algorithmTest() {
    vector<int> vec = {38, 27, 43, 3, 9, 82, 10, 3,1,5,4,123, 24,545,1, 34,2,1,44};
    mergeSort(vec);

    // Print the sorted vector
    for (const int& num : vec) {
        std::cout << num << " ";
    }
    cout << endl;

}
