#include <iostream>

void move_zeros_to_left (int A[], int n){
    if (n < 1) return;

    int write_index = n - 1;
    int read_index = n - 1;

    while (read_index >= 0){
        if (A[read_index] != 0) {
            A[write_index] = A[read_index];
            write_index--;
        }
        read_index--;
    }

    while (write_index >= 0) {
        A[write_index] = 0;
        write_index --;
    }
}


int main() {
    int v[] = {1, 10, 20, 0, 59, 63, 0, 88, 0};
    int n = sizeof(v) / sizeof(v[0]);

    std::cout << "Original Array" <<std::endl;

    for(int x=0 ; x<n; x++) {
        std::cout << v[x];
        std::cout << ", ";
    }

    move_zeros_to_left(v, n);

    std::cout << std::endl<< "After Moving Zeroes to Left"<< std::endl;
    for(int i=0 ; i<n; i++) {
        std::cout << v[i];
        std::cout << ", ";
    }
}