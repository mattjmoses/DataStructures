#include <iostream>
#include "HashTabl.h"
int main() {

    // Create 26 Items to store in the Hash Table.
    Node * A = new Node {"Apple", NULL};
    Node * B = new Node {"Banana", NULL};
    Node * C = new Node {"Caterpillar", NULL};
    Node * D = new Node {"Dog", NULL};
    Node * E = new Node {"Elephant", NULL};
    Node * F = new Node {"Fedora", NULL};
    Node * G = new Node {"Goosebumps", NULL};
    Node * H = new Node {"House", NULL};
    Node * I = new Node {"Insects", NULL};
    Node * J = new Node {"Jam", NULL};
    Node * K = new Node {"Kite", NULL};
    Node * L = new Node {"Limestone", NULL};
    Node * M = new Node {"Mountaineering", NULL};
    Node * N = new Node {"Night", NULL};
    Node * O = new Node {"Open Sesame", NULL};
    Node * P = new Node {"Potatoes", NULL};
    Node * Q = new Node {"Quantum Mechanics", NULL};
    Node * R = new Node {"Rrrrrrrrrrawr", NULL};
    Node * S = new Node {"Snakes", NULL};
    Node * T = new Node {"Tizzy Tube", NULL};
    Node * U = new Node {"Underworld", NULL};
    Node * V = new Node {"Volcanic Ash", NULL};
    Node * W = new Node {"Who When What Why", NULL};
    Node * X = new Node {"XXX", NULL};
    Node * Y = new Node {"Yellow", NULL};
    Node * Z = new Node {"Zest of Lemon", NULL};

    // Create a Hash Table of 13 Linked List elements.
    HashTabl table;

    // Add 3 Items to Hash Table.
    table.insertItem(A);
    table.insertItem(B);
    table.insertItem(C);
    table.printTable();
    table.pringHashTable();

    // Remove one item from Hash Table.
    table.removeItem("Apple");
    table.printTable();
    table.pringHashTable();


    // Add 23 items to Hash Table.
    table.insertItem(D);
    table.insertItem(E);
    table.insertItem(F);
    table.insertItem(G);
    table.insertItem(H);
    table.insertItem(I);
    table.insertItem(J);
    table.insertItem(K);
    table.insertItem(L);
    table.insertItem(M);
    table.insertItem(N);
    table.insertItem(O);
    table.insertItem(P);
    table.insertItem(Q);
    table.insertItem(R);
    table.insertItem(S);
    table.insertItem(T);
    table.insertItem(U);
    table.insertItem(V);
    table.insertItem(W);
    table.insertItem(X);
    table.insertItem(Y);
    table.insertItem(Z);
    table.printTable();
    table.pringHashTable();

    // Look up an Node in the Hash Table.
    bool result = table.getItemByKey("Peener");
    cout << "Result of search: " << result << endl;
    return 0;
}