#include<bits/stdc++.h>
using namespace std;


// struct representing a product
struct product {
    string name;          // name of the product
    int id;               // unique identifier for the product
    int quantity;        // quantity of the product available
    float price;          // price of the product available
};


// struct representing a supplier
struct supplier {
    string name;          // name of the supplier
    string product_name;  // name of the product supplied by the supplier
    int id;               // unique identifier for the supplier
    int quantity;        // quantity of the product supplied
    float price;          // price of the product supplied
};


// class of inventory
class inventory{
public:
    vector<supplier> suppliers;    // vector of suppliers
    vector<product> products;    // vector of product
    void addproduct(vector<product>& products);
    void removeproduct(vector<product>& products);
    void updateproduct(vector<product>& products);
    void displayproduct(vector<product>& products);
    void displayProduct(const product& p);
    void searchproduct(vector<product>& products);
    vector<product> loadproduct(const string& filename, vector<product> products);
    void saveproduct(const string& filename, vector<product> products);
    void addsupplier(vector<supplier>& suppliers);
    void removesupplier(vector<supplier>& suppliers);
    void updatesupplier(vector<supplier>& suppliers);
    void displaysuppliers(vector<supplier>& suppliers);
    vector<supplier> loadsuppliers(const string& filename, vector<supplier> suppliers);
    void savesuppliers(const string& filename, vector<supplier> suppliers);
    void options();
};

// Implement modular programming using functions


void inventory::options()
    {
        system("cls");
        cout << "\t\t\t*******************************************************\n";
        cout << "\t\t\t*               Welcome to Inventory Management       *\n";
        cout << "\t\t\t*******************************************************\n";
        cout << "\t\t\t*           Your one-stop solution for managing       *\n";
        cout << "\t\t\t*                your inventory efficiently!          *\n";
        cout << "\t\t\t*******************************************************\n";
        cout << "\t\t\t*   Please select an option from the menu below:      *\n";
        cout << "\t\t\t*******************************************************\n";
        int n;
        char ch;
        cout << "\n\t MENU\n";
        cout << "\n1. ADD PRODUCT";
        cout << "\n2. REMOVE PRODUCT";
        cout << "\n3. UPDATE PRODUCT";
        cout << "\n4. SEARCH PRODUCT";
        cout << "\n5. ADD SUPPLIER";
        cout << "\n6. REMOVE SUPPLIER";
        cout << "\n7. UPDATE SUPPLIER";
        cout << "\n8. DISPLAY PRODUCTS";
        cout << "\n9. DISPLAY SUPPLIERS";
        cout << "\n10. EXIT";
        cout << "\n\nEnter your choice: ";
        cin >> n;

        switch (n)
        {
        case 1:
            addproduct(products);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
        case 2:
            removeproduct(products);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
            break;
        case 3:
            updateproduct(products);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
            break;
        case 4:
            searchproduct(products);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
            break;
        case 5:
            addsupplier(suppliers);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
            break;
        case 6:
            removesupplier(suppliers);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
        case 7:
            updatesupplier(suppliers);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
            
        case 8:
            displayproduct(products);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    }
        case 9:
            displaysuppliers(suppliers);
            cout << "\nDo you want to continue ('y' for yes / 'N' for no) : ";
            cin >> ch;
            if (tolower(ch) == 'y') {
                system("cls");
                options();
                }
            else if (tolower(ch) == 'n') {
                system("cls");
                break;
                }
                else{
                    cout << "invalid choice. "; 
                    break;
                    } 
        case 10:
            cout << "Thank you for using the program.\n";
            cout << "exiting the program...\n";
            cout << "saving files...\n";
            this_thread::sleep_for(chrono::seconds(1));
            break;
        default:
            system("cls");
            cout << "Invalid choice.\n";
            cout << "saving files...\n";
            this_thread::sleep_for(chrono::seconds(1));
        }
        }
    

// add a product to the inventory
void inventory::addproduct(vector<product>& products)
    {
     // add product from the supplier to the inventory
        product p;
        int choice;
        cout << "Enter the product name: ";
        cin >> p.name;
        // check if the product is already in the inventory
        if (find_if(products.begin(), products.end(), [&](const product& s) { return s.name == p.name; }) != products.end())
            {
                cout << "Product already in the inventory.\n";
                cout << "do you want to update " << p.name << " product quantity and price? ('1' for yes  '0' for no) ";
                cin >> choice;
                if(choice == 1 ) updateproduct(products);
                else if (choice == 0) return ;
                else cout << "Invalid choice.\n";
                
            }
        else  
            {
                // add the product to the inventory
                cout << "Enter the product ID: ";
                cin >> p.id;
                cout << "Enter the product quantity: ";
                cin >> p.quantity;
                cout << "Enter the product price: ";
                cin >> p.price;

                products.push_back(p);
            }

    
    }

