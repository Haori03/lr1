#include "cipher.h"

int main() {
    int key;
    std::cout << "Введите ключ: ";
    std::cin >> key;
    Cipher cipher(key);
    std::string text;
    std::cout << "Введите текст: ";
    std::cin >> text;
    int sw;
    std::cout << "Для шифрования введите - 1 \nДля расшифровки введите - 2 -->";
    std::cin >> sw;
    if (sw == 1){
        std::cout << "Зашифрованный текст: " << cipher.encrypt(text) << std::endl;
    }
    if (sw == 2){
        std::cout << "Расшифрованный текст: " << cipher.decrypt(text) << std::endl;
    }
    return 0;
}
