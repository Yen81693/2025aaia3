/// week04-4b.cpp Part1:Input Part2:Output
/// UVA 100 The 3n+1 Problem
/// Part 3:Algorithm(while,if), Part 4:now
#include <iostream>
using namespace std;
int main()
{
	int a, b; ///Part1:Input
	while( cin >> a >> b ){
		int ans = 0;
		int now = 1; ///Part 4
		while(n != 1){ ///Part 3
			if(n%2==1) n = 3*n+1;
			else n = n / 2;
			now++;
		}
		if(now>ans) ans = now; ///Part 4
		printf("%d %d %d\n", a, b, ans);
	}/// Part2: Output
}
