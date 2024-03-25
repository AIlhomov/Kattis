// Laboration A1

#include <iostream>

using namespace std;

template <typename T>
void insertion_sort(T arr[], int size){
    for (int i=1; i<size; i++){
        T key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
template <typename T>
void recursive_insertion_sort(T arr[], int n){
    if (n <= 1) return;
    recursive_insertion_sort(arr, n-1);
    T key = arr[n-1];
    int j = n-2;
    while (j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

template <typename T>
void selection_sort(T arr[], int n){
    for (int i=0; i<n-1; i++){
        int min_index = i;
        for (int j=i+1; j<n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
}

template <typename T>
void recursive_selection_sort(T arr[], int n, int i=0){
    if (i == n-1) return;
    int min_index = i;
    for (int j=i+1; j<n; j++){
        if (arr[j] < arr[min_index]){
            min_index = j;
        }
    }
    swap(arr[i], arr[min_index]);
    recursive_selection_sort(arr, n, i+1);
}

template <typename T>
int linear_search(T arr[], int n, T key){
    for (int i=0; i<n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

template <typename T>
int recursive_linear_search(T arr[], int n, T key, int i=0){
    if (i == n) return -1;
    if (arr[i] == key) return i;
    return recursive_linear_search(arr, n, key, i+1);
}

template <typename T>
int binary_search(T arr[], int n, T key){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (key == arr[mid]) return mid;
        if (key < arr[mid]) high = mid - 1;
        else if (key > arr[mid]) low = mid + 1;
    }
    return -1;
}

template <typename T>
int recursive_binary_search(T arr[], int low, int high, T key){
    if (low > high) return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid]) return mid;
    if (key < arr[mid]) return recursive_binary_search(arr, low, mid-1, key);
    return recursive_binary_search(arr, mid+1, high, key);
}

template <typename T>
int binary_insertion_search(T arr[], int n, T key){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (key == arr[mid]) return mid;
        if (key < arr[mid]) high = mid - 1;
        else if (key > arr[mid]) low = mid + 1;
    }
    return low;
}

template <typename T>
int recursive_binary_insertion_search(T arr[], int low, int high, T key){
    if (low > high) return low;
    int mid = (low + high) / 2;
    if (key == arr[mid]) return mid;
    if (key < arr[mid]) return recursive_binary_insertion_search(arr, low, mid-1, key);
    return recursive_binary_insertion_search(arr, mid+1, high, key);
}

template <typename T>
void binary_insertion_sort(T arr[], int n){
    for (int i=1; i<n; i++){
        T key = arr[i];
        int j = i-1;
        int index = binary_insertion_search(arr, i, key);
        while (j >= index){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

template <typename T>
void recursive_binary_insertion_sort(T arr[], int n){
    if (n <= 1) return;
    recursive_binary_insertion_sort(arr, n-1);
    T key = arr[n-1];
    int j = n-2;
    int index = recursive_binary_insertion_search(arr, 0, n-2, key);
    while (j >= index){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

template <typename T>
void print_array(T arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <typename T>
void recursive_print_array(T arr[], int n, int i=0){
    if (n == i) return;
    cout << arr[i] << " ";
    return recursive_print_array(arr, n, i+1);
}


int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    recursive_selection_sort(arr, size);

    recursive_print_array(arr, size);

    return 0;
}