// remove a product from the inventory
void inventory::updateproduct(vector<product>& products)
{
    product p;
    char choice;
    cout << "To find the product by id 'I' / by name 'N'  \n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (tolower(choice ) == 'n')
        {
            // read the product name
            cout << "Enter product name: ";
            cin >> p.name;
            // find the product with the given name
            auto it = find_if(products.begin(), products.end(), [&](const product& s) { return s.name == p.name; });
            if (it != products.end())
                {
                    // update the product details
                    cout << "product found!";
                    
                    cout << "Enter quantity supplied: ";
                    cin >> it->quantity;
                    
                    cout << "Enter price per unit: ";
                    cin >> it->price;
                    
                    cout << "product details updated successfully.\n";
                }
            else {
                    cout << "product not found.\n";
                    return;
                }
        }
    else if (tolower(choice ) == 'i')
        {
            // read the product id
            cout << "Enter product ID : ";
            cin >> p.id;
            // find the product with the given name
            auto it = find_if(products.begin(), products.end(), [&](const product& s) { return s.id == p.id; });
            if (it != products.end())
                {
                    // update the product details
                    cout << "product found!";
                    
                    cout << "Enter quantity supplied: ";
                    cin >> it->quantity;
                    
                    cout << "Enter price per unit: ";
                    cin >> it->price;
                    
                    cout << "product details updated successfully.\n";
                }
            else {
                    cout << "product not found.\n";
                    return;
                }
        }
        else cout << "invalid input!";return;
    
    
}

// remove a product from the inventory
void inventory::removeproduct(vector<product>& products) {
    product p;
    char choice;
    cout << "To find the product by id 'I' / by name 'N'  \n";
    cout << "Enter your choice: ";
    cin >> choice;
    if (tolower(choice ) == 'n')
        {
        
            // read the product name
            cout << "Enter product name: ";
            cin >> p.name;

            // Find the product with the given name
            auto iter = find_if(products.begin(), products.end(), [&](const product& s) {return s.name == p.name;});
    
            if (iter != products.end()) {
                // Remove the product from the vector
                products.erase(iter);
                cout << "Product removed successfully.\n";
                } else {
                    cout << "Product not found.\n";
                        }
        }
    else if (tolower(choice ) == 'i')
        {
            // read the product name
            cout << "Enter product ID : ";
            cin >> p.id;

            // Find the product with the given name
            auto iter = find_if(products.begin(), products.end(), [&](const product& s) {return s.id == p.id;});
    
            if (iter != products.end()) {
                // Remove the product from the vector
                products.erase(iter);
                cout << "Product removed successfully.\n";
                } else {
                    cout << "Product not found.\n";
                        }
        }
    else cout << "invalid input!";return;
    
}

//Search for a product
void inventory::searchproduct(vector<product>& products)
{
    product p;
    char choice;
    cout << "To find the product by ID 'I' / by name 'N'\n";
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (tolower(choice) == 'n')
    {
        // Read the product name
        cout << "Enter product name: ";
        cin >> p.name;
        // Find the product with the given name
        auto it = find_if(products.begin(), products.end(), [&](const product& s) { return s.name == p.name; });
        if (it != products.end())
        {
            // Display the product details in a table
            displayProduct(*it);
            
            // Ask for update or removal options
            cout << "Select an option:\n";
            cout << "1. Update product details\n";
            cout << "2. Remove product\n";
            cout << "3. Return to options";
            cout << "Enter your choice: ";
            int option;
            cin >> option;
            
            if (option == 1)
            {
                // Update the product details
                cout << "Enter quantity supplied: ";
                cin >> it->quantity;
                
                cout << "Enter price per unit: ";
                cin >> it->price;
                
                cout << "Product details updated successfully.\n";
            }
            else if (option == 2)
            {
                // Remove the product from the inventory
                products.erase(it);
                cout << "Product removed successfully.\n";
            }
            else if (option == 3)
            {
                cout <<"Returing to options..";
                return;
            }
            else
            {
                cout << "Invalid option!\n";
                return;
            }
        }
        else
        {
            cout << "Product not found.\n";
            return;
        }
    }
    else if (tolower(choice) == 'i')
    {
        // Read the product ID
        cout << "Enter product ID: ";
        cin >> p.id;
        // Find the product with the given ID
        auto it = find_if(products.begin(), products.end(), [&](const product& s) { return s.id == p.id; });
        if (it != products.end())
        {
            // Display the product details in a table
            displayProduct (*it);
            
            // Ask for update or removal options
            cout << "Select an option:\n";
            cout << "1. Update product details\n";
            cout << "2. Remove product\n";
            cout << "3. Return to options";
            cout << "Enter your choice: ";
            int option;
            cin >> option;
            
            if (option == 1)
            {
                // Update the product details
                cout << "Enter quantity supplied: ";
                cin >> it->quantity;
                
                cout << "Enter price per unit: ";
                cin >> it->price;
                
                cout << "Product details updated successfully.\n";
            }
            else if (option == 2)
            {
                // Remove the product from the inventory
                products.erase(it);
                cout << "Product removed successfully.\n";
            }
            else if (option == 3)
            {
                cout <<"Returing to options..";
                return;
            }
            else
            {
                cout << "Invalid option!\n";
                return;
            }
        }
        else
        {
            cout << "Product not found.\n";
            return;
        }
    }
    else
    {
        cout << "Invalid input!\n";
        return;
    }
}

