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

    //const std::string txt { "ABABDABACDABABCABAB" };
    //const std::string pat { "ABABCABAB" };

    //KMPSearch(pat, txt);
    //int test1[]{ 1, 4, 20, 3, 10, 5 };
    //const int test1[] { 1, 5, 3, 6, 5, 9 };
 
    //int test1[]{ 1, 4, 0, 0, 3, 10, 5 };
    //const int value = 7;   //6; //
    
    //int test1[]{ 1, 4 };
    //const int value = 7;   //6; //

    //int test1[]{ 6, 9, 3, 0, 5, 4 };
    //const int value = 18;   //6; //

    //subArraySum(&test1[0], 2, value);
    
    
    const std::string txt {"abcdabcdabcdabcd"};
    //const std::string txt{ "aaaaaaaaaa" };
    cout << txt << '\n';
    
    int len = txt.size() / 2;   // длина для теста; далее половины тсроки тестировать нет смысла

    for (int i = -1; i <= len; i++) {
        //KMPSearch(txt.substr(0, i), txt);
        cout << "K = " << i << "; result = " << (IsKPeriodic(txt, i) ? "истина" : "ложь") << '\n';
    }

    return 0;
}