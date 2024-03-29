#include <iostream>
#include <iomanip>
using namespace std;

void myMatrix(int ***, int);
void freeSpace(int **, int);

int main() {
    int **p;
    int N;
    cout << "N = ";
    cin >> N;
    myMatrix(&p, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << p[i][j];
        }
        cout << "\n";
    }
    freeSpace(p, N);
    return 0;
}

void myMatrix(int ***p, int N) {
    // rows
    *p = new int *[N];
    // columns
    for (int i = 0; i < N; i++) {
        (*p)[i] = new int[N];

        for (int j = 0; j < N; j++) {
            (*p)[i][j] = i + j;
        }
    }
}

void freeSpace(int **p, int N) {
    // Free memory for columns
    for (int i = 0; i < N; i++) {
        delete[] p[i];
    }
    // Free memory for rows
    delete[] p;
}