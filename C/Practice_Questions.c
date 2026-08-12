#include <stdio.h>
#include <string.h>

int main()
{
  int platform_choice;

  printf("Select Platform:\n");
  printf("(1) W3Resource     (2) HackerRank     (3) GeeksforGeeks\n"
         "(4) Project Euler  (5) CodeChef       (6) Exercism\n"
         "(7) CodeWars\n\n");
  printf("Select Platform (1-7): ");
  scanf("%d",&platform_choice);
  printf("\n\n");

  switch(platform_choice)
  case 1:
  {
    int chapter_choice;

    printf("Select Chapter inside W3Resource:\n");
    printf("(1) Basic Declerations and Expressions     (2) Basic Part-II          (3) Basic Algorithm\n"
           "(4) Variable Type                          (5) Input Output           (6) Conditional Statement\n"
           "(7) While Loop                             (8) Do-While Loop          (9) For Loop\n"
           "(10) Array                                 (11) Structure             (12) Pointer\n"
           "(13) Linked List                           (14) Stack                 (15) Binary Heap (Tree-Based Structure)\n"
           "(16) Queue                                 (17) Hash                  (18) Tree\n"
           "(19) Graph                                 (20) Numbers               (21) Math\n"
           "(22) String                                (23) Date Time             (24) Function\n"
           "(25) Callback Function                     (26) Variadic Function     (27) Inline Funciton\n"
           "(28) Recursion                             (29) File Handling         (30) Search and Sorting\n"
           "(31) Challenges                            (32) C Snippets\n\n");
    printf("Select Chapter (1-32): ");
  }
}