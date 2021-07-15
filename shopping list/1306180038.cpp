//GULSEN KILIC 1306180038
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector <string> V2;
vector<int>V1;
vector<string>V5;
vector<vector<int> >Vect1;
vector<vector<string> >Vect2;
vector<vector<string> >Vect3;
void start() {
	cout << (char)42 << " WELCOME OUR APLICATION " << (char)42 << endl;
	cout << "-If you want to choose one of this operations, please pressing number which at the beginning of the operation.-" << endl;
	cout << "1) Creating a new shopping list " << endl;
	cout << "2) Show shopping list " << endl;
	cout << "3) Delete item from shopping list" << endl;
	cout << "4) Add to the shopping list" << endl;
	cout << "5) Edit the item" << endl;
	cout << "6) Mark as Done / Undone " << endl;
	cout << "7) Delete shopping list " << endl;
	cout << "8) Exit the application" << endl;
}

class CreatingNewList {
public:
	int amount;
	string item;

	void func1() {
		cout << endl << "Firstly write amount of item and then write name of item" << endl;
		cout << "If you're sure your list is over, press 0" << endl;
		for (int i = 0; i < 1000; i++) {

			cin >> amount;
			if (amount == 0) {
				break;
			}
			cin.ignore();
			getline(cin, item);
			if (item == "0") {
				break;
			}
			if (amount != 0 && item != "0") {
				V5.push_back("UNDONE");
				V1.push_back(amount);
				V2.push_back(item);

			}
		}
		Vect1.push_back(V1);
		Vect2.push_back(V2);
		Vect3.push_back(V5);
		V1.clear();
		V2.clear();
		V5.clear();
	}

};
void callFunction();
void guidance(int n) {
	if (n == 1) {
		CreatingNewList list;
		list.func1();
		callFunction();
	}
	if (n == 2) {
		if (Vect1.size() == 0 && Vect2.size() == 0) {
			cout << endl << "There are no shopping lists available." << endl;
		}
		else {
			for (int i = 0; i < Vect1.size(); i++) {
				cout << endl << i + 1 << ". list: " << endl;
				for (int j = 0; j < Vect1[i].size(); j++) {
					cout << j + 1 << ")" << " " << Vect1[i][j] << " " << Vect2[i][j] << " " << "( " << Vect3[i][j] << " )" << endl;
				}
				cout << endl;
			}
		}
		callFunction();
	}
	if (n == 3) {
		if (Vect1.size() == 1) {
			int i;
			cout << endl << "Which item would you like to delete? ";
			cin >> i;
			Vect1[0].erase(Vect1[0].begin() + i - 1);
			Vect2[0].erase(Vect2[0].begin() + i - 1);
			Vect3[0].erase(Vect3[0].begin() + i - 1);
		}
		if (Vect1.size() != 0 && Vect1.size() != 1) {
			int x, i;
			cout << endl << "From which list would you like to delete elements? Please press number which list's number: ";
			cin >> x;
			cout << endl << "Which item would you like to delete? ";
			cin >> i;
			Vect1[x - 1].erase(Vect1[x - 1].begin() + i - 1);
			Vect2[x - 1].erase(Vect2[x - 1].begin() + i - 1);
			Vect3[x - 1].erase(Vect3[x - 1].begin() + i - 1);
		}

		cout << endl << "The list has been successfully updated." << endl;
		cout << endl << "This is your updated list /lists:" << endl;
		for (int i = 0; i < Vect1.size(); i++) {
			cout << endl << i + 1 << ". list: " << endl;
			for (int j = 0; j < Vect1[i].size(); j++) {
				cout << j + 1 << ")" << " " << Vect1[i][j] << " " << Vect2[i][j] << " " << "( " << Vect3[i][j] << " )" << endl;
			}
			cout << endl;
		}
		callFunction();

	}
	if (n == 4) {
		if (Vect1.size() == 1) {
			int amount;
			string item;
			cout << endl << "Firstly write amount of item and then write name of item" << endl;
			cout << "If you're sure your list is over, press 0" << endl;
			for (int i = 0; i < 100; i++) {
				cin >> amount;
				if (amount == 0) {
					break;
				}
				cin.ignore();
				getline(cin, item);
				if (item == "0") {
					break;
				}
				if (amount != 0 && item != "0") {
					Vect1[0].push_back(amount);
					Vect2[0].push_back(item);
					Vect3[0].push_back("UNDONE");
				}
			}
		}
		if (Vect1.size() != 0 && Vect1.size() != 1) {
			int x;
			cout << endl << "Which list would you like to add elements to? Please press number which list's number: ";
			cin >> x;
			int amount;
			string item;
			cout << endl << "Firstly write amount of item and then write name of item" << endl;
			cout << "If you're sure your list is over, press 0" << endl;
			for (int i = 0; i < 100; i++) {
				cin >> amount;
				if (amount == 0) {
					break;
				}
				cin.ignore();
				getline(cin, item);
				if (item == "0") {
					break;
				}
				if (amount != 0 && item != "0") {
					Vect1[x - 1].push_back(amount);
					Vect2[x - 1].push_back(item);
					Vect3[x - 1].push_back("UNDONE");
				}
			}
		}
		cout << endl << "The list has been successfully updated." << endl;
		cout << endl << "This is your updated list /lists:" << endl;
		for (int i = 0; i < Vect1.size(); i++) {
			cout << endl << i + 1 << ". list: " << endl;
			for (int j = 0; j < Vect1[i].size(); j++) {
				cout << j + 1 << ")" << " " << Vect1[i][j] << " " << Vect2[i][j] << " " << "( " << Vect3[i][j] << " )" << endl;
			}
			cout << endl;
		}
		callFunction();

	}
	if (n == 5) {
		if (Vect1.size() == 1) {
			int i, a;
			int amount;
			string item;
			cout << endl << "Which item would you like to edit? ";
			cin >> i;
			cout << "If you want to change item's amount, please press '1' " << endl;
			cout << "If you want to change item's name, please press '2' " << endl;
			cout << "If you want to change item's amount and item's name, please press '3' " << endl;
			cout << endl << "Please press a number: ";
			cin >> a;
			if (a == 1) {

				cout << endl << "Please enter the new amount: ";
				cin >> amount;
				Vect1[0][i - 1] = amount;
			}
			if (a == 2) {

				cout << endl << "Please enter the new item: ";
				cin.ignore();
				getline(cin, item);
				Vect2[0][i - 1] = item;
			}
			if (a == 3) {

				cout << endl << "Please enter the new amount: ";
				cin >> amount;
				Vect1[0][i - 1] = amount;
				cout << endl << "Please enter the new item: ";
				cin.ignore();
				getline(cin, item);
				Vect2[0][i - 1] = item;

			}
		}
		if (Vect1.size() != 0 && Vect1.size() != 1) {
			int x;
			cout << endl << "Which list do you want to edit ? ";
			cin >> x;
			int i, a;
			int amount;
			string item;
			cout << endl << "Which item would you like to edit? ";
			cin >> i;
			cout << "If you want to change item's amount, please press '1' " << endl;
			cout << "If you want to change item's name, please press '2' " << endl;
			cout << "If you want to change item's amount and item's name, please press '3' " << endl;
			cout << endl << "Please press a number: ";
			cin >> a;
			if (a == 1) {

				cout << endl << "Please enter the new amount: ";
				cin >> amount;
				Vect1[x - 1][i - 1] = amount;
			}
			if (a == 2) {

				cout << endl << "Please enter the new item: ";
				cin.ignore();
				getline(cin, item);
				Vect2[x - 1][i - 1] = item;
			}
			if (a == 3) {

				cout << endl << "Please enter the new amount: ";
				cin >> amount;
				Vect1[x - 1][i - 1] = amount;
				cout << endl << "Please enter the new item: ";
				cin.ignore();
				getline(cin, item);
				Vect2[x - 1][i - 1] = item;

			}

		}
		cout << endl << "The list has been successfully updated." << endl;
		cout << endl << "This is your updated list /lists:" << endl;
		for (int i = 0; i < Vect1.size(); i++) {
			cout << endl << i + 1 << ". list: " << endl;
			for (int j = 0; j < Vect1[i].size(); j++) {
				cout << j + 1 << ")" << " " << Vect1[i][j] << " " << Vect2[i][j] << " " << "( " << Vect3[i][j] << " )" << endl;
			}
			cout << endl;
		}
		callFunction();
	}
	if (n == 6) {
		if (Vect1.size() == 1) {
			int b;
			cout << endl << "Please, press '1' for done item or press '0' for undone item." << endl;

			for (int i = 0; i < Vect1[0].size(); i++) {
				cout << i + 1 << ")" << " " << Vect1[0][i] << " " << Vect2[0][i];
				cout << endl << "Please press a number: ";
				cin >> b;
				if (b == 1) {
					Vect3[0][i] = "DONE";
				}
				if (b == 0) {
					Vect3[0][i] = "UNDONE";
				}
			}
		}
		if (Vect1.size() != 0 && Vect1.size() != 1) {
			int x;
			cout << endl << "Which list do you want to mark? ";
			cin >> x;
			int b;
			cout << endl << "Please, press '1' for done item or press '0' for undone item." << endl;

			for (int i = 0; i < Vect1[x - 1].size(); i++) {
				cout << i + 1 << ")" << " " << Vect1[x - 1][i] << " " << Vect2[x - 1][i];
				cout << endl << "Please press a number: ";
				cin >> b;
				if (b == 1) {
					Vect3[x - 1][i] = "DONE";
				}
				if (b == 0) {
					Vect3[x - 1][i] = "UNDONE";
				}
			}
		}
		cout << endl << "The list has been successfully updated." << endl;
		cout << endl << "This is your updated list /lists:" << endl;
		for (int i = 0; i < Vect1.size(); i++) {
			cout << endl << i + 1 << ". list: " << endl;
			for (int j = 0; j < Vect1[i].size(); j++) {
				cout << j + 1 << ")" << " " << Vect1[i][j] << " " << Vect2[i][j] << " " << "( " << Vect3[i][j] << " )" << endl;
			}
			cout << endl;
		}
		callFunction();
	}
	if (n == 7) {
		if (Vect1.size() == 1) {
			Vect1.clear();
			Vect2.clear();
			Vect3.clear();
		}
		if (Vect1.size() != 0 && Vect1.size() != 1) {
			int x;
			cout << endl << "Which list would you like to delete? ";
			cin >> x;
			Vect1[x - 1].clear();
			Vect2[x - 1].clear();
			Vect3[x - 1].clear();
		}
		cout << endl << "The list has been successfully cleared." << endl;
		callFunction();
	}

	if (n == 8) {
		cout << endl << "The application is closing.." << endl;
		cout << "If you liked our app, don't forget to share it with your friends." << endl;
		cout << endl << "Have a nice day :)" << endl;
	}

}
void callFunction() {
	int n;

	cout << endl << "Please press a number: ";

	cin >> n;

	guidance(n);
}
int main() {

	start();
	callFunction();

	return 0;
}
