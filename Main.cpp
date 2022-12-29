#include <iostream>
#include <string>
#include "Source.h"

using namespace std;


bool IsKPeriodic(const std::string _str, const int _k) {    // _k  - кратность строки
    if (_k <= 0)
        return false;

    std::string initial_subStr = _str.substr(0, _k);

    for (int i = _k; i < _str.size(); i += _k)
        if (_str.substr(i, _k) != initial_subStr)
            return false;

    return true;
}


int main() {
    system("chcp 1251");	// setlocale (LC_ALL,"");
    
    const std::string txt {"abcdabcdabcdabcd"};
    //const std::string txt{ "aaaaaaaaaa" };
    cout << txt << '\n';
    
    int len = txt.size() / 2;   // длина для теста; далее половины тсроки тестировать нет смысла

    for (int i = -1; i <= len; i++)
        cout << "K = " << i << "; result = " << (IsKPeriodic(txt, i) ? "истина" : "ложь") << '\n';

    return 0;
}
