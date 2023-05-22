#include <iostream>
#include "stack.h"

using namespace std;

int main() {
	Stack stack;

	int input;
	do {
		cout << "1. Push  2. Pop  3. Exit" << endl;
		cout << "메뉴를 선택하세요 : " ;
		cin >> input;

		switch (input) {
		case 1:
			int val;
			cout << "Push할 값을 입력하세요 : " ;
			cin >> val;
			stack.ispush(val);
			break;
		case 2:
			stack.ispop();
			break;
		case 3:
			cout << "프로그램을 종료합니다." << endl;
			break;
		default:
			cout << "잘못된 입력입니다. 다시 입력하세요." << endl;
			break;
		}
	} while (input != 3);

	return 0;
}
