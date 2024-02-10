// Pide Vendor Application
// This C++ program simulates a simple scenario where a pide vendor manages the sale of pide and customers queuing up to buy pide.

// Used Classes
// Vendor: Manages pide sales and customer queue operations.

// Customer: Contains information about customers who want to buy pide.

// Usage
// The program is executed by creating instances of a vendor and customers within the main function. The simulation includes customers entering the queue to buy pide and the sale of pide.

// ... (Other code within the main function)

vendor.sellPide();
vendor.sellPide();
vendor.sellPide();
cout << vendor;

// ... (Other code)

## Execution
To compile and run the program, follow these steps:

Compile:
```bash
g++ QueueExample.cpp -o QueueExample

Run:
./QueueExample

Example Output

An example output of the program is as follows:
Customers waiting in the queue:
1 -> Mert wants to buy 2 pieces of pide.
2 -> İlayda wants to buy 3 pieces of pide.
3 -> Hasan wants to buy 3 pieces of pide.
4 -> Hüseyin wants to buy 2 pieces of pide.
5 -> Tuana wants to buy 1 piece of pide.
6 -> Emir wants to buy 4 pieces of pide.
Mert's order of 2 pides is served.
İlayda's order of 3 pides is served.
Hasan's order of 3 pides is served.
Customers waiting in the queue:
1 -> Hüseyin wants to buy 2 pieces of pide.
2 -> Tuana wants to buy 1 piece of pide.
3 -> Emir wants to buy 4 pieces of pide.
