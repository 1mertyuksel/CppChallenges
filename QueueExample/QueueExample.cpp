#include <iostream>
#include <queue>

using namespace std;

class Customer;

class Baker {
    std::queue<Customer*> queue;

public:
    void sellPide();
    void enterQueue(Customer* c);

    friend ostream& operator<<(ostream& o, Baker& b);
};

class Customer {
    string name;
    int quantity;

public:
    Customer(string name, int quantity) : name(name), quantity(quantity) {}

    friend ostream& operator<<(ostream& o, Customer& c);
};

ostream& operator<<(ostream& o, Customer& c);

ostream& operator<<(ostream& o, Baker& b) {
    if (b.queue.empty()) {
        o << "No customers waiting in the queue" << endl;
    } else {
        o << "Customers waiting in the queue:" << endl;
        int i = 1;
        std::queue<Customer*> queueCopy = b.queue;  
        while (!queueCopy.empty()) {
            Customer c = *queueCopy.front();
            o << i << " -> " << c << endl;
            queueCopy.pop();
            i++;
        }
    }
    return o;
}

void Baker::sellPide() {
    if (queue.empty()) {
        cout << "No customer wants to buy pide!" << endl;
    } else {
        Customer c = *queue.front();
        cout << c << " pides sold." << endl;
        queue.pop();
    }
}

void Baker::enterQueue(Customer* c) {
    if (c) {
        queue.push(c);
    }
}

ostream& operator<<(ostream& o, Customer& c) {
    o << c.name << " wants to buy " << c.quantity << " pieces of pide.";
    return o;
}

int main() {
    Baker baker;

    Customer c("Mert", 2);
    Customer c1("İlayda", 3);
    Customer c2("Tuana", 1);
    Customer c3("Emir", 4);
    Customer c4("Hasan", 3);
    Customer c5("Hüseyin", 2);

    baker.enterQueue(&c);
    baker.enterQueue(&c1);
    baker.enterQueue(&c4);
    baker.enterQueue(&c5);
    baker.enterQueue(&c2);
    baker.enterQueue(&c3);

    baker.sellPide();
    baker.sellPide();
    baker.sellPide();
    cout << baker;

    return 0;
}
