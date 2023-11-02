#include <iostream>
#include <string>
using namespace std;
class Item {
protected:
string title;
double price;
public:
void getData() {
cout << "Enter title: ";
cin.ignore();
getline(cin, title);
cout << "Enter price: ";
cin >> price;
}

void displayData() {
cout << "Title: " << title << endl;
cout << "Price: " << price << endl;
}
};
class Sale {
protected:
double salesFigure[3];
public:
void getData() {
cout << "Enter sales figures for three months:\n";
for (int i = 0; i < 3; i++) {
cout << "Month " << i + 1 << ": ";
cin>>salesFigure[i];
}
}
void displayData() {
cout << "Sales Figures for Three Months:\n";
for (int i = 0; i < 3; i++) {
cout << "Month " << i + 1 << ": " << salesFigure[i] << endl;
}
}
};
class HWItem : public Item, public Sale {
public:
void getData() {
Item::getData();
Sale::getData();
}
void displayData() {
Item::displayData();
Sale::displayData();
}
};

class SWItem : public Item, public Sale {
public:
void getData() {
Item::getData();
Sale::getData();
}
void displayData() {
Item::displayData();
Sale::displayData();
}
};
int main() {
HWItem hwItem;
SWItem swItem;
cout << "Enter Hardware Item Details:\n";
hwItem.getData();
cout << "\nEnter Software Item Details:\n";
swItem.getData();
cout << "\nDisplaying Hardware Item Details:\n";
hwItem.displayData();
cout << "\nDisplaying Software Item Details:\n";
swItem.displayData();
return 0;
}