/**
 * ! Linked List are implemented in 2 ways
 * ? 1. Structure, memory allocation using malloc, deallocate memory using free() -> library function
 * ? 2. Class, memory allocation using new operator faster than malloc, dealloacate memory using delete -> delete operator calls deconstructor
 * * class with free can cause memory leak.
 * * structure allocate memory for data members at once
 * * new operator allocates memory when constructor created
 * * Structure Implementation
 * struct Node{
 * int data;
 * Node *next
 * }
 * * Class Implemation 
 * class Node{
 * public:
 * int data;
 * Node *next;
 * //constructor 
 * Node(int val)
 * {
 *   data = value;
 *   next = NULL;
 * }
 * };
 * 
*/
#include <bits/stdc++.h>
using namespace std;
 