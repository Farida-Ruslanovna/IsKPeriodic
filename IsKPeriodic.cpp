// IsKPeriodic.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

// Функция,  является ли строка кратной числу k
bool IsKPeriodic(const std::string& str, int k) {
    int n = str.length(); // Длина строки

    if (n % k != 0) {
        return false; // Если длина не делится на k, строка не может быть кратной
    }

    std::string pattern = str.substr(0, k);

    for (int i = 0; i < n; i += k) {
        
        if (str.substr(i, k) != pattern) {
            
            return false;
        }
    }

    return true;
}

// Пример 
int main() {
    setlocale(LC_ALL, "Russian");

    std::string test1 = "abcabcabcabc";
    int k1 = 3; // Проверяем кратность 3

    // Вывод результата проверки
    if (IsKPeriodic(test1, k1)) {
        std::cout << "Строка является кратной " << k1 << std::endl;
    }
    else {
        std::cout << "Строка не является кратной " << k1 << std::endl;
    }

     return 0;
}