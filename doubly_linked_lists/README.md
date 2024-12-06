<img align="center" width="35%" src="https://cdn.prod.website-files.com/64107f65f30b69371e3d6bfa/65c6179aa44b63fa4f31e7ad_Holberton-Logo-Cherry.svg">


# **Doubly Linked List Functions**

This repository contains various functions for implementing and manipulating doubly linked lists. Below are the details of each task and its corresponding implementation.

---

## **0. Print List** - *Mandatory*

Write a function that prints all the elements of a `dlistint_t` list.

**Prototype**: `size_t print_dlistint(const dlistint_t *h);`

**Return**: the number of nodes

**Format**: see example

### Example:
```bash
julien@ubuntu:~/Doubly linked lists$ ./a 
9
8
-> 2 elements
Repository Info:

GitHub Repository: holbertonschool-low_level_programming
Directory: doubly_linked_lists
File: 0-print_dlistint.c
1. List Length - Mandatory
Write a function that returns the number of elements in a linked dlistint_t list.

Prototype: size_t dlistint_len(const dlistint_t *h);

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./b 
-> 2 elements
Repository Info:

File: 1-dlistint_len.c
2. Add Node - Mandatory
Write a function that adds a new node at the beginning of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

Return: the address of the new element, or NULL if it failed

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
Repository Info:

File: 2-add_dnodeint.c
3. Add Node at the End - Mandatory
Write a function that adds a new node at the end of a dlistint_t list.

Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

Return: the address of the new element, or NULL if it failed

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
Repository Info:

File: 3-add_dnodeint_end.c
4. Free List - Mandatory
Write a function that frees a dlistint_t list.

Prototype: void free_dlistint(dlistint_t *head);

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== All heap blocks were freed -- no leaks are possible
Repository Info:

File: 4-free_dlistint.c
5. Get Node at Index - Mandatory
Write a function that returns the nth node of a dlistint_t linked list.

Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

Return: the node at the given index, or NULL if it doesn't exist

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
Repository Info:

File: 5-get_dnodeint.c
6. Sum List - Mandatory
Write a function that returns the sum of all the data (n) of a dlistint_t linked list.

Prototype: int sum_dlistint(dlistint_t *head);

Return: sum of all elements, or 0 if the list is empty

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./i 
sum = 1534
Repository Info:

File: 6-sum_dlistint.c
7. Insert at Index - Mandatory
Write a function that inserts a new node at a given position.

Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

Return: the address of the new node, or NULL if it failed

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
Repository Info:

File: 7-insert_dnodeint.c
8. Delete at Index - Mandatory
Write a function that deletes the node at index index of a dlistint_t linked list.

Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Return: 1 if it succeeded, -1 if it failed

Example:
bash
Copier le code
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
Repository Info:

File: 8-delete_dnodeint.c
