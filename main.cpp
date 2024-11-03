#include <iostream>

using namespace std;

int prompt() {
    int rows;
    while (true) {
        cout << "Input number of rows: "<< endl;
        cin >> rows;

        if (rows<1) {
            cout << "Out of range! Try again." << endl;
            continue;
        } else {
            break;
        }
    }
    return rows;
}

void make_triangle(int rows) {
    for(int i = 1; i <= rows; i++){
        for(int n = 1; n < rows - i + 1; n++)
            cout<<"  ";
        int val = 1;
        for(int n = 1; n <= i; n++){
            cout<<val<<"   ";

            val = val * (i - n)/n;
        }
        cout<<endl;
    }
}

int main() {
    int rows = prompt();
    make_triangle(rows);
    return 0;
}
