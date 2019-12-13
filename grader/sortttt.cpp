// UVa 612 - DNA Sorting

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int count(const string & s) {
	int c = 0;
	for (int i = 0; i < s.length(); i++)
		for (int j = i + 1; j < s.length(); j++)
			if (s[i] > s[j])
				c++;
	return c;
}

struct d {
	string s;
	int w;
};

bool operator <(const d & a, const d & b) {
	return a.w < b.w;
}

int main() {
	int cases;
	cin >> cases;
	string line;
	getline(cin, line);
	for (; cases; cases--) {
		getline(cin, line);
		vector<d> dna;
		int l, n;
		cin >> l >> n;
		for (int i = 0; i < n; i++) {
			cin >> line;
			d dn = { line, count(line) * 10000 + i };
			dna.push_back(dn);
		}
		sort(dna.begin(), dna.end());
		for (int i = 0; i < n; i++)
			cout << dna[i].s << endl;
		if (cases > 1)
			cout << endl;
	}
	return 0;
}