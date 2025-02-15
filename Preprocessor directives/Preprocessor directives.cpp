// Preprocessor directives.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>




#define MODE 1



int ADD(int a, int b) {
    return (a + b);
}

int main()


{
    setlocale(LC_ALL, "rus");

    int a{};
    int b{};
    
#ifdef MODE


#if   MODE ==1
    std::cout << "Работаю в боевом режиме" << std::endl;
    std::cout << "Введите число 1:";
    std::cin >> a;
    std::cout << "Введите число 2:";
    std::cin >> b;
    std::cout << "Результат сложения:" << ADD(a, b) << std::endl;
#elif   MODE ==0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#else 
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif
#endif
#ifndef MODE
#error MODE is not defined
#endif
}
