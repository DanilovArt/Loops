/*������� ����� ����������
������� �� ����� ������� ��������� ����������� � ����� � ������� 
�� ��������� ���������� � �����������, �� ����������� ����������*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int i, n;
	int f=1;
	double b = 1;
	cout << "������� ����������: ";
		cin >> n;
		cout << "�����\t����������\n";
		for (i = 1; i <= n + n / 2.54; i++){
			
			if (b / 2.54 < f){
				cout << setprecision(3) << b / 2.54 << "\t" << b << endl;
				b++;
			}
			else{
				cout << f << "\t" << f*2.54<<endl;
				f++;
			}
		}
	return 0; 
}
