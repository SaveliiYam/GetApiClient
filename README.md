# GetApiClient

Простой класс Client, который позволяет получить определенное поле с json файла сайта.
## Структура 
- Класс написан с использованием библиотеки Boost;
- Имеется класс Client;
- Класс позволяет получить поле с json файла;
- Получаемое поле можно указать в методе класса.

## Функции 
```cpp
std::string getFieldFromJsonn(std::string json, std::string field); // Позволяет получить поле из пакета json. 
//json - полученный пакет. field - это необходимое поле.
std::string getResponse(std::string ip); //Позволяет получить json пакет с сайта. ip - это нужный сайт.
```

## Пример

```cpp
#include <iostream>
#include "Client.h"

int main()
{
    Client client;
    std::string res = client.getResponse("yandex.ru");
    std::string field;
    std::cin >> field;
    std::cout << client.getFieldFromJsonn(res, field);
    return 0;
}
```
Программа выводит введеное нами поле с сайта Яндекс.ру.
