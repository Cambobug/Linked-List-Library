** All source code was written by user Cambobug on GitHub (https://github.com/Cambobug), although it is free to use, sourcing me would be appreciated **

** Project is currently being tested for bugs and memory errors so it may be unstable right now ** 

Welcome to Cambobug's C linked list API. This API is intended to be used when implementing linked lists in the C language. It contains a variety of functions that allow the user to manipulate their data using a linked list. 

* Important *

    The list structure holds the head and tail (first and last) nodes  of the list, each node in the list points to the data that the user wishes to store in the list. Therefore, in order to avoid memory issues, if the user allocates memory for whatever data they are storing in the linked list, they must also write a function that frees the memory they allocated. If no allocation for the users data occurs then no delete function is required, only a dummy delete function, which is included in the API.


TO-DO

    1. Search for more useful linked list ideas
        a. Sort the list via a function pointer that returns what to sort by from .data

    2. Write tests for each function (empty lists, null lists, populated lists, NULL data)
        a. pushBack X
        b. pushFront X
        c. pop X
        d. toss X
        e. deleteAtIndx
        f. freeList
        g. clone
        h. peekNode
        i. pullNode
        j. peekFront
        k. peekBack