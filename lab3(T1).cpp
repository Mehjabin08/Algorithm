#include <bits/stdc++.h>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index of the key if found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    srand(time(0)); // Seed the random number generator

    int n = 10000;
    ofstream fout("LinearSearch.txt");

    // Generate 10,000 random numbers and save them to a file
    for (int i = 0; i < n; i++) {
        int a = rand() % 10000 + 1;
        fout << a << endl;
    }

    fout.close(); // Close the file

    // Read the numbers back from the file
    ifstream fin("LinearSearch.txt");
    int numbers[n];
    for (int i = 0; i < n; i++) {
        fin >> numbers[i];
    }
    fin.close(); // Close the file

    // Perform linear search for the specific value
    int key = 7880;
    int index = linearSearch(numbers, n, key);
    if (index != -1) {
        cout << "Number " << key << " found at index " << index << endl;
    } else {
        cout << "Number " << key << " not found" << endl;
    }

    return 0;
}


