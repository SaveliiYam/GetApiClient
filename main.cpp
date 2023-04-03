#include <iostream>
#include "Client.h"

int main()
{
    Client client;
    std::string res = client.getResponse("yandex.ru");
    std::string field;
    std::cin >> field;
    std::cout << field << ": '" << client.getFieldFromJsonn(res, field) << "'";
    return 0;
}
