#include <iostream>;
using namespace std;
int i, j, n,f,f1 = 0, f2 = 1;
int main()
{
	cout << "nhap n: ";
	cin >> n; 
	for (i = 1; i <= n; i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
		printf("%d",f);
		cout << " ";
	}
	system("pause");
}