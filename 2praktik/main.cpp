#include <iostream>
#include <regex> // для работы с регулярными выражениями
using namespace std;

bool validatePhone(const string& number) {
    regex phonePattern(R"(^(\+7|8)?\(?[0-9]{3}\)?[0-9]{3}-?[0-9]{2}-?[0-9]{2}$)");
    return regex_match(number, phonePattern);
}

int main() {
    string phone;
    cout << "Введите номер телефона: ";
    cin >> phone;

    if (validatePhone(phone)) {
        cout << "Номер корректный" << endl;
    } else {
        cout << "Номер некорректный" << endl;
    }
    return 0;
}
