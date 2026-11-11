#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Product Class
class Product
{
private:
    int id;
    string name;
    float price;
    int quantity;

public:

    Product(int i, string n, float p, int q)
    {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }

    int getID()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }

    void setName(string n)
    {
        name = n;
    }

    void setPrice(float p)
    {
        price = p;
    }

    void setQuantity(int q)
    {
        quantity = q;
    }

    // Display Product
    void display()
    {
        cout << "\nProduct ID: " << id;
        cout << "\nProduct Name: " << name;
        cout << "\nPrice: Rs. " << price;
        cout << "\nQuantity: " << quantity;
        cout << "\n-------------------------\n";
    }
};

// Tax and Discount Class
class TaxDiscount
{
private:
    float taxRate;
    float discountRate;

public:

    TaxDiscount()
    {
        taxRate = 10;
        discountRate = 5;
    }

    // Calculate Discount
    float calculateDiscount(float price, int quantity)
    {
        float amount = price * quantity;
        return amount * discountRate / 100;
    }

    // Calculate Tax
    float calculateTax(float price, int quantity)
    {
        float amount = price * quantity;

        float afterDiscount =
            amount - calculateDiscount(price, quantity);

        return afterDiscount * taxRate / 100;
    }

    // Calculate Final Price
    float calculateFinalPrice(float price, int quantity)
    {
        float amount = price * quantity;

        return amount - calculateDiscount(price, quantity)
               + calculateTax(price, quantity);
    }
};

// Loyalty Points Class
class LoyaltyPoints
{
private:
    int points;

public:

    LoyaltyPoints()
    {
        points = 0;
    }

    // Calculate Reward Points
    void earnPoints(double amount)
    {
        int earned = amount / 100;

        points = points + earned;

        cout << "\nCongratulations!";
        cout << "\nYou Earned " << earned
             << " Reward Points.\n";
    }

    // Display Reward Points
    void displayPoints()
    {
        cout << "\nYour Total Reward Points: "
             << points << endl;
    }
};

// Shopping Management Class
class ShoppingSystem
{
private:
    vector<Product> products;

    TaxDiscount bill;

    LoyaltyPoints customer;

public:

    // User Login
    bool login()
    {
        string username, password;
        string loginUser, loginPass;

        cout << "\n===== CREATE ACCOUNT =====\n";

        cout << "Create Username: ";
        cin >> username;

        cout << "Create Password: ";
        cin >> password;

        cout << "\nAccount Created Successfully!\n";

        cout << "\n===== USER LOGIN =====\n";

        cout << "Enter Username: ";
        cin >> loginUser;

        cout << "Enter Password: ";
        cin >> loginPass;

        if (username == loginUser &&
            password == loginPass)
        {
            cout << "\nLogin Successful!\n";
            return true;
        }

        cout << "\nInvalid Username or Password!\n";
        return false;
    }

    // Search Index
    int searchIndex(int id)
    {
        for (int i = 0; i < products.size(); i++)
        {
            if (products[i].getID() == id)
            {
                return i;
            }
        }

        return -1;
    }

    // Add Product
    void addProduct()
    {
        int id, quantity;
        string name;
        float price;

        cout << "\nEnter Product ID: ";
        cin >> id;

        if (searchIndex(id) != -1)
        {
            cout << "\nProduct ID Already Exists!\n";
            return;
        }

        cout << "Enter Product Name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter Product Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (id <= 0 || price <= 0 || quantity < 0)
        {
            cout << "\nInvalid Input!\n";
            return;
        }

        products.push_back(
            Product(id, name, price, quantity)
        );

        cout << "\nProduct Added Successfully!\n";
    }

    // Display Products
    void displayProducts()
    {
        if (products.empty())
        {
            cout << "\nNo Products Available!\n";
            return;
        }

        cout << "\n===== ALL PRODUCTS =====\n";

        for (int i = 0; i < products.size(); i++)
        {
            products[i].display();
        }
    }

    // Search Product
    void searchProduct()
    {
        int id;

        cout << "\nEnter Product ID: ";
        cin >> id;

        int index = searchIndex(id);

        if (index != -1)
        {
            cout << "\nProduct Found!\n";
            products[index].display();
        }
        else
        {
            cout << "\nProduct Not Found!\n";
        }
    }

    // Update Product
    void updateProduct()
    {
        int id, quantity;
        string name;
        float price;

        cout << "\nEnter Product ID to Update: ";
        cin >> id;

        int index = searchIndex(id);

        if (index == -1)
        {
            cout << "\nProduct Not Found!\n";
            return;
        }

        cout << "Enter New Name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter New Price: ";
        cin >> price;

        cout << "Enter New Quantity: ";
        cin >> quantity;

        if (price <= 0 || quantity < 0)
        {
            cout << "\nInvalid Input!\n";
            return;
        }

        products[index].setName(name);
        products[index].setPrice(price);
        products[index].setQuantity(quantity);

        cout << "\nProduct Updated Successfully!\n";
    }

    // Delete Product
    void deleteProduct()
    {
        int id;

        cout << "\nEnter Product ID to Delete: ";
        cin >> id;

        int index = searchIndex(id);

        if (index != -1)
        {
            products.erase(products.begin() + index);

            cout << "\nProduct Deleted Successfully!\n";
        }
        else
        {
            cout << "\nProduct Not Found!\n";
        }
    }

