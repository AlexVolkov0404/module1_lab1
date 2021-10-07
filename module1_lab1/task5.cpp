// module1_lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Пошук трійок
#include <iostream>
 using namespace std;
int main()
{
	int x, y, z, n;
	bool p = false; //логічна зміна для виведення результату
	cout << "Enter your limit-N: ";
	cin >> n;	
	cout << "Your result:" << endl;
	for (z = 3; z <= n; z++) {                          //перебір всіх чисел
		for (y = 2; y < z; y++) {
			for (x = 1; x < y; x++) {
				if ((x * x) + (y * y) == (z * z)) {					//перевірка перебратих чисел
					cout << x << " " << y << " " << z << endl;
					cout << -x << " " << y << " " << z << endl;    //вивід усіх можливих комбінацій,що задовільняють умову, з пребратих чисел
					cout << -y << " " << -x << " " << z << endl;
					p = true;
				}
			}
		}
	}
	if (p == false) cout << "There is no such triplets of numbers on this interval.";
	cin.get();
	cin.get();
	return 0;
}

