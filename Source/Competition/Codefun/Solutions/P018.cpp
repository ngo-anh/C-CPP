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

	int n, i;
	do
		cin >> n;
	while (n > 1000);
	int *a = (int *)calloc(n, sizeof(int));
	for (i = 0; i < n; i++)
		cin >> *(a + i);
	cout << *a << endl
		 << *(a + i - 1);

	fclose(stdin);
	fclose(stdout);
	return 0;
}