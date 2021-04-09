#include <iostream>
#include <fstream>
#include <string>

#define range 102

using namespace std;

int main() {
	string s;
//	char d[200];
	char d[20];
	fstream f, g;
	f.open("C:\\Users\\DELL\\Desktop\\Untitled.txt", ios::in);
//	g.open("Means.txt", ios::out | ios::binary);
	g.open("Words.txt", ios::out | ios::binary);
	for (int i = 0; i < range; i++) {
		getline(f, s);
		for (int j = 0; j < s.size(); ++j) {
			d[j] = s[j];
		}
		for (int j = s.size(); j < 20; ++j) {
			d[j] = NULL;
		}
		g.write(d, 20);
	}
	f.close();
	g.close();

	g.open("Means.txt", ios::in | ios::binary);
	for (int i = 0; i < range; i++) {
		g.read(d, 20);
		cout << d << "\n";
	}
	system("pause");
	return 0;
}
/*
int main() {
	fstream f;
	int g = 0;
	int d = range;
	bool a = false;
	f.open("Codemap.txt", ios::out | ios::binary);

	f.write(reinterpret_cast <char *> (&d), 4);
	for (int i = 0; i < range; ++i) {
		f.write(reinterpret_cast <char *> (&i), 4);
		f.write(reinterpret_cast <char *> (&i), 4);
		f.write(reinterpret_cast <char *> (&g), 4);
		f.write(reinterpret_cast <char *> (&a), 1);
	}
	f.close();
	return 0;
}*/