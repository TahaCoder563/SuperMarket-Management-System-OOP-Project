#include <iostream>
#include <vector>
#include<time.h>
#include<stdlib.h>
#include<iomanip>
#include <string>
#include<unistd.h>
using namespace std;

template <class t1 = int, class t2 = double, class t3 = string>
class items
{
private:
    t3 category;
    t3 brand;
    t3 product_name;
    t1 product_id;
    t1 quantity;
    t2 price;
    static int i;

protected:
public:
    items() {}
    items(t3 product_name, t1 quantity, t2 price, t3 category)
    {
        this->category = category;
        this->product_name = product_name;
        this->price = price;
        this->quantity = quantity;
        this->product_id = i;
        i++;
    }
    void set_price(t2 price)
    {
        this->price = price;
    }
    void set_quantity(t1 quantity)
    {
        this->quantity = quantity;
    }
    t3 get_category()
    {
        return category;
    }
    t3 get_product_name()
    {
        return product_name;
    }
    t1 get_product_quantity()
    {
        return quantity;
    }
    t1 get_product_id()
    {
        return product_id;
    }
    t2 get_product_price()
    {
        return price;
    }
};
template <class t1, class t2, class t3>
int items<t1, t2, t3>::i = 1;

template <class t1 = int, class t2 = double, class t3 = string>
class electronics_items : public items<t1, t2, t3>
{
private:
    t1 no_of_months_warranty;

protected:
public:
    electronics_items(){}
    electronics_items(t1 no_of_months_warranty, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Electronics")
    {
        this->no_of_months_warranty = no_of_months_warranty;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class snacks_items : public items<t1, t2, t3>
{

private:
    t3 expire_date;

protected:
public:
    snacks_items(){}
    snacks_items(t3 expire_date, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Snacks")
    {
        this->expire_date = expire_date;
    }
    t3 get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    t1 get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};
template <class t1 = int, class t2 = double, class t3 = string>
class stationary_items : public items<t1, t2, t3>
{
private:
    t3 quality;

protected:
public:
    stationary_items(){}
    stationary_items(t3 quality, t3 product_name, t1 quantity, t2 price) : items<t1, t2, t3>(product_name, quantity, price, "Stationary")
    {
        this->quality = quality;
    }
    string get_category()
    {
        string a = items<t1, t2, t3>::get_category();
        return a;
    }
    int get_product_quantity()
    {
        int a = items<t1, t2, t3>::get_product_quantity();
        return a;
    }
    t1 get_product_id()
    {
        int a = items<t1, t2, t3>::get_product_id();
    }
    t2 get_product_price()
    {
        double a = items<t1, t2, t3>::get_product_price();
        return a;
    }
    t3 get_product_name()
    {
        string a = items<t1, t2, t3>::get_product_name();
        return a;
    }
    t1 set_quantity(t1 a)
    {
        items<t1, t2, t3>::set_quantity(a);
    }
    t2 set_price(t2 a)
    {
        items<t1, t2, t3>::set_price(a);
    }
};

class super_market;

class stock_management
{

private:
    vector<electronics_items<int, double, string>> electronic_products;
    vector<string> electronic_item = {"laptop", "mobile", "keyoard"};
    vector<double> electronic_price = {100000, 50000, 2000};
    vector<int> electronic_quantity = {10, 20, 50};
    int num_of_electronic_items;
    vector<int> no_of_months_warranty = {12, 13, 6};

    vector<snacks_items<int, double, string>> snacks_products;
    vector<string> snacks_item = {"abc_biscuit", "abc_chocolate", "abc_colddrink"};
    vector<double> snacks_price = {100, 200, 150};
    vector<int> snacks_quantity = {80, 90, 100};
    int num_of_snack_items;
    vector<string> expire_dates = {"15-march-2024", "15-april-2024", "15-may-2024"};

    vector<stationary_items<int, double, string>> stationary_products;
    vector<string> stationary_item = {
        "pencil", "pen", "eraser"};
    vector<double> stationary_price = {50, 100, 50};
    vector<int> stationary_quantity = {100, 120, 150};
    int num_of_stationary_items;
    vector<string> stationary_quality = {"good", "medium", "good"};

protected:
public:
    stock_management()
    {
        num_of_electronic_items = 3;
        num_of_snack_items = 3;
        num_of_stationary_items = 3;
        add_items();
    }
    void add_items()
    {
        for (int i = 0; i < 3; i++)
        {
            electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));

            snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));

            stationary_products.push_back(stationary_items<int, double, string>(
                stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
        }
    }

    void manage_stock()
    {
        cout << "Managing stock of Electronic items: " << endl;
        int n;
        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
        cout << endl;
        cout << "Managing stock for snack items:" << endl;

        for (int i = 0; i < num_of_snack_items; i++)
        {
            if (snacks_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << snacks_products[i].get_product_id() << " Product name: " << snacks_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                snacks_products[i].set_quantity(n);
            }
        }
        cout << "Managing stock of Stationary items: " << endl;

        for (int i = 0; i < num_of_electronic_items; i++)
        {
            if (electronic_products[i].get_product_quantity() < 5)
            {
                cout << "Product id:  " << electronic_products[i].get_product_id() << " Product name: " << electronic_products[i].get_product_name() << " has low quantity so enter how much quantity do you need :" << endl;
                cin >> n;
                electronic_products[i].set_quantity(n);
            }
        }
    }
    void change_price(string product_name, double new_price, string category)
    {
        if (category == "Electronics")
            for (int i = 0; i < num_of_electronic_items; i++)
            {
                if (electronic_products[i].get_product_name() == "product_name")
                {
                    electronic_products[i].set_price(new_price);
                }
            }

        else if (category == "Snacks")
            for (int i = 0; i < num_of_snack_items; i++)
            {
                if (snacks_products[i].get_product_name() == "product_name")
                {
                    snacks_products[i].set_price(new_price);
                }
            }

        else if (category == "Stationary")
            for (int i = 0; i < num_of_stationary_items; i++)
            {
                if (stationary_products[i].get_product_name() == "product_name")
                {
                    stationary_products[i].set_price(new_price);
                }
            }
    }

    void add_items(string name[], int quantity[], double price[], int warranty[], string category)
    {

        int store = num_of_electronic_items;
        for (int i = 0; i < name->size(); i++)
        {
            string store1 = name[i];
            int store2 = quantity[i];
            double store3 = price[i];
            int store4 = warranty[i];
            electronic_item.push_back(store1);
            electronic_quantity.push_back(store2);
            electronic_price.push_back(store3);
            no_of_months_warranty.push_back(store4);
            num_of_electronic_items++;
        }

        for (int i = store; i < num_of_electronic_items; i++)
        {
            electronic_products.push_back(electronics_items<int, double, string>(no_of_months_warranty[i], electronic_item[i], electronic_quantity[i], electronic_price[i]));
        }
    }
    void add_items(string name[], int quantity[], double price[], string attribute[], string category)
    {
        if (category == "Snacks")
        {
            int store = num_of_snack_items;
            for (int i = 0; i < name->size(); i++)
            {
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                snacks_item.push_back(store1);
                snacks_quantity.push_back(store2);
                snacks_price.push_back(store3);
                expire_dates.push_back(store4);
                num_of_snack_items++;
            }

            for (int i = store; i < num_of_snack_items; i++)
            {
                snacks_products.push_back(snacks_items<int, double, string>(expire_dates[i], snacks_item[i], snacks_quantity[i], snacks_price[i]));
            }
        }
        else if (category == "Stationary")
        {
            int store = num_of_stationary_items;
            for (int i = 0; i < name->size(); i++)
            {
                string store1 = name[i];
                int store2 = quantity[i];
                double store3 = price[i];
                string store4 = attribute[i];

                stationary_item.push_back(store1);
                stationary_quantity.push_back(store2);
                stationary_price.push_back(store3);
                stationary_quality.push_back(store4);
                num_of_stationary_items++;
            }

            for (int i = store; i < num_of_snack_items; i++)
            {
                stationary_products.push_back(stationary_items<int, double, string>(
                    stationary_quality[i], stationary_item[i], stationary_quantity[i], stationary_price[i]));
            }
        }
    }

    friend class super_market;
    friend class delivery_on_app;
    friend class delivery_on_call;
    friend class Manual;
};

class super_market
{

private:
protected:
public:
    void display_menu(stock_management &a)
    {
        cout << "Electronics items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "snacks items: " << endl;
        for (int i = 0; i < a.num_of_snack_items; i++)
        {
            cout << "Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << endl;
        }
        cout << endl;
        cout << "Stationary items: " << endl;
        for (int i = 0; i < a.num_of_stationary_items; i++)
        {
            cout << "Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << endl;
        }
        cout << endl;
    }
    void display_product_details(stock_management &a)
    {
        cout << "Electronics Items: " << endl;
        for (int i = 0; i < a.num_of_electronic_items; i++)
        {
            cout << "Product id: " << a.electronic_products[i].get_product_id() << " Product Name: " << a.electronic_products[i].get_product_name() << " Product price: " << a.electronic_products[i].get_product_price() << " Product Quantity: " << a.electronic_products[i].get_product_quantity() << endl;

            cout << "Snacks Items: " << endl;
            for (int i = 0; i < a.num_of_snack_items; i++)
            {
                cout << "Product id: " << a.snacks_products[i].get_product_id() << " Product Name: " << a.snacks_products[i].get_product_name() << " Product price: " << a.snacks_products[i].get_product_price() << " Product Quantity: " << a.snacks_products[i].get_product_quantity() << endl;
            }
            cout << "Stationary Items: " << endl;
            for (int i = 0; i < a.num_of_stationary_items; i++)
            {
                cout << "Product id: " << a.stationary_products[i].get_product_id() << " Product Name: " << a.stationary_products[i].get_product_name() << " Product price: " << a.stationary_products[i].get_product_price() << " Product Quantity: " << a.stationary_products[i].get_product_quantity() << endl;
            }
        }
    }
};

class Employee
{
protected:
    int EmployeeID;
    string EmployeeName;
    double EmployeeSalary;
    string DateOfJoining;
    string Position;
    int YearOfJoining;

public:
    Employee() {}
    Employee(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : EmployeeID(id), EmployeeName(name), EmployeeSalary(salary), DateOfJoining(dateofjoining),
                                                                                                                                  Position(position), YearOfJoining(yearofjoining) {}

    virtual int get_EmployeeID() const = 0;
    virtual string get_EmployeeName() const = 0;
    virtual double get_EmployeeSalary() const = 0;
    virtual string get_DateOfJoining() const = 0;
    virtual string get_Position() const = 0;
    virtual int get_YearOfjoining() const = 0;

    virtual void set_EmployeeID(int id) = 0;
    virtual void set_EmployeeName(const string &name) = 0;
    virtual void set_EmployeeSalary(double salary) = 0;
    virtual void set_DateOfJoining(const string &dateofjoining) = 0;
    virtual void set_Position(const string &position) = 0;
    virtual void set_YearOfjoining(int yearofjoining) = 0;

    virtual void DisplayEmployeeDetails() const = 0;
};

class Expenses
{
private:
    double electricitybill;
    double gasbill;
    double securityExpenses;

public:
    Expenses() : electricitybill(0.0), gasbill(0.0), securityExpenses(0.0) {}

    void updateExpenses(double ebill, double gbill, double securityexpense)
    {
        if (ebill > 0 && gbill > 0 && securityexpense > 0)
        {
            this->electricitybill = ebill;
            this->gasbill = gbill;
            this->securityExpenses = securityexpense;
        }
        else
        {
            cout << "invalid Data!!" << endl;
        }
    }
    void Display_Expenses() const
    {
        cout << "Electricity BIll= " << electricitybill << endl;
        cout << "GAS BILL= " << gasbill << endl;
        cout << "SECURITY EXPENSES= " << securityExpenses << endl;
    }
};

class Manager : public Employee, public stock_management, public Expenses
{
private:
    string Username;
    string Password;
    int choice;
    string productname;
    double price;
    string category;
    vector<string> electronic_names;
    vector<int> electronic_quantities;
    vector<double> electronic_prices;
    vector<int> electronic_warranties;
    vector<string> snacks_names;
    vector<int> snacks_quantities;
    vector<double> snacks_prices;
    vector<string> snacks_expire_dates;
    vector<string> stationary_names;
    vector<int> stationary_quantities;
    vector<double> stationary_prices;
    vector<string> stationary_qualities;
    int num_snacks;
    int num_stationary;
    int num_electronics;
    int n;

public:
    Manager() {}
    Manager(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : Employee(id, name, salary, dateofjoining, position, yearofjoining), Username("manager"), Password("1234") {}

    bool verification(const string &username, const string &password)
    {
        if (username == Username && password == Password)
        {
            return true;
        }
        else
        {
            false;
        }
    }

    int get_EmployeeID() const { return EmployeeID; }
    string get_EmployeeName() const { return EmployeeName; }
    double get_EmployeeSalary() const { return EmployeeSalary; }
    string get_DateOfJoining() const { return DateOfJoining; }
    string get_Position() const { return Position; }
    int get_YearOfjoining() const { return YearOfJoining; }

    void set_EmployeeID(int id) { EmployeeID = id; };
    void set_EmployeeName(const string &name) { EmployeeName = name; }
    void set_EmployeeSalary(double salary) { EmployeeSalary = salary; }
    void set_DateOfJoining(const string &dateofjoining) { DateOfJoining = dateofjoining; }
    void set_Position(const string &position) { Position = position; }
    void set_YearOfjoining(int yearofjoining) { YearOfJoining = yearofjoining; }

    virtual void DisplayEmployeeDetails() const
    {
        cout << "Displaing MANAGER DETAILS" << endl;
        cout << "ID " << EmployeeID << endl;
        cout << "NAME " << EmployeeName << endl;
        cout << "SALARY " << EmployeeSalary << endl;
        cout << "DATE OF JOINING " << DateOfJoining << endl;
        cout << "POSITION " << Position << endl;
        cout << "YEAR OF JOINIG " << YearOfJoining << endl;
    }

    void manager()
    {

        cout << "1) To Manage Stock" << endl;
        cout << "2) To Update BILL" << endl;
        cout << "0) BACK TO MENU" << endl;
        cout << "Enter a choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int choice;
            cout << "1) Add product" << endl;
            cout << "2) Check Stock" << endl;
            cout << "3) Change Price" << endl;
            cout << "0) BACK TO MENU" << endl;
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "which category you want to insert 1)Electronics 2)snacks 3)stationary" << endl;
                cin >> n;
                switch (n)
                {
                case 1:
                    cout << "Enter the number of electronic items you want to add: ";
                    cin >> num_electronics;

                    for (int i = 0; i < num_electronics; ++i)
                    {
                        string name;
                        int quantity;
                        double price;
                        int warranty;

                        cout << "Enter the name of electronic item " << i + 1 << ": ";
                        cin >> name;
                        electronic_names.push_back(name);

                        cout << "Enter the quantity of " << name << ": ";
                        cin >> quantity;
                        electronic_quantities.push_back(quantity);

                        cout << "Enter the price of " << name << ": ";
                        cin >> price;
                        electronic_prices.push_back(price);

                        cout << "Enter the warranty (in months) of " << name << ": ";
                        cin >> warranty;
                        electronic_warranties.push_back(warranty);
                    }

                    add_items(electronic_names.data(), electronic_quantities.data(), electronic_prices.data(), electronic_warranties.data(), "Electronics");
                    break;

                case 2:
                    cout << "Adding Snacks Items:" << endl;

                    cout << "Enter the number of snacks items you want to add: ";
                    cin >> num_snacks;

                    for (int i = 0; i < num_snacks; ++i)
                    {
                        string name;
                        int quantity;
                        double price;
                        string expire_date;

                        cout << "Enter the name of snacks item " << i + 1 << ": ";
                        cin >> name;
                        snacks_names.push_back(name);

                        cout << "Enter the quantity of " << name << ": ";
                        cin >> quantity;
                        snacks_quantities.push_back(quantity);

                        cout << "Enter the price of " << name << ": ";
                        cin >> price;
                        snacks_prices.push_back(price);

                        cout << "Enter the expiration date (DD-MM-YYYY) of " << name << ": ";
                        cin >> expire_date;
                        snacks_expire_dates.push_back(expire_date);
                    }

                    add_items(snacks_names.data(), snacks_quantities.data(), snacks_prices.data(), snacks_expire_dates.data(), "Snacks");
                    break;

                case 3:
                    cout << "Adding Stationary Items:" << endl;
                    cout << "Enter the number of stationary items you want to add: ";
                    cin >> num_stationary;

                    for (int i = 0; i < num_stationary; ++i)
                    {
                        string name;
                        int quantity;
                        double price;
                        string quality;

                        cout << "Enter the name of stationary item " << i + 1 << ": ";
                        cin >> name;
                        stationary_names.push_back(name);

                        cout << "Enter the quantity of " << name << ": ";
                        cin >> quantity;
                        stationary_quantities.push_back(quantity);

                        cout << "Enter the price of " << name << ": ";
                        cin >> price;
                        stationary_prices.push_back(price);

                        cout << "Enter the quality of " << name << ": ";
                        cin >> quality;
                        stationary_qualities.push_back(quality);
                    }

                    add_items(stationary_names.data(), stationary_quantities.data(), stationary_prices.data(), stationary_qualities.data(), "Stationary");

                    break;

                default:
                    break;
                }

                break;

            case 2:
                manage_stock();
                break;

            case 3:
                cout << "Enter product name: ";
                cin >> productname;
                cout << "Enter price: ";
                cin >> price;
                cout << "Enter category: ";
                cin >> category;
                change_price(productname, price, category);
                break;

            case 0:
                break;
            default:
                break;
            }

            break;

        case 2:
            double ebill, gbill, secExp;

            cout << "Enter bill expenses" << endl;
            cout << "Electricity Bill Amount" << endl;
            cin >> ebill;
            cout << "Gas Bill Amount" << endl;
            cin >> gbill;
            cout << "SecurityExpensesAmount" << endl;
            cin >> secExp;
            updateExpenses(ebill, gbill, secExp);
            break;

        case 0:
            break;

        default:
            break;
        }
    }
};

class SalesMan : public Employee
{
public:
    SalesMan() {}
    SalesMan(int id, const string &name, double salary, const string &dateofjoining, const string &position, int yearofjoining) : Employee(id, name, salary, dateofjoining, position, yearofjoining) {}

    void DisplayEmployeeDetails() const
    {
        cout << "ID: " << EmployeeID << ", Name: " << EmployeeName << ", Position: " << Position << ", Salary: " << EmployeeSalary
             << ", Date of Joining: " << DateOfJoining << ", Year of Joining: " << YearOfJoining << endl;
    }
    int get_EmployeeID() const { return EmployeeID; }
    string get_EmployeeName() const { return EmployeeName; }
    double get_EmployeeSalary() const { return EmployeeSalary; }
    string get_DateOfJoining() const { return DateOfJoining; }
    string get_Position() const { return Position; }
    int get_YearOfjoining() const { return YearOfJoining; }

    void set_EmployeeID(int id) { EmployeeID = id; };
    void set_EmployeeName(const string &name) { EmployeeName = name; }
    void set_EmployeeSalary(double salary) { EmployeeSalary = salary; }
    void set_DateOfJoining(const string &dateofjoining) { DateOfJoining = dateofjoining; }
    void set_Position(const string &position) { Position = position; }
    void set_YearOfjoining(int yearofjoining) { YearOfJoining = yearofjoining; }
};

class Owner : public Expenses
{
private:
    string Username;
    string Password;
    vector<SalesMan> salesmen;
    int choice;

public:
    Owner() : Username("xyz"), Password("123") {}

    string get_ownername() const { return Username; }
    string get_password() const { return Password; }

    bool verification(const string &username, const string &password)
    {
        if (username == Username && password == Password)
        {
            return true;
        }
        else
        {
            false;
        }
    }

    void addSalesman()
    {
        int id;
        string name, position, date;
        double salary;
        int year;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter position: ";
        cin >> position;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter date of joining: ";
        cin >> date;
        cout << "Enter year of joining: ";
        cin >> year;
        salesmen.push_back(SalesMan(id, name, salary, position, date, year));
        cout << "Salesman added successfully." << endl;
    }

    void displaySalesmen() const
    {
        cout << "Salesmen List:" << endl;
        for (const auto &salesman : salesmen)
        {
            salesman.DisplayEmployeeDetails();
        }
    }

    void owner()
    {

        cout << "1)To see profit" << endl;
        cout << "2)To see total sells" << endl;
        cout << "3)To see bills" << endl;
        cout << "4)TO add Employee" << endl;
        cout << "5)TO display Employee details" << endl;
        cout << " 6) BACK TO MENU" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;

        case 3:
            Display_Expenses();
            break;
        case 4:
            addSalesman();
            break;

        case 5:
            displaySalesmen();
            break;

        case 6:
            break;

        default:
            break;
        }
    }
};

class delivery_on_app;
class delivery_on_call;
class Manual;
template<class T = string,class T1 = double,class T2 = int>
class User{
    vector<T> add_to_cart_name;
    vector<T2> add_to_cart_id;
    vector<T2> add_to_cart_quantity;
    vector<T1> per_cost;
    T1 total_cost;
    T2 redeem_code;
    T2 num_of_items;
    T2 new_lucky_draw_no;
    public:
    User():total_cost(0.0),num_of_items(0){}
    void add_to_cart(int a,double f,string& f1,int c){
        add_to_cart_name.push_back(f1);
        add_to_cart_id.push_back(a);
        add_to_cart_quantity.push_back(c);
        per_cost.push_back(f);
        total_cost= total_cost + (f * c);
        num_of_items++;
    }
    void lucky_draw(){
        srand(time(0));
        int m = rand()%10000 + 1;
        cout<<"Coming to the super market after three to four days"<<endl;
        cout<<"Reaching the shopping mall in 10 seconds"<<endl;
        sleep(10);
        system("cls");
        cout<<"The winner of this lucky draw is:"<<m<<endl;
        if (new_lucky_draw_no == m)
        {
            cout<<"I won the prize in this lucky draw"<<endl;
        }
        else{
            cout<<"Unfortunately I did not win the lucky draw."<<endl;
        }
    }
    void discount(int f){
        int d;
        srand(time(0));
        if(f==0 || f==2 || f==1){
        cout<<"Do you want to avail discount?(1 for Yes and 0 for No)"<<endl;
        cin>>d;
        while (d>1)
        {
            cout<<"write 1 or 0 for answer"<<endl;
            cout<<"Do you want to avail discount?(1 for Yes and 0 for No)"<<endl;
            cin>>d;
        }
        if (d==1)
        {
            cout<<"Showing the discount:"<<endl;
            sleep(5);
            system("cls");
            redeem_code = rand()%10000 + 1;
            cout<<"Your coupon number is:"<<redeem_code<<endl;
            if (redeem_code>=8000 || total_cost>50000)
            {
                cout<<"Your redeem number is greater than 8000 or total cost is greater than 50000.\nYou will get a 10% off on your total cost"<<endl;
                cout<<"Cost to be deducted from the Total:"<<total_cost*0.1<<endl;
                cout<<"Total cost after 10% Discount:"<<total_cost - (total_cost*0.1)<<endl;
                cout<<"Do you want to apply for the lucky draw? "<<endl;
                cin>>d;
                if (d==1)
                {
                    new_lucky_draw_no = rand()%10000 + 1;
                    cout<<"Your lucky draw number is:"<<new_lucky_draw_no<<endl;
                    cout<<"Come after three to four days for the lucky draw winner."<<endl;
                    lucky_draw();
                }
                else{
                    cout<<"No Lucky Draw"<<endl;
                }
            }
            else{
                cout<<"Sorry.You will not get a discount."<<endl;
            }
        }
        else if(d==0){
            cout<<"No discount"<<endl;
        }
        }
    }
    void bill(int f){
        if (f==0 || f==2)
        {
            if(f==2){
                cout<<"Thanks for buying from the super market. I hope you come again next time."<<endl;
            }
            cout<<"Total Bill"<<endl;
            cout<<"NO"<<"  "<<"Product Id "<<setw(25)<<"Product Name"<<setw(25)<<"Product Quantity"<<setw(25)<<"Product Cost"<<endl;
            for (int i = 0; i < num_of_items; i++)
            {
                cout<<i + 1<<setw(5)<<add_to_cart_id[i]<<setw(30)<<add_to_cart_name[i]<<setw(25)<<add_to_cart_quantity[i]<<setw(25)<<per_cost[i]<<endl;
            }
            cout<<"Total Cost:"<<total_cost<<endl;
            discount(f);
            if(f==0){
                cout<<"Thanks for order.Your order will arrive within four days."<<endl;
            }
        }
        else if(f==1){
            cout<<"Operator:Your Total Bill is:"<<total_cost<<endl;
            cout<<"Operator:Thanks for order.Your order will arrive within four days at the given address."<<endl;
            cout<<"Operator:Just hold a bit."<<endl;
            discount(f);
            cout<<"Thanks for order.Your order will arrive within four days."<<endl;
        }
        
    }
    void select_option();
};
template<class T = string>
class Account{
    T password;
    T username;
    protected:
    T first_name,last_name,address,p,p1;
    unsigned int age;
    public:
    void making_an_account(){
        cout<<"Create an Account:"<<endl;
        cout<<"Enter Your First Name:";
        cin>>first_name;
        cout<<"Enter Your Last Name:";
        cin>>last_name;
        cout<<"Enter your Address:";
        cin>>address;
        cout<<"Enter your age:";
        cin>>age;
        while (age>18)
        {
            cout<<"You have written the wrong age or you are not eligible"<<endl;
            cout<<"Your age is:"<<endl;
            cin>>age;
        }
        int a,b,c;
        b = (rand()%100) + 1;
        c = rand()%100 + 1;
        srand(time(0));
        cout<<"Next step in 10 seconds!"<<endl;
        sleep(10);
        system("cls");
        cout<<"Choose Your username:"<<endl;
        cout<<"1."<<first_name<<b<<" or "<<" 2."<<last_name<<c<<endl;
        cin>>a;
        if (a==1)
        {
            username = first_name.append(to_string(b));
            cout<<"Your username is:"<<username<<endl;
        }
        else if (a==2)
        {
            username = last_name.append(to_string(c));
            cout<<"Your username is:"<<username<<endl;
        }
        cout<<"Write a password:";
        cin>>p;
        cout<<"Write a confirm password:";
        cin>>p1;
        do
        {
            if (p!=p1)
            {
                cout<<"Again! Write a confirm password:";
                cin>>p1;
            }
            
        } while (p!=p1);
        password = p;
        cout<<"Congratulations on making an account."<<endl;
        check(3);
    }
    int check(int max){
        string u,p;
        cout<<"Sign_In in 10 seconds!"<<endl;
        sleep(10);
        system("cls");
        cout<<"ABC Super Market Delivery App"<<endl;
        cout<<"Enter Your Username:";
        cin>>u;
        cout<<"Enter Your Password:";
        cin>>p;
        if (p==password && u==username)
        {
            cout<<"Welcome to the ABC SuperMarket Delivery App"<<endl;
            return 0;
        }
        else{
            if(max>1){
                cout<<"Wrong UserName or Password"<<endl;
                cout<<"Try Again ! "<<max - 1<<" Max Left"<<endl;
                return check(max - 1);
            }
            else{
                cout<<"Sorry!You have reached the max limit."<<endl;
                cout<<"Exiting in 5 seconds"<<endl;
                exit(5);
                return 1;
            }
        }
    }
};

class delivery_on_app{
    public:
    void buy(){
        int a,b,c;
        double f;
        string f1;
        User<string,double,int> u1;
        stock_management s2;
        Account<string> a1;
        a1.making_an_account();
        do
        {
            cout<<"Opening the menu in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
        cout<<"Which of the following department you want to choose?"<<endl;
        cout<<"1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill"<<endl;
        cin>>a;
        if (a==1)
        {
            cout<<"Going to the next step in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product to choose?"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Product id: " << s2.electronic_products[i].get_product_id() << " Product Name: " << s2.electronic_products[i].get_product_name() << " Product price: " <<s2.electronic_products[i].get_product_price() << " Product Quantity: " <<s2.electronic_products[i].get_product_quantity() << endl;
            }
            cin>>b;
            while (b>s2.num_of_electronic_items && b>=0)
            {
                cout<<"You choose the the wrong product no."<<endl;
                cin>>b;
            }
            cout << "Product id: " << s2.electronic_products[b - 1].get_product_id() << " Product Name: " << s2.electronic_products[b - 1].get_product_name() << " Product price: " <<s2.electronic_products[b - 1].get_product_price() << " Product Quantity: " <<s2.electronic_products[b - 1].get_product_quantity() << endl;
            cout<<"How much quantity?"<<endl;
            cin>>c;
            while (c>s2.electronic_products[b - 1].get_product_quantity() && c>=0)
            {
                cout<<"You choose the the wrong quantity number."<<endl;
                cout<<"Type again!"<<endl;
                cin>>c;
            }
            a = s2.electronic_products[b - 1].get_product_id();
            f = s2.electronic_products[b - 1].get_product_price();
            f1 = s2.electronic_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.electronic_products[b - 1].get_product_quantity() - c;
            s2.electronic_products[b - 1].set_quantity(c);
        }
        else if(a==2){
            cout<<"Going to the next step in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product to choose?"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Product id: " << s2.snacks_products[i].get_product_id() << " Product Name: " << s2.snacks_products[i].get_product_name() << " Product price: " <<s2.snacks_products[i].get_product_price() << " Product Quantity: " <<s2.snacks_products[i].get_product_quantity() << endl;
            }
            cin>>b;
            while (b>s2.num_of_snack_items && b>=0)
            {
                cout<<"You choose the the wrong product no."<<endl;
                cin>>b;
            }
            cout << "Product id: " << s2.snacks_products[b - 1].get_product_id() << " Product Name: " << s2.snacks_products[b - 1].get_product_name() << " Product price: " <<s2.snacks_products[b - 1].get_product_price() << " Product Quantity: " <<s2.snacks_products[b - 1].get_product_quantity() << endl;
            cout<<"How much quantity ?"<<endl;
            cin>>c;
            while (c>s2.snacks_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"You choose the the wrong quantity."<<endl;
                cout<<"Type again!"<<endl;
                cin>>c;
            }
            a = s2.snacks_products[b - 1].get_product_id();
            f = s2.snacks_products[b - 1].get_product_price();
            f1 = s2.snacks_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.snacks_products[b - 1].get_product_quantity() - c;
            s2.snacks_products[b - 1].set_quantity(c);
        }
        else if(a==3){
            cout<<"Going to the next step in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product to choose?"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout << "Product id: " << s2.stationary_products[i].get_product_id() << " Product Name: " << s2.stationary_products[i].get_product_name() << " Product price: " <<s2.stationary_products[i].get_product_price() << " Product Quantity: " <<s2.stationary_products[i].get_product_quantity() << endl;
            }
            cin>>b;
            while (b>s2.num_of_stationary_items && b>=0)
            {
                cout<<"You choose the the wrong product no."<<endl;
                cin>>b;
            }
            cout << "Product id: " << s2.stationary_products[b - 1].get_product_id() << " Product Name: " << s2.stationary_products[b - 1].get_product_name() << " Product price: " <<s2.stationary_products[b - 1].get_product_price() << " Product Quantity: " <<s2.stationary_products[b - 1].get_product_quantity() << endl;
            cout<<"How much quantity ?"<<endl;
            cin>>c;
            while (c>s2.stationary_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"You choose the the wrong quantity."<<endl;
                cout<<"Type again!"<<endl;
                cin>>c;
            }
            a = s2.stationary_products[b - 1].get_product_id();
            f = s2.stationary_products[b - 1].get_product_price();
            f1 = s2.stationary_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.stationary_products[b - 1].get_product_quantity() - c;
            s2.stationary_products[b - 1].set_quantity(c);
        }
        else if(a==0){
            cout<<"Showing the bill  in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            u1.bill(0);
        }
        } while (a != 0);
    }
};
class delivery_on_call{
    public:
        int a,b,c;
        double f;
        string f1;
        User<string,double,int> u1;
        stock_management s2;
    void buy(){
        srand(time(0));
        int a;
        int c = rand()%20 + 1;
        cout<<"Calling the ABC Supermarket!!"<<endl;
        cout<<"Dialing in about 20 seconds"<<endl;
        sleep(rand()%20 + 1);
        system("cls");
        cout<<"Write the extension number like: for delivery call:"<<c<<endl;
        cout<<"Extension Number:";
        cin>>a;
        while(a>c && a>=0){
            cout<<"Wrong Extension Number:"<<endl;
            cout<<"Type again!"<<endl;
            cin>>a;
        }
        cout<<"Dialing in again about 20 seconds"<<endl;
        sleep(rand()%20 + 1);
        system("cls");
        if (a==c)
        {
            cout<<"Operator: Assalamualaikum. Thanks for calling ABC Supermarket! How may I help you?"<<endl;
            cout<<"Customer:I want to order some items."<<endl;
        do
        {
            sleep(5);
            system("cls");
        cout<<"Operator:Ok.Which of the following department you want to choose?"<<endl;
        cout<<"1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill"<<endl;
        cin>>a;
        if (a==1)
        {
            sleep(5);
            system("cls");
            cout<<"Customer: I want to choose electronic items department."<<endl;
            cout<<"Operator: Which product you want to choose? We have products like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout <<i + 1<<" "<< s2.electronic_products[i].get_product_name() << endl;
            }
            cin>>b;
            while (b>s2.num_of_electronic_items && b>=0)
            {
                cout<<"Operator:You choose the the wrong product no.Please Say again!"<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"Customer:I want product "<<s2.electronic_products[b - 1].get_product_name()<<endl;
            cout << "Operator:The product price is:"<<s2.electronic_products[b - 1].get_product_price() << endl;
            cout<<"Operator:How much quantity you want of this product?"<<endl;
            cin>>c;
            while (c>s2.electronic_products[b - 1].get_product_quantity() && c>=0)
            {
                cout<<"Operator:We have don't have enough quantity of that item. Please say again!"<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"Customer: I want "<<c<<" "<<s2.electronic_products[b - 1].get_product_name()<<endl;
            a = s2.electronic_products[b - 1].get_product_id();
            f = s2.electronic_products[b - 1].get_product_price();
            f1 = s2.electronic_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.electronic_products[b - 1].get_product_quantity() - c;
            s2.electronic_products[b - 1].set_quantity(c);
            sleep(5);
            system("cls");
            cout<<"Operator:Ok.Anything Else you want?(1 for Yes or 2 for No)"<<endl;
            cin>>a;
            if(a==1){
                cout<<"Customer:Yes"<<endl;
            }
            else if(a==2){
                cout<<"Customer:No(Press 0 for exit and Bill)"<<endl;
            }
        }
        else if(a==2){
            sleep(5);
            system("cls");
            cout<<"Customer:I want to choose snacks items department."<<endl;
            cout<<"Operator:Which product to choose? We have products like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout<<i + 1<<" "<<s2.snacks_products[i].get_product_name()<<endl;
            }
            cin>>b;
            while (b>s2.num_of_snack_items && b>=0)
            {
                cout<<"Operator:You choose the the wrong product no.Please Say again!"<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"Customer:I want product "<<s2.snacks_products[b - 1].get_product_name()<<endl;
            cout << "Operator:The product price is:"<<s2.snacks_products[b - 1].get_product_price() << endl;
            cout<<"Operator:How much quantity of this product?"<<endl;
            cin>>c;
            while (c>s2.snacks_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"Operator:We have don't have enough quantity of that item. Please say again!"<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"Customer: I want "<<c<<" "<<s2.snacks_products[b - 1].get_product_name()<<endl;
            a = s2.snacks_products[b - 1].get_product_id();
            f = s2.snacks_products[b - 1].get_product_price();
            f1 = s2.snacks_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.snacks_products[b - 1].get_product_quantity() - c;
            s2.snacks_products[b - 1].set_quantity(c);
            sleep(5);
            system("cls");
            cout<<"Operator:OK.Anything Else you want?(1 for Yes or 2 for No)"<<endl;
            cin>>a;
            if(a==1){
                cout<<"Customer:Yes"<<endl;
            }
            else if(a==2){
                cout<<"Customer:No(Press 0 for exit and bill)"<<endl;
            }
        }
        else if(a==3){
            sleep(5);
            system("cls");
            cout<<"Customer:I want to choose stationary items department."<<endl;
            cout<<"Operator:Which product to choose? We have products like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout <<i + 1<<" "<< s2.stationary_products[i].get_product_name() << endl;
            }
            cin>>b;
            while (b>s2.num_of_stationary_items && b>=0)
            {
                cout<<"Operator:You choose the the wrong product no.Please Say again!"<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"Customer:I want product "<<s2.stationary_products[b - 1].get_product_name()<<endl;
            cout << "Operator:The product price is:"<<s2.stationary_products[b - 1].get_product_price() << endl;
            cout<<"Operator:How much quantity you want of this product?"<<endl;
            cin>>c;
            while (c>s2.stationary_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"Operator:We have don't have enough quantity of that item. Please say again!"<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"Customer: I want "<<c<<" "<<s2.stationary_products[b - 1].get_product_name()<<endl;
            a = s2.stationary_products[b - 1].get_product_id();
            f = s2.stationary_products[b - 1].get_product_price();
            f1 = s2.stationary_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.stationary_products[b - 1].get_product_quantity() - c;
            s2.stationary_products[b - 1].set_quantity(c);
            sleep(5);
            system("cls");
            cout<<"Operator:OK.Anything Else you want?(1 for Yes or 2 for No)"<<endl;
            cin>>a;
            if(a==1){
                cout<<"Customer:Yes"<<endl;
            }
            else if(a==2){
                cout<<"Customer:No(Press 0 for exit and Bill)"<<endl;
            }
        }
        else if(a==0){
            cout<<"Operator:OK. Thanks for calling ABC SuperMarket."<<endl;
            sleep(5);
            system("cls");
            u1.bill(1);
        }
        } while (a != 0);
        }
    }
};
class Manual{
    public:
        int a,b,c;
        double f;
        string f1;
        User<string,double,int> u1;
        stock_management s2;
    void buy(){
        cout<<"Going to the ABC Supermarket!!"<<endl;
        cout<<"Reaching in 5 seconds now"<<endl;
        do
        {
        sleep(5);
        system("cls");
        cout<<"Which department should I go first?"<<endl;
        cout<<"1.Electronic Items\n2.Snacks Items\n3.Stationary Items\n0.Exit and show the Bill"<<endl;
        cin>>a;
        if (a==1)
        {
            cout<<"I think I will go to electronic items department which is in the first floor."<<endl;
            cout<<"Reaching in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product should I buy from this department?Items like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout <<i + 1<<" "<< s2.electronic_products[i].get_product_name() << endl;
            }
            cin>>b;
            while (b>s2.num_of_electronic_items && b>=0)
            {
                cout<<"Need to think another item as it is not available."<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy product "<<s2.electronic_products[b - 1].get_product_name()<<endl;
            cout<<"How much should I need(quantity)?"<<endl;
            cin>>c;
            while (c>s2.electronic_products[b - 1].get_product_quantity() && c>=0)
            {
                cout<<"Don't have much quantity I guess."<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy "<<c<<" "<<s2.electronic_products[b - 1].get_product_name()<<" which is "<<s2.electronic_products[b - 1].get_product_price()<<" per one quantity"<<endl;
            a = s2.electronic_products[b - 1].get_product_id();
            f = s2.electronic_products[b - 1].get_product_price();
            f1 = s2.electronic_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.electronic_products[b - 1].get_product_quantity() - c;
            s2.electronic_products[b - 1].set_quantity(c);
        }
        else if(a==2){
            cout<<"I think I will go to snacks items department which is in the second floor."<<endl;
            cout<<"Reaching in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product should I buy from this department?Items like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout<<i + 1<<" "<<s2.snacks_products[i].get_product_name()<<endl;
            }
            cin>>b;
            while (b>s2.num_of_snack_items && b>=0)
            {
                cout<<"Need to think another item as it is not available."<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy "<<s2.snacks_products[b - 1].get_product_name()<<endl;
            cout<<"How much should I need(quantity)?"<<endl;
            cin>>c;
            while (c>s2.snacks_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"Don't have much quantity I guess."<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy "<<c<<" "<<s2.snacks_products[b - 1].get_product_name()<<" which is "<<s2.snacks_products[b - 1].get_product_price()<<" per one quantity"<<endl;
            a = s2.snacks_products[b - 1].get_product_id();
            f = s2.snacks_products[b - 1].get_product_price();
            f1 = s2.snacks_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.snacks_products[b - 1].get_product_quantity() - c;
            s2.snacks_products[b - 1].set_quantity(c);
        }
        else if(a==3){
            cout<<"I think I will go to stationary items department which is in the third floor."<<endl;
            cout<<"Reaching in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            cout<<"Which product should I buy from this department?Items like:"<<endl;
            for (int i = 0; i < 3; i++)
            {
                cout <<i + 1<<" "<< s2.stationary_products[i].get_product_name() << endl;
            }
            cin>>b;
            while (b>s2.num_of_stationary_items && b>=0)
            {
                cout<<"Need to think another item as it is not available."<<endl;
                cin>>b;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy "<<s2.stationary_products[b - 1].get_product_name()<<endl;
            cout<<"How much should I need(quantity)?"<<endl;
            cin>>c;
            while (c>s2.stationary_products[b - 1].get_product_quantity() && b>=0)
            {
                cout<<"Don't have much quantity I guess."<<endl;
                cin>>c;
            }
            sleep(5);
            system("cls");
            cout<<"I will buy "<<c<<" "<<s2.stationary_products[b - 1].get_product_name()<<" which is "<<s2.stationary_products[b - 1].get_product_price()<<" per one quantity"<<endl;
            a = s2.stationary_products[b - 1].get_product_id();
            f = s2.stationary_products[b - 1].get_product_price();
            f1 = s2.stationary_products[b - 1].get_product_name();
            u1.add_to_cart(a,f,f1,c);
            c = s2.stationary_products[b - 1].get_product_quantity() - c;
            s2.stationary_products[b - 1].set_quantity(c);
        }
        else if(a==0){
            cout<<"Showing the bill  in 5 seconds now"<<endl;
            sleep(5);
            system("cls");
            u1.bill(2);
        }
        } while (a != 0);
    }
};
template<class t,class t1,class t2>
void User<t,t1,t2>::select_option(){
    {
        int x;
        do
        {
            cout<<"Which of the following options you want to choose to buy products from the supermarket?"<<endl;
            cout<<"1.Delivery App\n2.Delivery Call\n3.Manual"<<endl;
            cin>>x;
            if(x!=1 && x!=2 && x!=3 && x<=0){
                cout<<"Wrong Option!Try Again"<<endl;
            }
        } while (x>3);
        cout<<"Going to next steps in 5 seconds"<<endl;
        sleep(5);
        system("cls");
        if (x==1)
        {
            delivery_on_app a1;
            a1.buy();
            
        }
        else if(x==2){
            delivery_on_call c1;
            c1.buy();
        }
        else if(x==3){
            Manual m1;
            m1.buy();
        }
    }
}
int main()
{
    int u;
    cout<<"Which of the following options you want to choose?"<<endl;
    cout<<"1.Admin\n2.User"<<endl;
    cin>>u;
    cout<<"Going to the next step in 5 seconds"<<endl;
    sleep(5);
    system("cls");
    if(u==1){
    // Create an instance of Manager
    Manager manager(101, "John", 50000, "01-01-2022", "Manager", 2022);

    // Manager login verification
    if (manager.verification("manager", "1234"))
    {
        cout << "Manager login successful!" << endl;
        manager.manager(); // Manager performs tasks
    }
    else
    {
        cout << "Invalid credentials for Manager." << endl;
    }

    // Create an instance of Owner
    Owner owner;

    // Owner login verification
    if (owner.verification("xyz", "123"))
    {
        cout << "Owner login successful!" << endl;
        owner.owner(); // Owner performs tasks
    }
    else
    {
        cout << "Invalid credentials for Owner." << endl;
    }
    }
    else if(u==2){
    User<string,double,int> u1;
    u1.select_option();
    }
    return 0;
}
