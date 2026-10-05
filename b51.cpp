#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Product {
    string id;       
    string name;     
    int quantity;    
    float price;     
};

struct Node {
    Product data;
    Node* next;
    
    Node(Product p) {
        data = p;
        next = nullptr;
    }
};

class ShoppingCart {
private:
    Node* head;

public:
    ShoppingCart() {
        head = nullptr;
    }

    ~ShoppingCart() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void addProduct(string id, string name, int quantity, float price) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data.id == id) {
                current->data.quantity += quantity; 
                cout << "-> Da cap nhat so luong cho san pham: " << name << "\n";
                return;
            }
            current = current->next;
        }

        Product newProduct = {id, name, quantity, price};
        Node* newNode = new Node(newProduct);
        newNode->next = head;
        head = newNode;
        cout << "-> Da them moi san pham: " << name << " vao gio hang.\n";
    }

    void removeProduct(string id) {
        if (head == nullptr) return;

        if (head->data.id == id) {
            Node* temp = head;
            head = head->next;
            cout << "-> Da xoa san pham co ma " << id << " khoi gio hang.\n";
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        while (current != nullptr && current->data.id != id) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << "-> Khong tim thay san pham voi ma: " << id << "\n";
            return;
        }

        prev->next = current->next;
        cout << "-> Da xoa san pham co ma " << id << " khoi gio hang.\n";
        delete current;
    }

    void updateQuantity(string id, int newQuantity) {
        if (newQuantity == 0) {
            removeProduct(id);
            return;
        }

        Node* current = head;
        while (current != nullptr) {
            if (current->data.id == id) {
                current->data.quantity = newQuantity;
                cout << "-> Da cap nhat so luong cua " << current->data.name << " thanh " << newQuantity << ".\n";
                return;
            }
            current = current->next;
        }
        cout << "-> Khong tim thay san pham voi ma: " << id << "\n";
    }

    float calculateTotalCartValue() {
        float totalCartValue = 0;
        Node* current = head;
        while (current != nullptr) {
            totalCartValue += (current->data.quantity * current->data.price);
            current = current->next;
        }
        return totalCartValue;
    }
    void sortCartDescending() {
        if (head == nullptr || head->next == nullptr) return;

        bool swapped;
        Node* current;
        Node* lastPtr = nullptr; 
        do {
            swapped = false;
            current = head;

            while (current->next != lastPtr) {
                float currentTotal = current->data.quantity * current->data.price;
                float nextTotal = current->next->data.quantity * current->next->data.price;

                if (currentTotal < nextTotal) {
                    Product temp = current->data;
                    current->data = current->next->data;
                    current->next->data = temp;
                    swapped = true;
                }
                current = current->next;
            }
            lastPtr = current;
        } while (swapped);
        cout << "-> Da sap xep gio hang theo tong tien tung san pham giam dan.\n";
    }

    void displayCart() {
        if (head == nullptr) {
            cout << "Gio hang hien tai dang trong!\n";
            return;
        }

        cout << string(60, '-') << "\n";
        cout << left << setw(10) << "Ma SP" 
             << setw(20) << "Ten SP" 
             << setw(10) << "So luong" 
             << setw(10) << "Don gia" 
             << "Tong tien\n";
        cout << string(60, '-') << "\n";

        Node* current = head;
        while (current != nullptr) {
            float totalItemPrice = current->data.quantity * current->data.price;
            cout << left << setw(10) << current->data.id 
                 << setw(20) << current->data.name 
                 << setw(10) << current->data.quantity 
                 << setw(10) << current->data.price 
                 << totalItemPrice << "\n";
            current = current->next;
        }
        cout << string(60, '-') << "\n";
        cout << "TONG TIEN TOAN BO GIO HANG: " << calculateTotalCartValue() << "\n\n";
    }
};

int main() {
    ShoppingCart cart;

    cout << "--- THEO KICH BAN TEST ---\n";
    cart.addProduct("SP01", "Ao thun", 2, 150000);
    cart.addProduct("SP02", "Quan Jeans", 1, 350000);
    cart.addProduct("SP03", "Giay Sneaker", 1, 500000);
    
    cart.addProduct("SP01", "Ao thun", 1, 150000); 
    cout << "\n[Hien thi gio hang sau khi them]\n";
    cart.displayCart();

    cart.updateQuantity("SP02", 3); 
    cart.updateQuantity("SP03", 0); 
    cout << "\n[Hien thi gio hang sau khi cap nhat]\n";
    cart.displayCart();

    cart.addProduct("SP04", "Mu luoi trai", 2, 50000);
    cart.removeProduct("SP01"); 
    cout << "\n[Hien thi gio hang sau khi xoa SP01 va them SP04]\n";
    cart.displayCart();

    cart.sortCartDescending();
    cout << "\n[Hien thi gio hang sau khi sap xep giam dan]\n";
    cart.displayCart();

    return 0;
}