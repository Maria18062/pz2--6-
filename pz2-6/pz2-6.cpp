#include <iostream>
#include <cmath> // Для sqrt і pow

using namespace std;

// Функція для обчислення відстані між двома точками
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    // Змінні для зберігання координат вершин трикутника
    double x1, y1, x2, y2, x3, y3;

    // Введення координат вершин трикутника
    cout << " (x1, y1): ";
    cin >> x1 >> y1;

    cout << " (x2, y2): ";
    cin >> x2 >> y2;

    cout << " (x3, y3): ";
    cin >> x3 >> y3;

    // Обчислення довжин сторін трикутника
    double side1 = calculateDistance(x1, y1, x2, y2);
    double side2 = calculateDistance(x2, y2, x3, y3);
    double side3 = calculateDistance(x3, y3, x1, y1);

    // Виведення довжин сторін
    cout << "The length of the side between vertex 1 and vertex 2: " << side1 << endl;
    cout << "The length of the side between vertex 2 and vertex 3: " << side2 << endl;
    cout << "The length of the side between vertex 3 and vertex 1: " << side3 << endl;

    return 0;
}