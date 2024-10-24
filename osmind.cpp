//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//
//using namespace std;
//
//const int SIZE = 4;
//
//void initMatrix(int matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            matrix[i][j] = rand() % 100;
//        }
//    }
//}
//
//void initMatrix(double matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            matrix[i][j] = (rand() % 100) / 10.0;
//        }
//    }
//}
//
//void initMatrix(char matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            matrix[i][j] = 'A' + rand() % 26;
//        }
//    }
//}
//
//void printMatrix(int matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void printMatrix(double matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void printMatrix(char matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cout << matrix[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void findMinMaxDiagonal(int matrix[SIZE][SIZE]) {
//    int min = matrix[0][0], max = matrix[0][0];
//    for (int i = 1; i < SIZE; i++) {
//        if (matrix[i][i] < min) min = matrix[i][i];
//        if (matrix[i][i] > max) max = matrix[i][i];
//    }
//    cout << "Мінімум: " << min << ", Максимум: " << max << endl;
//}
//
//void findMinMaxDiagonal(double matrix[SIZE][SIZE]) {
//    double min = matrix[0][0], max = matrix[0][0];
//    for (int i = 1; i < SIZE; i++) {
//        if (matrix[i][i] < min) min = matrix[i][i];
//        if (matrix[i][i] > max) max = matrix[i][i];
//    }
//    cout << "Мінімум: " << min << ", Максимум: " << max << endl;
//}
//
//void findMinMaxDiagonal(char matrix[SIZE][SIZE]) {
//    char min = matrix[0][0], max = matrix[0][0];
//    for (int i = 1; i < SIZE; i++) {
//        if (matrix[i][i] < min) min = matrix[i][i];
//        if (matrix[i][i] > max) max = matrix[i][i];
//    }
//    cout << "Мінімум: " << min << ", Максимум: " << max << endl;
//}
//
//void sortRows(int matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        sort(matrix[i], matrix[i] + SIZE);
//    }
//}
//
//void sortRows(double matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        sort(matrix[i], matrix[i] + SIZE);
//    }
//}
//
//void sortRows(char matrix[SIZE][SIZE]) {
//    for (int i = 0; i < SIZE; i++) {
//        sort(matrix[i], matrix[i] + SIZE);
//    }
//}
//
//int main() {
//    int intMatrix[SIZE][SIZE];
//    double doubleMatrix[SIZE][SIZE];
//    char charMatrix[SIZE][SIZE];
//
//    initMatrix(intMatrix);
//    printMatrix(intMatrix);
//    findMinMaxDiagonal(intMatrix);
//    sortRows(intMatrix);
//    printMatrix(intMatrix);
//
//    initMatrix(doubleMatrix);
//    printMatrix(doubleMatrix);
//    findMinMaxDiagonal(doubleMatrix);
//    sortRows(doubleMatrix);
//    printMatrix(doubleMatrix);
//
//    initMatrix(charMatrix);
//    printMatrix(charMatrix);
//    findMinMaxDiagonal(charMatrix);
//    sortRows(charMatrix);
//    printMatrix(charMatrix);
//
//    return 0;
//}
//
//
//
//
//
//#include <iostream>
//
//using namespace std;
//
//int middlle(int a, int b) {
//    if (b == 0)
//        return a;
//    return middlle(b, a % b);
//}
//
//int main() {
//    int num1, num2;
//
//    cout << "Введіть два числа: ";
//    cin >> num1 >> num2;
//
//    cout << "Найбільший спільний дільник: " << middlle(num1, num2) << endl;
//
//    return 0;
//}
//
//
//Я не знаю як зробити 4((((((
// 
//