    // Calculate Discount Menu
    void calculateDiscountMenu()
    {
        float price;
        int quantity;

        cout << "\nEnter Product Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (price <= 0 || quantity <= 0)
        {
            cout << "\nInvalid Input!\n";
            return;
        }

        float discount =
            bill.calculateDiscount(price, quantity);

        cout << "\nDiscount (5%): Rs. "
             << discount << endl;
    }

    // Calculate Tax Menu
    void calculateTaxMenu()
    {
        float price;
        int quantity;

        cout << "\nEnter Product Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (price <= 0 || quantity <= 0)
        {
            cout << "\nInvalid Input!\n";
            return;
        }

        float tax =
            bill.calculateTax(price, quantity);

        cout << "\nTax (10%): Rs. "
             << tax << endl;
    }

    // Calculate Final Price Menu
    void calculateFinalMenu()
    {
        float price;
        int quantity;

        cout << "\nEnter Product Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;

        if (price <= 0 || quantity <= 0)
        {
            cout << "\nInvalid Input!\n";
            return;
        }

        float total =
            bill.calculateFinalPrice(price, quantity);

        cout << "\nFinal Price After Discount and Tax: Rs. "
             << total << endl;
    }

    // Purchase Product
    void purchaseProduct()
    {
        int id, quantity;

        cout << "\nEnter Product ID: ";
        cin >> id;

        int index = searchIndex(id);

        if (index == -1)
        {
            cout << "\nProduct Not Found!\n";
            return;
        }

        cout << "Enter Purchase Quantity: ";
        cin >> quantity;

        if (quantity <= 0 ||
            quantity > products[index].getQuantity())
        {
            cout << "\nInvalid Quantity or Insufficient Stock!\n";
            return;
        }

        float price = products[index].getPrice();

        float subtotal = price * quantity;

        float discount =
            bill.calculateDiscount(price, quantity);

        float afterDiscount = subtotal - discount;

        float tax =
            bill.calculateTax(price, quantity);

        float total =
            bill.calculateFinalPrice(price, quantity);

        // Update Stock
        products[index].setQuantity(
            products[index].getQuantity() - quantity
        );

        // Display Bill
        cout << "\n========== CUSTOMER BILL ==========\n";

        cout << "Product Name: "
             << products[index].getName() << endl;

        cout << "Quantity: " << quantity << endl;

        cout << "Price: Rs. " << price << endl;

        cout << "Subtotal: Rs. " << subtotal << endl;

        cout << "Discount (5%): Rs. " << discount << endl;

        cout << "After Discount: Rs. "
             << afterDiscount << endl;

        cout << "Tax (10%): Rs. " << tax << endl;

        cout << "-----------------------------------\n";

        cout << "Final Amount: Rs. " << total << endl;

        cout << "===================================\n";

        // Calculate Reward Points
        customer.earnPoints(total);

        cout << "\nPurchase Successful!\n";
    }

    // Display Reward Points
    void displayRewards()
    {
        customer.displayPoints();
    }

    // Low Stock Alert
    void lowStockAlert()
    {
        bool found = false;

        cout << "\n===== LOW STOCK ALERT =====\n";

        for (int i = 0; i < products.size(); i++)
        {
            if (products[i].getQuantity() <= 5)
            {
                products[i].display();
                found = true;
            }
        }

        if (!found)
        {
            cout << "\nAll Products Have Sufficient Stock!\n";
        }
    }

    // Main Menu
    void menu()
    {
        int choice;

        do
        {
            cout << "\n===== SHOPPING MANAGEMENT SYSTEM =====\n";

            cout << "1. Add Product\n";
            cout << "2. Display Products\n";
            cout << "3. Search Product\n";
            cout << "4. Update Product\n";
            cout << "5. Delete Product\n";
            cout << "6. Purchase Product\n";
            cout << "7. Calculate Discount\n";
            cout << "8. Calculate Tax\n";
            cout << "9. Calculate Final Price\n";
            cout << "10. Display Reward Points\n";
            cout << "11. Low Stock Alert\n";
            cout << "12. Exit\n";

            cout << "\nEnter Your Choice: ";
            cin >> choice;

            switch (choice)
            {
                case 1:
                    addProduct();
                    break;

                case 2:
                    displayProducts();
                    break;

                case 3:
                    searchProduct();
                    break;

                case 4:
                    updateProduct();
                    break;

                case 5:
                    deleteProduct();
                    break;

                case 6:
                    purchaseProduct();
                    break;

                case 7:
                    calculateDiscountMenu();
                    break;

                case 8:
                    calculateTaxMenu();
                    break;

                case 9:
                    calculateFinalMenu();
                    break;

                case 10:
                    displayRewards();
                    break;

                case 11:
                    lowStockAlert();
                    break;

                case 12:
                    cout << "\nThank You for Using Our System!\n";
                    break;

                default:
                    cout << "\nInvalid Choice! Try Again.\n";
            }

        } while (choice != 12);
    }
};

// Main Function
int main()
{
    ShoppingSystem shop;

    if (shop.login())
    {
        shop.menu();
    }

    cout << "\nProgram Ended.\n";

    return 0;
}