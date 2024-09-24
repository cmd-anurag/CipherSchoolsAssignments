#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Ques 1:  You are given a image in n*m matrix now you have to rotate the image by 90 degree.
void reverse(vector<int>& row) {
    int start = 0;
    int end = row.size()-1;

    while(start < end) {
        swap(row.at(start), row.at(end));
        ++start;
        --end;
    }
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void rotate(vector<vector<int>>& matrix) {

    for(int i = 0; i < matrix.size(); ++i) {
        for(int j = i+1; j < matrix.at(0).size(); ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for(int i = 0; i<matrix.size(); ++i) {
        reverse(matrix[i]);
    }
}

// Ques 2:   Write a C++ program that take 2D array from user and then sort this array. 
vector<vector<int>> sort2D(vector<vector<int>> matrix) {
    vector<int> flatMatrix;
    int rows = matrix.size();
    int columns = matrix.at(0).size();

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            flatMatrix.push_back(matrix.at(i).at(j));
        }
    }
    sort(flatMatrix.begin(), flatMatrix.end());
    vector<vector<int>> sortedMatrix(rows, vector<int>(columns));
    int count = 0;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
           sortedMatrix[i][j] = flatMatrix[count];
            ++count;
        }

    }
    return sortedMatrix;
}

int main()
{
    vector<vector<int>> rotatematrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(rotatematrix);

    for(int i = 0; i < rotatematrix.size(); ++i) {
        for(int j = 0; j < rotatematrix[0].size(); ++j) {
            cout << rotatematrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    vector<vector<int>> matrix = {{7,4,1}, {8,5,2}, {9,6,3}};
    vector<vector<int>> sorted = sort2D(matrix);

    for(int i = 0; i < sorted.size(); ++i) {
        for(int j = 0; j < sorted[0].size(); ++j) {
            cout << sorted[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}