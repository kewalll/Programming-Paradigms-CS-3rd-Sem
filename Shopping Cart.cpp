#include<iostream>
using namespace std;

class Item
{
    int item_codeno[50];
    int item_qty[50];
    string item_name[50];
    float item_price[50];
    int count;

public:
    Item()
    {
        count = 0;
    }

    void addItem();
    void removeItem(int code);
    void displayTotal();
    void displayItem();
};

void Item::addItem()
{
    if (count >= 50)
    {
        cout << "Cart is full. Cannot add more items." << endl;
        return;
    }

    cout << "Enter item code: ";
    cin >> item_codeno[count];
    cout << "Enter item name: ";
    cin >> item_name[count];
    cout << "Enter quantity: ";
    cin >> item_qty[count];
    cout << "Enter item price: ";
    cin >> item_price[count];

    count++;
}

void Item::removeItem(int code)
{
    bool found = false;
    for (int i = 0; i < count; i++)
    {
        if (item_codeno[i] == code)
        {
            for (int j = i; j < count - 1; j++)
            {
                item_codeno[j] = item_codeno[j + 1];
                item_name[j] = item_name[j + 1];
                item_qty[j] = item_qty[j + 1];
                item_price[j] = item_price[j + 1];
            }
            count--;
            found = true;
            cout << "Item removed successfully." << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Item not found in the cart." << endl;
    }
}

void Item::displayTotal()
{
    float sum = 0.0;
    for (int i = 0; i < count; i++)
    {
        sum += item_price[i] * item_qty[i];
    }
    cout << "Your total bill is: " << sum << endl;
}

void Item::displayItem()
{
    for (int i = 0; i < count; i++)
    {
        cout << item_codeno[i] << " " << item_name[i] << " " << item_qty[i] << " " << item_price[i] << endl;
    }
}

int main()
{
    Item order1;

    int choice;

    do
    {
        cout << "\nWelcome to shopping site xyz..!!\n";
        cout << "Select one of the following: \n";
        cout << "1. Add item\n";
        cout << "2. Remove item\n";
        cout << "3. Display total price of items\n";
        cout << "4. Display all items\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                order1.addItem();
                break;
            case 2:
                int code;
                cout << "Enter item code to remove: ";
                cin >> code;
                order1.removeItem(code);
                break;
            case 3:
                order1.displayTotal();
                break;
            case 4:
                order1.displayItem();
                break;
            case 5:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid option\n";
                break;
        }
    } while (choice != 5);

    return 0;
}
