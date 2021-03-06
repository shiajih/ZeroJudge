#include <iostream>
#include <set>

using namespace std;

set<int> row[9], col[9], block[3][3];

void insert(int i, int j, int num) {
	row[i].insert(num);
	col[j].insert(num);
	block[i / 3][j / 3].insert(num);
}

int main() {
	int num, coun = 99;
	bool flag = false;

	while (flag != true) {
		for (int i = 0; i < 9 && flag == false; i++) {
			for (int j = 0; j < 9; j++) {
				if (cin >> num)
					insert(i, j, num);
				else
					flag = true;
			}
		}
		if (flag)
			break;
		
		if (row->size() == 9 && col->size() == 9 && (*block)->size() == 9) {
			cout << "yes" << endl;		
			row->clear();
			col->clear();
			(*block)->clear();
		}

		else {
			cout << "no" << endl;
			row->clear();
			col->clear();
			(*block)->clear();
		}
		cout << endl;
	}

	return 0;
}