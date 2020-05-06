#include <iostream>
using namespace std;
/*3.Задан двухмерный массив вещественных чисел. Необходимо каждый
элемент соответствующей строки разделить на сумму элементов этой строки.
Размерность массива(число столбцов, число строк) и значения его элементов
ввести с клавиатуры.*/
int main()
{
	int i, j;
	int n, m;
	float sum=0,f;
	cout << "Input n=";
	cin >> n;
	cout << endl;
	cout << "Input m=";
	cin >> m;
	cout << endl;
	int **a = new int* [n];
	float** b = new float* [n];
	//create matrix
	for (i = 0;i<n; i++)
	{
		a[i] = new int[m];
		for (j = 0; j < m; j++) 
		{
			cout << "Input element a[" << i << "][" << j << "]";
			cin >> a[i][j];
			cout << endl;
		}
	}
	//print matrix
	cout << "Your matrix:" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[i][j]<<" ";
		}
		cout << "\n";
	}
	//string elements/sum string
	cout << "Divide every elements to string sum:"<<endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			sum = sum + a[i][j];
			f = j;
			if (f == m-1) {
				for (j = 0; j < m; j++) {
					f=a[i][j] / sum;
					cout << f<<" ";
				}
			}
		}
		cout << endl;
		sum = 0;
	}
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
	system("pause");
	return 0;
}