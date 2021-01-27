#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool contain(string str1, string str2) {
	return (str1.find(str2) != string::npos);
}

vector<string> getMatch(vector<string> vec, string text) {
	vector<string> results;
	for (string i : vec) {
		if (contain(i, text)) {
			results.push_back(i);
		}
	}

	return results;
}

int main() {
	vector<string> dic = {"alibaba", "alphabet", "amazon", "apple", "google"};
	vector<string> results;

	string text;
	cout << "> ";
	cin >> text;

	for (string i : getMatch(dic, text)) {
		results.push_back(i);
	}

	for (string i : results) {
		cout << i << endl;
	}
	
	return 0;
}