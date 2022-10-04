#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	/*Case1. Дано целое число в диапазоне 1–7. Вывести строку — название дня
недели, соответствующее данному числу (1 — «понедельник», 2 — «вторник» и т. д.).*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "понедельник"; break;
	case 2:
		cout << "вторник"; break;
	case 3:
		cout << "среда"; break;
	case 4:
		cout << "четверг"; break;
	case 5:
		cout << "пятница"; break;
	case 6:
		cout << "суббота"; break;
	case 7:
		cout << "воскресенье"; break;
	default:
		cout << "ошибка, нет такого дня недели"; break;
	}
	return 0;*/

	/*Case2. Дано целое число K. Вывести строку-описание оценки, соответствующей числу K (1 — «плохо», 2 — «неудовлетворительно»,
	3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»). Если K не лежит в диапазоне 1–5,
то вывести строку «ошибка».
*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "плохо"; break;
	case 2:
		cout << "неудовлетворительно"; break;
	case 3:
		cout << "удовлетворительно"; break;
	case 4:
		cout << "хорошо"; break;
	case 5:
		cout << "отлично"; break;
	default:
		cout << "ошибка"; break;
	}
	return 0;*/

	/*Case3. Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.).
	Вывести название соответствующего времени года («зима»,
«весна», «лето», «осень»).*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 2:
	case 12:
		cout << "зима"; break;
	case 3:
	case 4:
	case 5:
		cout << "весна"; break;
	case 6:
	case 7:
	case 8:
		cout << "лето"; break;
	case 9:
	case 10:
	case 11:
		cout << "осень"; break;
	default:
		cout << "ошибка"; break;
	}
	return 0;*/

	/*Case4◦
. Дан номер месяца — целое число в диапазоне 1–12 (1 — январь, 2 —
февраль и т. д.). Определить количество дней в этом месяце для невисокосного года.
*/
	/*int a;
	cin >> a;
	switch (a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "31 дней"; break;
	case 2:
		cout << "28 дней"; break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "30 дней"; break;
	default:
		cout << "ошибка"; break;
	}
	return 0;*/

    /*Case5. Арифметические действия над числами пронумерованы следующим
образом: 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление. Дан
номер действия N (целое число в диапазоне 1–4) и вещественные числа A
и B (В не равно 0). Выполнить над числами указанное действие и вывести
результат.
*/
/*int a, b, c;
cin >> a;
cin >> b;
cin >> c;
switch (c) {
case 1:
	cout << a + b; break;
case 2:
	cout << a - b; break;
case 3:
	cout << a * b; break;
case 4:
	cout << (double)a / b;; break;
default:
	cout << "ошибка"; break;
}
return 0;*/

/*Case6. Единицы длины пронумерованы следующим образом: 1 — дециметр,
2 — километр, 3 — метр, 4 — миллиметр, 5 — сантиметр. Дан номер
единицы длины (целое число в диапазоне 1–5) и длина отрезка в этих
единицах (вещественное число). Найти длину отрезка в метрах.
*/
/*int a, b;
cin >> a;
cin >> b;
switch (b) {
case 1:
	cout << a / 10.0; break;
case 2:
	cout << a * 1000; break;
case 3:
	cout << a; break;
case 4:
	cout << a / 1000.0; break;
case 5:
	cout << a / 100.0; break;
default:
	cout << "ошибка"; break;
}
return 0;*/

/*Case7. Единицы массы пронумерованы следующим образом: 1 — килограмм,
2 — миллиграмм, 3 — грамм, 4 — тонна, 5 — центнер. Дан номер единицы массы (целое число в диапазоне 1–5) и масса тела в этих единицах
(вещественное число). Найти массу тела в килограммах.*/
/*int a, b;
cin >> a;
cin >> b;
switch (b) {
case 1:
	cout << a; break;
case 2:
	cout << a / 1000000.0; break;
case 3:
	cout << a / 1000.0; break;
case 4:
	cout << a * 1000; break;
case 5:
	cout << a * 100; break;
default:
	cout << "ошибка"; break;
}
return 0;*/

//1
/*int a;
cin >> a;
if (a == 0) {
	cout << "верно";
}
else {
	cout << "неверно";
	}*/
//2
/*int a;
cin >> a;
if (a > 0) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//3
/*int a;
cin >> a;
if (a < 0) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//4
/*int a;
cin >> a;
if (a >= 0) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//5
/*int a;
cin >> a;
if (a <= 0) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//6
/*int a;
cin >> a;
if (a != 0) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//9
/*int test;
cin >> test;
if (test == true) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//10
/*int test;
cin >> test;
if (test != true) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//11
/*int a;
cin >> a;
if (a > 0 && a < 5) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//12
/*int a;
cin >> a;
if (a == 0 || a == 2) {
	cout << a + 7;
}
else {
	cout << a / 10.0;
}*/
//13
/*int a;
cin >> a;
int b;
cin >> b;
if (a <= 1 && b >= 3) {
	cout << a + b;
}
else {
	cout << a - b;
}*/
//14
/*int a;
cin >> a;
int b;
cin >> b;
if ((a > -2 && a < 11) || (b >= 6 && b < 14)) {
	cout << "верно";
}
else {
	cout << "неверно";
}*/
//15
/*int num;
int result;
cin >> num;
switch (num) {
case 1:
	cout << "зима";
case 2:
	cout << "весна";
case 3:
	cout << "лето";
case 4:
	cout << "осень";
default:
	cout << "ошибка"; break;
}
return 0;*/
//16
/*int day;
cin >> day;
switch (day) {
case 1:	
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
	cout << "1 деката"; break;
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
	cout << "2 деката"; break;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
	cout << "3 деката"; break;
default:
	cout << "ошибка"; break;
}
return 0;*/
//17
/*int mounth;
cin >> mounth;
switch (mounth) {
case 1:
case 2:
case 12:
	cout << "зима"; break;
case 3:
case 4:
case 5:
	cout << "весна"; break;
case 6:
case 7:
case 8:
	cout << "лето"; break;
case 9:
case 10:
case 11:
	cout << "осень"; break;
default:
	cout << "ошибка"; break;
}
return 0;*/
}