// display the product details  for searched product 
void inventory::displayProduct(const product& p)
{
    // Display the table header
    cout << "+------------+----------------+-----------------+------------------+" << endl;
    cout << "| product ID |   Product Name | Quantity Avail. |   Price per Unit |" << endl;
    cout << "+------------+----------------+-----------------+------------------+" << endl;
    // Display the product details
    cout << "| " << setw(10) << left << p.id << " | " << setw(14) << left << p.name << " | " << setw(15) << left << p.quantity << " | " << setw(16) << left << p.price << " |" << endl;
    cout << "+------------+----------------+-----------------+------------------+" << endl;
}

// display the product details
void inventory::displayproduct(vector<product>& products) {
    // Display the table header
    cout << "+------------+----------------+-----------------+------------------+" << endl;
    cout << "| product ID |   Product Name | Quantity Avail. |   Price per Unit |" << endl;
    cout << "+------------+----------------+-----------------+------------------+" << endl;

    // Display each product row
    for (const auto& p : products) {
        cout << "| " << setw(10) << left << p.id << " | " << setw(14) << left << p.name << " | " << setw(15) << left << p.quantity << " | " << setw(16) << left << p.price << " |" << endl;
    }

    // Display the table footer
    cout << "+------------+----------------+-----------------+------------------+" << endl;
}

// load products details from a file
vector<product> inventory::loadproduct(const string& filename, vector<product> products){
    // Load the products from the file
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file.\n";
        } 
    else {
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            product p;
            string name;
            string number1Str, number2Str, number3Str;
            if (getline(iss, name, ',') && getline(iss, number1Str, ',') && getline(iss, number2Str, ',') && getline(iss, number3Str)) {
                p.name = name;
                
                // Validate and convert the string to integers
                try {
                    p.id = stoi(number1Str);
                    p.quantity = stoi(number2Str);
                    p.price = stoi(number3Str);
                    products.push_back(p);
                } 
                catch (const std::invalid_argument& e) {
                    // Handle invalid input
                    cout << "Invalid integer conversion: " << e.what() << endl;
                    // You can choose to skip the current line or take appropriate action
                }
                catch (const std::out_of_range& e) {
                    // Handle out-of-range input
                    cout << "Out-of-range integer: " << e.what() << endl;
                    // You can choose to skip the current line or take appropriate action
                }
            }
        }
        file.close();
    }
    return products;
}

// save products to file
void inventory::saveproduct(const string &filename, vector<product> products)
    {
        ofstream file(filename);
        if (!file.is_open()) 
        {
            cout << "Error opening file for writing.\n";
        }
        else 
        {
        for (product& p : products) 
                {
                    file << p.name << ",";
                    file << p.id << ",";
                    file << p.quantity << ",";
                    file << p.price << "\n";
                }
        file.close();
        cout << "supliers saved to file successfully!\n";
        }
    }

// add supplier to list
void inventory::addsupplier(vector<supplier>& suppliers)
    {
        supplier supply;   // create a new supplier object
        int choice;
        cout << "Enter supplier name: ";  // prompt user to enter supplier name
        cin >> supply.name;  // read supplier name from user input

        // check if the supplier already exists in the vector
        if (find_if(suppliers.begin(), suppliers.end(),
            [&](const supplier& s) { return s.name == supply.name; }) != suppliers.end()) {
            cout << "Supplier already exists.\n";
            // if the supplier already exists, call the updatesupplier function
            cout << "Do you want to up date " << supply.name << "'s details? (1 for yes, 0 for no): ";
            cin >> choice;
            if (choice == 0) return;
            // if the user wants to update the supplier, call the updatesupplier function
            else if (choice == 1) updatesupplier(suppliers);
        }

        // read remaining supplier details
        cout << "Enter product name: ";
        cin >> supply.product_name;

        cout << "Enter supplier ID: ";
        cin >> supply.id;

        cout << "Enter quantity supplied: ";
        cin >> supply.quantity;

        cout << "Enter price per unit: ";
        cin >> supply.price;

        // add the new supplier to the vector
        suppliers.push_back(supply);
    cout << "Supplier added successfully.\n";
    }

