#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int hours, minutes, seconds;

    std::cout << "Введите количество часов: ";
    std::cin >> hours;
    std::cout << "Введите количество минут: ";
    std::cin >> minutes;
    std::cout << "Введите количество секунд: ";
    std::cin >> seconds;

    // Перевод времени в секунды
    int total_seconds = hours * 3600 + minutes * 60 + seconds;

    std::cout << "Будильник установлен на " << hours << " часов, "
              << minutes << " минут и " << seconds << " секунд.\n";

    // Ожидание
    std::this_thread::sleep_for(std::chrono::seconds(total_seconds));

    // Сигнал будильника
    std::cout << "\nВремя вышло! Будильник сработал!\n";

    return 0;
}
