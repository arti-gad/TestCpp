#include <iostream>
#include <vector>
#include <string>
#include <type_traits>
#include <algorithm>
#include <iostream>
#include <vector>
#include <random>
#include <fmt/format.h>
#include <utility>
#include <boost/asio.hpp>

using namespace std;

// TODO: Освежить память об CPack
// TODO: Добавить тесты (CTest, GTest)

int main()
{
    vector<string> msg{ "Hello", "C++", "World", "from", "VS Code", "and the C++ extension!" };
    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    std::cout << fmt::format("The answer is {}.\n", 42);
    boost::asio::ip::tcp::iostream stream("google.com", "http");
    stream << "GET /ip HTTP/1.1\r\nHost: google.com\r\nConnection: closer\n\r\n";
    std::cout << stream.rdbuf();
    return 0;
}