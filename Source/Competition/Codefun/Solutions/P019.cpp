/**/
/* Code by KingNNT */
#include <bits/stdc++.h>

#define pathio "/mnt/Learning And Working/Develop/C-CPP/GNU-Compiler/In-Out/"
// #define pathio "E:/Develop/C-CPP/GNU-Compiler/In-Out/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

int main()
{
	freopen(lfi);
	freopen(lfo);
	// ios_base :: sync_with_stdio (0);
	cin.tie(0);

	long int n;
	bool flag = false;
	while (cin >> n)
	{
		if (n == 19)
		{
			cout << n;
			flag = true;
			return 0;
		}
	}
	if (flag == false)
	{
		cout << "IMPOSSIBLE";
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
}