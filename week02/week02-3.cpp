///week02-3.cpp 使用C++ 2011 年新版的字串stoi() 功能
///在 CodeBlocks 裡, 必須開啟 Settings - Compiler...把 c++11打勾勾
///SOIT106_ADVANCE_001 Using C++
#include <iostream> ///cin cout 毒入資料 印出資料
#include <string> ///string 字串的功能
using namespace std; ///使用 命名空間 標準的std
int main()
{
	string a; ///宣告字串 a
	cin >> a; ///毒入字串 a

	string ans; ///宣告字串 ans 放答案用的
	int N =  a.length(); ///字串 a 的長度
	for(int i=N-1; i>=0; i--){ ///倒過來的迴圈
		ans += a[i]; ///在迴圈裡, 把a[i] 塞到ans 的後面
	}

	cout << a << '+' << stoi(ans) << '='
		<< stoi(a) + stoi(ans) << endl;
}///stoi() is "string to int" 把字串變成整數