// update supplier from list
void inventory::updatesupplier(vector<supplier>& suppliers)
{
    supplier supply;
    // read the supplier name
    cout << "Enter supplier name: ";
    cin >> supply.name;
    // find the supplier with the given name
    auto it = find_if(suppliers.begin(), suppliers.end(), [&](const supplier& s) { return s.name == supply.name; });
    if (it != suppliers.end())
        {
            // update the supplier details
            cout << "Enter new supplier name: ";
            cin >> it->name;

            cout << "Enter supplier ID: ";
            cin >> it->id;

            cout << "Enter quantity supplied: ";
            cin >> it->quantity;

            cout << "Enter price per unit: ";
            cin >> it->price;

            cout << "Supplier details updated successfully.\n";
        }
    else {
        cout << "Supplier not found.\n";
        return;
    }
}

// remove supplier from list
void inventory::removesupplier(vector<supplier>& suppliers)
{
    supplier supply;
    // read the supplier name
    cout << "Enter supplier name: ";
    cin >> supply.name;
    //find the supplier with the given name
    if (find_if(suppliers.begin(), suppliers.end(), [&](const supplier& s) { return s.name == supply.name; }) != suppliers.end())
    {
        // remove the supplier from the vector
        suppliers.erase(find_if(suppliers.begin(), suppliers.end(), [&](const supplier& s) { return s.name == supply.name; }));
        cout << "Supplier removed successfully.\n";
    }
    else {
        cout << "Supplier not found.\n";
        return;
    }
}

// display supplier from list
void inventory::displaysuppliers(vector<supplier>& suppliers)
{
    // Display the supplier details in a table-like format
    cout << "+---------------+----------------+-------------+-------------------+----------------+\n";
    cout << "| Supplier Name | Product Name   | Supplier ID | Quantity Supplied | Price per Unit |\n";
    cout << "+---------------+----------------+-------------+-------------------+----------------+\n";
    for (auto& s : suppliers)
    {
        cout << "| " << setw(13) << left << s.name << " | ";
        cout << setw(14) << left << s.product_name << " | ";
        cout << setw(11) << left << s.id << " | ";
        cout << setw(17) << left << s.quantity << " | ";
        cout << setw(14) << left << s.price << " |\n";
    }
    cout << "+---------------+----------------+-------------+-------------------+----------------+\n";
}

// load supplier from list
vector<supplier> inventory::loadsuppliers(const string& filename, vector<supplier> suppliers)
{
    // Load the suppliers from the file
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file.\n";   
    } 
    else {
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            supplier supply;
            string name;
            string number1Str, number2Str, number3Str, number4Str;
            if (getline(iss, name, ',') && getline(iss, number1Str, ',') && getline(iss, number2Str, ',') && getline(iss, number3Str, ',') && getline(iss, number4Str)) {
                supply.name = name;
                
                // Validate and convert the strings to appropriate data types
                try {
                    supply.product_name = number1Str;
                    supply.id = stoi(number2Str);
                    supply.quantity = stoi(number3Str);
                    supply.price = stod(number4Str);
                    suppliers.push_back(supply);
                }
                catch (const std::invalid_argument& e) {
                    // Handle invalid input
                    cout << "Invalid conversion: " << e.what() << endl;
                    // You can choose to skip the current line or take appropriate action
                }
                catch (const std::out_of_range& e) {
                    // Handle out-of-range input
                    cout << "Out-of-range conversion: " << e.what() << endl;
                    // You can choose to skip the current line or take appropriate action
                }
            }
        }
        file.close();
    }
    return suppliers;
}

//save suppliers to file
void inventory::savesuppliers(const string &filename, vector<supplier> suppliers)
    {
        ofstream file(filename);
        if (!file.is_open()) 
        {
            cout << "Error opening file for writing.\n";
        }
        else 
        {
        for (supplier& supply : suppliers) 
                {
                    file << supply.name << ",";
                    file << supply.product_name << ",";
                    file << supply.id << ",";
                    file << supply.quantity << ",";
                    file << supply.price << "\n";
                }
        file.close();
        cout << "supliers saved to file successfully!\n";
        }
    }

//main function
int main()
    {
        inventory inv;
        const string filename = "suppliers.txt";
        const string filename2 = "products.txt";

        ifstream file1(filename);
        if (file1.is_open())
        {
            inv.suppliers = inv.loadsuppliers(filename,inv.suppliers);
            file1.close();
        }
        
        ifstream file2(filename2);
        if (file2.is_open())
        {
            inv.products = inv.loadproduct(filename2,inv.products);
            file2.close();
        }
        
        inv.options();

        inv.savesuppliers(filename,inv.suppliers);
        inv.saveproduct(filename2,inv.products);
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\n";system("cls");
        cout << "Thank you for using the program.\n";
        cout << "exiting the program...\n";
        this_thread::sleep_for(chrono::seconds(2));
        system("cls");
    }
