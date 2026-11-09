// #include <stdio.h>

// int main(void) {
//     int age = 21;
//     printf("Value of age   : %d\n", age);
//     printf("Address of age : %p\n", &age);
//     printf("Size of age    : %d bytes\n", sizeof(age));
//     return 0;
// }

// #include <stdio.h>

// int main(void) {
//     int x = 10;
//     int *p = &x;          // p now holds the address of x

//     printf("x        = %d\n", x);
//     printf("&x       = %p\n", &x);
//     printf("p        = %p\n", p);   // same as &x
//     printf("*p       = %d\n", *p);          // value at that address: 10
//     printf("&p       = %p\n", &p);  // p has its own address too

//     *p = 25;              // change x THROUGH the pointer
//     printf("x is now %d\n", x);             // 25

//     return 0;
// }

// #include <stdio.h>

// void swapByValue(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;            // only the local copies are swapped
// }

// void swapByPointer(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;           // the caller's variables are swapped
// }

// int main(void) {
//     int x = 5, y = 9;

//     swapByValue(x, y);
//     printf("After swapByValue  : x = %d, y = %d\n", x, y);

//     swapByPointer(&x, &y);
//     printf("After swapByPointer: x = %d, y = %d\n", x, y);
//     return 0;
// }

// #include <stdio.h>
// void doubleAll(int arr[],   int n);
// void doubleAll(int *arr,    int n);
// void doubleAll(int arr[10], int n);

//when array is passed to a function

// void doubleAll(int arr[], int n) {
//     printf("Inside : arr       = %p\n",arr);
//     printf("Inside : sizeof    = %d bytes\n", sizeof(arr));   // size of a pointer!

//     for (int i = 0; i < n; i++) {
//         arr[i] = arr[i] * 2;     // writes into main's array
//         //*(arr + i) = *(arr + i) *2;
//     }
// }

// int main(void) {
//     int nums[5] = {1, 2, 3, 4, 5};
//     int n = sizeof(nums) / sizeof(nums[0]);   // 20 / 4 = 5 elements

//     printf("In main: &nums[0]  = %p\n", &nums[0]);
//     printf("In main: sizeof    = %d bytes\n", sizeof(nums));   // whole array

//     doubleAll(nums, n);

//     printf("After call: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
//     return 0;
// }

// #include <stdio.h>
// //Arrays and pointer arithmetic

// int main(void) {
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p = arr;                 // same as p = &arr[0]

//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] = %d   *(p + %d) = %d   address = %p\n",
//                i, arr[i], i, *(p + i), (p + i));
//     }

//     p++;                          // move to the next int
//     printf("After p++, *p = %d\n", *p);   // 20
//     return 0;
// }

// #include <stdio.h>

// int myStrlen(const char *s) {
//     const char *start = s;
//     while (*s != '\0') {
//         s++;
//     }
  
//     return (int)(s - start);   // pointer subtraction = number of chars
// }

// int main(void) {
//     char name[] = "NED";        // modifiable array: {'N','E','D','\0'}
//     const char *msg = "Hello";  // pointer to a read-only string literal

//     name[0] = 'B';              // OK -> "BED"
//     // msg[0] = 'J';            // WRONG: modifying a literal is undefined behaviour

//     printf("%s has %d chars\n", name, myStrlen(name));   // BED has 3 chars
//     printf("%s has %d chars\n", msg, myStrlen(msg));     // Hello has 5 chars
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int n;
//     printf("How many marks? ");
//     scanf("%d", &n);

//     int *marks = malloc(n * sizeof(int)); //IF N=4 SO 4X4=16 bytes of memory allocated
//     if (marks == NULL) {                 // always check!
//         printf("Memory allocation failed\n");
//         return 1;
    
//     }

//     int total = 0;
//     for (int i = 0; i < n; i++) {
//         printf("Mark %d: ", i + 1);
//         scanf("%d", &marks[i]);          // or: marks + i
//         total += marks[i];
//     }
//     printf("Average = %.2f\n", (float)total / n);

//     free(marks);                         // release the memory
//     marks = NULL;                        // avoid a dangling pointer
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int candidates = 5;
//     int votes[] = {2, 0, 4, 2, 1, 2, 4, 0}; 
//     int total = sizeof(votes) / sizeof(votes[0]);

//     int *count = calloc(candidates, sizeof(int));   // 5 ints, all 0 //Calloc initializes the memory to 0, unlike malloc which leaves it uninitialized
//     if (count == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (int i = 0; i < total; i++) {
//         count[votes[i]]++;          // safe: every counter starts at 0
//     }

//     for (int i = 0; i < candidates; i++) {
//         printf("Candidate %d: %d votes\n", i, count[i]); // HOW MANY VOTES EACH CANDIDATE GOT
//     }

//     free(count);
//     count = NULL;
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void) {
//     int capacity = 2, size = 0, value;
//     int *marks = malloc(capacity * sizeof(int));
//     if (marks == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     printf("Enter marks (-1 to stop):\n");
//     //scanf returns a number: how many items it successfully read and stored.
//     while (scanf("%d", &value) == 1 && value != -1) {
//         if (size == capacity) {                  // array is full
//             capacity *= 2;
//             //Case 1: the block grew in place. There was free memory right
//             // after the old block, so realloc just extended it.
//             //marks → 0x1000   [45][67]
//             //temp  → 0x1000   [45][67][  ][  ]
//             //The address didn’t change, so marks = temp; changes nothing
//             // in practice. It’s harmless.
//             //Case 2: the block moved. There wasn’t enough room after the 
//             //old block, so realloc allocated a new block somewhere else, 
//             //copied 45 and 67 into it, and freed the old block.
//             //marks → 0x1000   (freed — no longer yours)
//             //temp  → 0x2000   [45][67][  ][  ]
//             int *temp = realloc(marks, capacity * sizeof(int)); // try to resize the block
//             if (temp == NULL) {                  // resize failed
//                 printf("Memory allocation failed\n");
//                 free(marks);                     // old block is still valid
//                 return 1;
//             }
//             //The following line copies an address, not data. After it runs,
//             //marks and temp hold the same address, so both point to the 
//             //resized block. No array elements are copied here; realloc 
//             //already did any copying that was needed.
//             marks = temp;                        // use the resized block
//             printf("  (array grown to %d elements)\n", capacity);
//         }
//         marks[size++] = value;
//     }

//     printf("You entered %d marks:", size);
//     for (int i = 0; i < size; i++) {
//         printf(" %d", marks[i]);
//     }
//     printf("\n");

//     free(marks);
//     marks = NULL;
//     return 0;
// }

#include <stdio.h>
#include <string.h>

struct Student {
    char  name[30];
    int   roll;
    float cgpa;
};

void updateCgpa(struct Student *s, float newCgpa) {
    s->cgpa = newCgpa;          // same as (*s).cgpa = newCgpa;
}

int main(void) {
    struct Student st = {"Ali", 101, 3.20f};
    struct Student *ptr = &st;

    printf("%s (%d): %.2f\n", ptr->name, ptr->roll, ptr->cgpa);
    updateCgpa(&st, 3.55f);
    printf("Updated CGPA: %.2f\n", st.cgpa);   // 3.55
    return 0;
}