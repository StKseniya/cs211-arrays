#include <iostream>
#include <cassert>


void task_1()
{
    /* Task 1: find a bug in the following declaration.
     * It should help you to compile this with:
     *   g++ -c -pedantic arrays.cpp                                   
     * pedantic flag here means: strictly as in language standard 
     * for explanation see:
     *  https://gcc.gnu.org/onlinedocs/gcc/Variable-Length.html*/
    const  int n = 10;
    int a[n];
}



// Task 2
void task_2()
{
    int a[5] = {0};
    
    assert(a[4]);
}


// returns zero
int task_3_zero()
{
    // Task 3
    // Hint 1: fix with initialization (not assignment)
    // Hint 2: you can use only one zero and not five of them! cf. task 2
    int a[5] = {1, 2, 3, 0, 5};
    
    assert(!a[4]);
    return a[4]; // don't touch this!
}


void task_4()
{
    // Task 4: asserts at the end must hold
    // Hint: fix with initialization (not assignment)
    int a[5] = {1, 2, 3, 4, 5};
    
    assert(a[0] == 1);
    assert(a[1] == 2);
    assert(a[2] == 3);
    assert(a[3] == 4);
    assert(a[4] == 5);    
}
 

// Task 5
// copy arr1 to arr2
void task_5_copy(int * arr1, int * arr2, int size)
{
    for(int *p1 = arr1, *p2 = arr2; p1 < arr1 + size; *p1++ = *p2++);
        //empty
}

// Task 6
// copy array `arr1` to array `arr2` of the same size
void task_6_poor_copy(int * arr1, int * arr2, int size)
{
    // Hint: something wrong here; test this from main()
    for(int i = 0; i < size; ++i)
    {
        arr2[i] = arr1[i];
    }
}

// Task 7
// print array `arr`
void task_7_print(int * arr, int size, char delim = ' ')
{
    // Hint: something wrong here; run this from main()
    for(int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << delim;
    }
}
   #if 0
// NOTE: you should move this `if` down as you start solving each task

#endif
