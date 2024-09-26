#include <iostream>
#include <cmath>

using namespace std;

int main() {

}


/*  1 Задание
    Написать функцию получающию на вход два числа.
    Если оба числа четные - фанкция возвращает их произведение.
    Если оба числа нечетные - функция возвращает их суму.
    Если одно из чесел четное а второе нечетное - функция возвращает это нечетное число
    
    int function(int a, int b) {
    if (a % 2 == 0 && b % 2 == 0) {
        return a * b;
    }
    else if (a % 2 != 0 && b % 2 != 0) {
        return a + b;
    }
    else {
        return (a % 2 != 0) ? a : b;
    }
}

int main() {
    int num1, num2;
    cout << "Input two numbers: ";
    cin >> num1 >> num2;
    int res = function(num1, num2);
    cout << "Result: " << res << endl;
}

    */
/*   2 задание
 
    
    double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

bool isR(double x1, double y1, double x2, double y2,
    double x3, double y3, double x4, double y4) {
    double d1 = dist(x1, y1, x2, y2);
    double d2 = dist(x2, y2, x3, y3);
    double d3 = dist(x3, y3, x4, y4);
    double d4 = dist(x4, y4, x1, y1);

    double diag1 = dist(x1, y1, x3, y3);
    double diag2 = dist(x2, y2, x4, y4);

    return (d1 == d3 && d2 == d4 && diag1 == diag2);
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cout << "Input cordinats 4 point (x1 y1 x2 y2 x3 y3 x4 y4): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    if (isR(x1, y1, x2, y2, x3, y3, x4, y4)) {
        cout << "Its recatengle." << endl;
    }
    else {
        cout << "It isnt recatengle." << endl;
    }

    return 0;
}
*/