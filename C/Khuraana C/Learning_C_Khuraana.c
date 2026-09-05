#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <math.h>

int add(int a, int b);
int main()
{
    /* Insert Your Choice - Code Start*/
    char choice[5];

    printf("=========== All Questions ===========\n\n");
    printf("Q1     Q2     Q3     Q4     Q5\n"
           "Q6     Q7     Q8     Q9     Q10\n"
           "..     ..     ..     ..     ...\n\n");
    printf("Select Your Question Number: ");
    scanf(" %s",&choice);
    printf("\n\n");

    /* Insert Your Choice - Code End*/

    if(strcmp(choice,"1") == 0)
    {
        /* Pass or Fail (Question 1) - Start Here */
        int M1,M2;
        printf("==================== ");
        printf("Question 1 ");
        printf("====================\n");
        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        if(M1>50)
        {
           if(M2>50)
           printf("Result: Pass");
           else
           printf("Result: Fail");
        }
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail (Question 1) - End Here */
    }

    else if(strcmp(choice,"2") == 0)
    {
        /* Pass or Fail (Question 2) - Start Here */
        int M1,M2,M3;
        printf("==================== ");
        printf("Question 2 ");
        printf("====================\n");
        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);
        if(M1>50)
        {
           if(M2>50)
           {
            if(M3>50)
            printf("Resutl: Pass");
            else
            printf("Result: Compartment");
           }
           else
           {
            if(M3>50)
            printf("Result: Compartment");
            else
            printf("Result: Fail");
           }
        }
        else
        {
           if(M2>50)
           {
            if(M3>50)
            printf("Result: Compartment");
            else
            printf("Result: Fail");
           }
           else
           printf("Result: Fail");
        }
        printf("\n\n");
        /* Pass or Fail (Question 2) - End Here */
    }

    else if(strcmp(choice,"3") == 0)
    {
        /* Greatest of 3 using nested if (Question 3) - Start Here */
        int x,y,z;
        printf("==================== ");
        printf("Question 3 ");
        printf("====================\n");
        printf("Write 3 numbers:\n");
        scanf("%d%d%d",&x,&y,&z);
        if(x>y)
        {
            if(x>z)
            printf("Greatest of 3 numbers is %d",x);
            else
            printf("Greatest of 3 numbers is %d",z);
        }
        else
        {
            if(y>z)
            printf("Greatest of 3 numbers is %d",y);
            else
            printf("Greatest of 3 numbers is %d",z);
        }
        printf("\n\n");
        /* Greatest of 3 using nested if (Question 3) - End Here */
    }

    else if(strcmp(choice,"4") == 0)
    {
        /* Greatest of 4 using nested if (Question 4) - Start Here */
        int a,b,c,d;
        printf("==================== ");
        printf("Question 4 ");
        printf("====================\n");
        printf("Write 4 numbers:\n");
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a>b)
        {
            if(a>c)
            {
                if(a>d)
                printf("Greatest of 4 numbers is %d",a);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
            else
            {
                if(c>d)
                printf("Greatest of 4 numbers is %d",c);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
        }
        else
        {
            if(b>c)
            {
                if(b>d)
                printf("Greatest of 4 numbers is %d",b);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
            else
            {
                if(c>d)
                printf("Greatest of 4 numbers is %d",c);
                else
                printf("Greatest of 4 numbers is %d",d);
            }
        }
        printf("\n\n");
        /* Greatest of 4 using nested if (Question 4) - End Here */
    }

    else if(strcmp(choice,"5") == 0)
    {
        /* Pass or Fail using Logical Operator (Question 5) - Start Here */
        printf("==================== ");
        printf("Question 5 ");
        printf("====================\n");

        int M1,M2;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);

        if(M1>50 && M2>50)
        printf("Result: Pass");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Logical Operator (Question 5) - End Here */
    }

    else if(strcmp(choice,"6") == 0)
    {
        /* Pass or Fail using Logical Operator (Question 6) - Start Here */
        printf("==================== ");
        printf("Question 6 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        if(M1<0 || M1>100 || M2<0 || M2>100 || M3<0 || M3>100)
        printf("Error: Invalid Marks! Marks should be between 0 and 100.");
        else if(M1>50 && M2>50 && M3>50)
        printf("Result: Pass");
        else if((M1>50 && M2>50) || (M1>50 && M3>50) || (M2>50 && M3>50))
        printf("Result: Compartment");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Logical Operator (Question 6) - End Here */
    }

    else if(strcmp(choice,"7") == 0)
    {
        /* Pass or Fail using Conditional Operator (Question 7) - Start Here */
        printf("==================== ");
        printf("Question 7 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        if(M1<0 || M1>100 || M2<0 || M2>100 || M3<0 || M3>100)
        printf("Error: Invalid Marks! Marks should be between 0 and 100.");
        else
        (M1>50? (M2>50? (M3>50?printf("Result: Pass"):printf("Result: Compartment")):(M3>50?printf("Result: Compartment"):printf("Result: Fail"))) : (M2>50? (M3>50?printf("Result: Compartment"):printf("Result: Fail")):printf("Result: Fail")));
        printf("\n\n");
        /* Pass or Fail using Conditional Operator (Question 7) - End Here */
    }

    else if(strcmp(choice,"8") == 0)
    {
        /* Pass or Fail using Count Variable (Question 8) - Start Here */
        printf("==================== ");
        printf("Question 8 ");
        printf("====================\n");

        int M1,M2,M3;

        printf("Write Marks in Physics: ");
        scanf("%d", &M1);
        printf("Write Marks in Maths: ");
        scanf("%d", &M2);
        printf("Write Marks in Biology: ");
        scanf("%d", &M3);

        int count = 0;
        if(M1>50)
        count++;
        if(M2>50)
        count++;
        if(M3>50)
        count++;
        if(count == 3)
        printf("Result: Pass");
        else if(count == 2)
        printf("Result: Compartment");
        else
        printf("Result: Fail");
        printf("\n\n");
        /* Pass or Fail using Count Variable (Question 8) - End Here */
    }

    else if(strcmp(choice,"9") == 0)
    {
        /* Grade using else-if (Question 9) - Start Here */
        printf("==================== ");
        printf("Question 9 ");
        printf("====================\n");

        int M;

        printf("Write Marks: ");
        scanf("%d", &M);

        if(M>=90 && M<=99)
        printf("Grade: A");
        else if(M>=80 && M<=89)
        printf("Grade: B");
        else if(M>=70 && M<=79)
        printf("Grade: C");
        else if(M>=60 && M<=69)
        printf("Grade: D");
        else
        printf("Under Grade");
        printf("\n\n");
        /* Grade using else-if (Question 9) - End Here */
    }

    else if(strcmp(choice,"10") == 0)
    {
        /* Print Vowel using Switch-Case (Question 10) - Start Here */
        printf("==================== ");
        printf("Question 10 ");
        printf("====================\n");

        char x;

        printf("Write input: ");
        scanf(" %c",&x);

        switch(tolower(x))
        {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        printf("Vowel");
        break;
        default:
        printf("Not Vowel");
        }
        printf("\n\n");
        /* Print Vowel using Switch-Case (Question 10) - End Here */
    }

    else if(strcmp(choice,"11") == 0)
    {
        /* toupper code (Question 11) - Start Here */
        printf("==================== ");
        printf("Question 11 ");
        printf("====================\n");

        char x,y;

        printf("Write your input in lowercase: ");
        scanf(" %c",&x);

        y = x - 32;
        if(x>=97 && x<=122)
        printf("Output: %c",y);
        else
        printf("%c",x);
        printf("\n\n");
        /* toupper code (Question 11) - End Here */
    }

    else if(strcmp(choice,"12") == 0)
    {
        /* tolower code (Question 12) - Start Here */
        printf("==================== ");
        printf("Question 12 ");
        printf("====================\n");

        char x,y;

        printf("Write your input in uppercase: ");
        scanf(" %c",&x);

        y = x + 32;
        if(x>=65 && x<=90)
        printf("Output: %c",y);
        else
        printf("%c",x);
        printf("\n\n");
        /* tolower code (Question 12) - End Here */
    }

    else if(strcmp(choice,"13") == 0)
    {
        /* Grade using switch-case (Question 13) - Start Here */
        printf("==================== ");
        printf("Question 13 ");
        printf("====================\n");

        int x;

        printf("Write Marks: ");
        scanf("%d",&x);

        switch(x/10)
        {
            case 9:
            printf("Grade: A");
            break;
            case 8:
            printf("Grade: B");
            break;
            case 7:
            printf("Grade: C");
            break;
            case 6:
            printf("Grade: D");
            break;
            default:
            printf("Under grade");
        }
        printf("\n\n");
        /* Grade using switch-case (Question 13) - End Here */
    }

    else if(strcmp(choice,"14") == 0)
    {
        /* Grade using switch-case (Question 14) - Start Here */
        printf("==================== ");
        printf("Question 14 ");
        printf("====================\n");

        int x;

        printf("Write Marks: ");
        scanf("%d",&x);

        if(x%10 == 0)
        x--;
        switch(x/10)
        {
            case 9:
            printf("Grade: A");
            break;
            case 8:
            printf("Grade: B");
            break;
            case 7:
            printf("Grade: C");
            break;
            case 6:
            printf("Grade: D");
            break;
            default:
            printf("Under grade");
        }
        printf("\n\n");
        /* Grade using switch-case (Question 14) - End Here */
    }

    else if(strcmp(choice,"15") == 0)
    {
        /* Greatest of 2 using switch-case (Question 15) - Start Here */
        printf("==================== ");
        printf("Question 15 ");
        printf("====================\n");

        int x,y;

        printf("Write 2 numbers:\n");
        scanf("%d%d",&x,&y);

        switch(x>y)
        {
            case 1:
            printf("Greatest number is: %d",x);
            break;
            case 0:
            printf("Greatest number is: %d",y);
        }
        printf("\n\n");
        /* Greatest of 2 using switch-case (Question 15) - End Here */
    }

    else if(strcmp(choice,"16") == 0)
    {
        /* Greatest of 3 using switch-case (Question 16) - Start Here */
        printf("==================== ");
        printf("Question 16 ");
        printf("====================\n");

        int x,y,z;

        printf("Write 3 numbers:\n");
        scanf("%d%d%d",&x,&y,&z);

        switch(x>y)
        {
            case 1:
            switch(x>z)
            {
                case 1:
                printf("Greatest of 3 number is: %d",x);
                break;
                case 0:
                printf("Greatest of 3 number is: %d",z);
            }
            break;
            case 0:
            switch(y>z)
            {
                case 1:
                printf("Greatest of 3 number is: %d",y);
                break;
                case 0:
                printf("Greatest of 3 number is: %d",z);
            }
        }
        printf("\n\n");
        /* Greatest of 3 using switch-case (Question 16) - End Here */
    }

    else if(strcmp(choice,"17") == 0)
    {
        /* Counting using while loop (Question 17) - Start Here */
        printf("==================== Question 17 ====================\n");

        int x=1;

        while(x <= 10)
        {
          printf("%d\n",x);
          x++;
        }
        return 0;
        /* Counting using while loop (Question 17) - End Here */
    }

    else if(strcmp(choice,"18") == 0)
    {
        /* Counting using while loop with different method (Question 18) - Start Here */
        printf("==================== Question 18 ====================\n");

        int x=1;

        while(x++ <= 10)
          printf("%d\n",x);
          printf("%d",x);
        return 0;
        /* Counting using while loop with different method (Question 18) - End Here */
    }

    else if(strcmp(choice,"19") == 0)
    {
        /* Sum of first n natural numbers using while loop (Question 19) - Start Here */
        printf("==================== Question 19 ====================\n");

        long long int n,m,x;

        printf("Write a natural number: ");
        scanf("%lld",&n);

        m=n;
        x=n;
        while(n>1)
        {
            m = m + (n-1);
            n--;
        }
        printf("Sum of first %lld natural number = %lld",x,m);
        return 0;
        /* Sum of first n natural numbers using while loop (Question 19) - End Here */
    }

    else if(strcmp(choice,"20") == 0)
    {
        /* Sum of first n natural numbers without using while loop (Question 20) - Start Here */
        printf("==================== Question 20 ====================\n");

        long long int n,m;

        printf("Write a natural number: ");
        scanf("%lld",&n);

        m = (n*(n+1))/2; // Using Mathematical Formula.

        printf("Sum of first %lld natural number = %lld",n,m);
        return 0;
        /* Sum of first n natural numbers without using while loop (Question 20) - End Here */
    }

    else if(strcmp(choice,"21") == 0)
    {
        /* Sum of first n even natural numbers using while loop (Question 21) - Start Here */
        printf("==================== Question 21 ====================\n");

        long long int n,m,x;

        printf("Write a natural number: ");
        scanf("%lld",&n);

        x=n;
        if(n%2 == 0)
        {
            m=n;
            while(n>1)
            {
                while(n%2 == 0)
                {
                    m = m + (n-2);
                    n--;
                }
                n--;
            }
            printf("Sum of first %lld even natural number = %lld",x,m);
        }
        else
        {
            m=n-1;
            while(n>1)
            {
                while(n%2 == 0)
                {
                    m = m + (n-2);
                    n--;
                }
                n--;
            }
            printf("Sum of first %lld even natural number = %lld",x,m);
        }
        return 0;
        /* Sum of first n even natural numbers using while loop (Question 21) - End Here */
    }

    else if(strcmp(choice,"22") == 0)
    {
        /* Sum of first n even natural numbers using while loop (Question 22) - Start Here */
        printf("==================== Question 22 ====================\n");

        long long int n,m,x,y;

        printf("Write a natural number: ");
        scanf ("%lld",&n);

        m=0;
        x=0;
        y=0;
        while(x != n)
        {
            m = m + (y+2);
            y=y+2;
            x++;
        }
        printf("Sum of first %lld even natural number = %lld",n,m);
        return 0;
        /* Sum of first n even natural numbers using while loop (Question 22) - End Here */
    }

    else if(strcmp(choice,"23") == 0)
    {
        /* Sum of first n even natural numbers without using while loop (Question 23) - Start Here */
        printf("==================== Question 23 ====================\n");

        long long int n,m;

        printf("Write a natural number: ");
        scanf("%lld",&n);

        m = n*(n+1); // Mathematical Formula.

        printf("Sum of first %lld even natural number = %lld",n,m);
        return 0;
        /* Sum of first n even natural numbers without using while loop (Question 23) - End Here */
    }

    else if(strcmp(choice,"24") == 0)
    {
        /* Sum of first n odd natural numbers using while loop (Question 24) - Start Here */
        printf("==================== Question 24 ====================\n");

        long long int n,m,x,y;

        printf("Write a natural number: ");
        scanf ("%lld",&n);

        m=0;
        x=0;
        y=0;
        while(x != n)
        {
            m = m + (y+1);
            y=y+2;
            x++;
        }
        printf("Sum of first %lld odd natural number = %lld",n,m);
        return 0;
        /* Sum of first n odd natural numbers using while loop (Question 24) - End Here */
    }

    else if(strcmp(choice,"25") == 0)
    {
        /* Sum of first n odd natural numbers without using while loop (Question 25) - Start Here */
        printf("==================== Question 25 ====================\n");

        long long int n,m;

        printf("Write a natural number: ");
        scanf("%lld",&n);

        m = n*n; // Mathematical Formula.

        printf("Sum of first %lld odd natural number = %lld",n,m);
        return 0;
        /* Sum of first n odd natural numbers without using while loop (Question 25) - End Here */
    }

    else if(strcmp(choice,"26") == 0)
    {
        /* Times Table using while loop (Question 26) - Start Here */
        printf("==================== Question 26 ====================\n");

        SetConsoleOutputCP(65001);
        long long int n,m;
        int x;

        printf("Write a number: ");
        scanf("%lld",&n);

        x=1;
        while(x <= 10)
        {
            m=n*x;
            printf("%lld × %d = %lld\n",n,x,m);
            x++;
        }
        return 0;
        /* Times Table using while loop (Question 26) - End Here */
    }

    else if(strcmp(choice,"27") == 0)
    {
        /* Factorial using while loop (Question 27) - Start Here */
        printf("==================== Question 27 ====================\n");

        long long int n,m,x;

        printf("Write a number: ");
        scanf("%lld",&n);

        if(n != 0)
        {
        m=n;
        x=n;
        while(n>1)
        {
            m = m*(n-1);
            n--;
        }
        printf("%lld! = %lld",x,m);
        }
        else if(n == 0)
        printf("%lld! = 1",n);
        return 0;
        /* Factorial using while loop (Question 27) - End Here */
    }

    else if(strcmp(choice,"28") == 0)
    {
        /* Print abc using For Loop (Question 28) - Start Here */
        printf("==================== Question 28 ====================\n");

        int x;

        for(x=1; x <= 10; x++)
        printf("abc\n");
        return 0;
        /* Print abc using For Loop (Question 28) - End Here */
    }

    else if(strcmp(choice,"29") == 0)
    {
        /* Counting using For Loop (Question 29) - Start Here */
        printf("==================== Question 29 ====================\n");

        int x;

        for(x=1; x <= 10; x++)
        printf("%d\n",x);
        return 0;
        /* Counting using For Loop (Question 29) - End Here */
    }

    else if(strcmp(choice,"30") == 0)
    {
        /* Times Table using Nested For Loop (Question 30) - Start Here */
        printf("==================== Question 30 ====================\n");

        SetConsoleOutputCP(65001);
        int i,j,m;

        for(i=1; i <= 10; i++)
        {
            for(j=1; j <= 10; j++)
            {
                m = i*j;
                printf("%d × %d = %d\n",i,j,m);
            }
        }
        return 0;
        /* Times Table using Nested For Loop (Question 30) - End Here */
    }

    else if(strcmp(choice,"31") == 0)
    {
        /* Times Table using Nested For Loop (Question 31) - Start Here */
        printf("==================== Question 31 ====================\n");

        SetConsoleOutputCP(65001);
        int i,j,m;

        for(i=1; i <= 10; i++)
        {
            for(j=1; j <= 3; j++)
            {
               m=j*i;
               printf("%d × %d = %d\t",j,i,m);
            }
            printf("\n");
        }
        printf("\n");
        for(i=1; i <= 10; i++)
        {
            for(j=4; j <= 6; j++)
            {
               m=j*i;
               printf("%d × %d = %d\t",j,i,m);
            }
            printf("\n");
        }
        printf("\n");
        for(i=1; i <= 10; i++)
        {
            for(j=7; j <= 10; j++)
            {
               m=j*i;
               printf("%d × %d = %d\t",j,i,m);
            }
            printf("\n");
        }
        return 0;
        /* Times Table using Nested For Loop (Question 31) - End Here */
    }

    else if(strcmp(choice,"32") == 0)
    {
        /* Sum of digits using while loop (Question 32) - Start Here */
        printf("==================== Question 32 ====================\n");

        long long int n,m,x;

        printf("Write an integer: ");
        scanf("%lld",&n);

        x=n;
        m=0;
        if(n/10 == 0)
        printf("Sum of single digit can't be estimated!");
        else
        {
           while(n != 0)
        {
            m = m + (n%10);
            n = n/10;
        }
        printf("Sum of digits of %lld = %lld",x,m);
        }
        return 0;
        /* Sum of digits using while loop (Question 32) - End Here */
    }

    else if(strcmp(choice,"32a") == 0)
    {
        /* Sum of digits using do-while loop (Question 32a) - Start Here */
        printf("==================== Question 32a ====================\n");

        long long int n,m,x;

        printf("Write an integer: ");
        scanf("%lld",&n);

        x=n;
        m=0;
        if(n/10 == 0)
        printf("Sum of single digit can't be estimated!");
        else
        {
           do
        {
            m = m + (n%10);
            n = n/10;
        } while(n != 0);
        printf("Sum of digits of %lld = %lld",x,m);
        }
        return 0;
        /* Sum of digits using do-while loop (Question 32a) - End Here */
    }

    else if(strcmp(choice,"32b") == 0)
    {
        /* Sum of digits using for loop (Question 32b) - Start Here */
        printf("==================== Question 32b ====================\n");

        long long int n,m,x;

        printf("Write an integer: ");
        scanf(" %lld",&n);

        if(n/10 == 0)
        printf("Sum of single digit can't be estimated!");
        else
        {
           for(x=n,m=0; n != 0; n=n/10)
           m = m + (n%10);
           printf("Sum of the digits of %lld = %lld",x,m);
        }
        return 0;
        /* Sum of digits using for loop (Question 32b) - End Here */
    }

    else if(strcmp(choice,"33") == 0)
    {
        /* Check Prime Number (Question 33) - Start Here */
        printf("==================== Question 33 ====================\n");

        long long int n,m;

        printf("Write a Number: ");
        scanf("%lld",&n);

        for(m=2; m <= n/2; m++)
        {
            if(n%m == 0)
            break;
        }
        if(m == n/2 + 1)
        printf("%lld is a Prime Number",n);
        else
        printf("%lld is not a Prime Number",n);
        return 0;
        /* Check Prime Number (Question 33) - End Here */
    }

    else if(strcmp(choice,"34") == 0)
    {
        /* Print Prime Numbers (Question 34) - Start Here */
        printf("==================== Question 34 ====================\n");

        int n,m;

        for(n=1; n <= 500; n++)
        {
            for(m=2; m <= n/2; m++)
            {
                if(n%m == 0)
                break;
            }
            if(m == n/2 + 1)
            printf("%d\n",n);
        }
        return 0;
        /* Print Prime Numbers (Question 34) - End Here */
    }

    else if(strcmp(choice,"35") == 0)
    {
        /* Pattern Printing (Question 35) - Start Here */
        printf("==================== Question 35 ====================\n");

        int l,c,x=1;

        for(l=1; l <= 4; l++)
        {
            for(c=1; c <= l; c++)
            {
                printf("%d",x++);
            }
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35) - End Here */
    }

    else if(strcmp(choice,"35a") == 0)
    {
        /* Pattern Printing (Question 35a) - Start Here */
        printf("==================== Question 35a ====================\n");

        int l,c;

        for(l=1; l <= 5; l++)
        {
            for(c=5; c >= l; c--)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35a) - End Here */
    }

    else if(strcmp(choice,"35b") == 0)
    {
        /* Pattern Printing (Question 35b) - Start Here */
        printf("==================== Question 35b ====================\n");

        int l,c;

        for(l=1; l <= 7; l++)
        {
            for(c=1; c <= l && l <= 4; c++)
            printf("1");
            for(c=7; c >= l && l > 4; c--)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35b) - End Here */
    }

    else if(strcmp(choice,"35c") == 0)
    {
        /* Pattern Printing (Question 35c) - Start Here */
        printf("==================== Question 35c ====================\n");

        int l,c;

        for(l=1; l <= 7; l++)
        {
            for(c=4; c >= l && c <= 4; c--)
            printf("1");
            for(c=4; c <= l && l > 4; c++)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35c) - End Here */
    }

    else if(strcmp(choice,"35d") == 0)
    {
        /* Pattern Printing (Question 35d) - Start Here */
        printf("==================== Question 35d ====================\n");

        int l,c,x=5;

        for(l=1; l <= 5; l++)
        {
            for(c=5; c >= l; c--)
            printf("%d",x);
            x--;
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35d) - End Here */
    }

    else if(strcmp(choice,"35e") == 0)
    {
        /* Pattern Printing (Question 35e) - Start Here */
        printf("==================== Question 35e ====================\n");

        int l,c,x;

        for(l=1; l <= 5; l++)
        {
            for(c=5, x=1; c >= l; c--)
            {
                printf("%d",x);
                x++;
            }
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35e) - End Here */
    }

    else if(strcmp(choice,"35f") == 0)
    {
        /* Pattern Printing (Question 35f) - Start Here */
        printf("==================== Question 35f ====================\n");

        int l,s,c;

        for(l=1; l <= 7; l++)
        {
            for(s=2; s <= l && l <= 4; s++)
            printf(" ");
            for(c=4; c >= l && l <= 4; c--)
            printf("1");
            for(s=6; s >= l && l > 4; s--)
            printf(" ");
            for(c=4; c <= l && l > 4; c++)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35f) - End Here */
    }

    else if(strcmp(choice,"35g") == 0)
    {
        /* Pattern Printing (Question 35g) - Start Here */
        printf("==================== Question 35g ====================\n");

        int l,c,s,y=5;

        for(l=1; l <= 4; l++)
        {
            for(c=1; c <= l; c++)
            printf("1");
            for(s=y; s >= l; s--)
            printf(" ");
            y--;
            for(c=1; c <= l && l <= 3; c++)
            printf("1");
            for(c=2; c <= l && l >3; c++)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35g) - End Here */
    }

    else if(strcmp(choice,"35h") == 0)
    {
        /* Pattern Printing (Question 35h) - Start Here */
        printf("==================== Question 35h ====================\n");

        int l,s,c,y=3;

        for(l=1; l <= 4; l++)
        {
            for(c=4; c >= l; c--)
            printf("1");
            for(s=y; s <= l; s++)
            printf(" ");
            y--;
            for(c=3; c >= l && l == 1; c--)
            printf("1");
            for(c=4; c >= l && l > 1; c--)
            printf("1");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35h) - End Here */
    }

    else if(strcmp(choice,"35i") == 0)
    {
        /* Pattern Printing (Question 35i) - Start Here */
        printf("==================== Question 35i ====================\n");

        int l,s,x=103,y=3,z=102;
        char c;

        for(l=1; l <= 7; l++)
        {
            for(c=97; c <= x; c++)
            printf("%c",c);
            x--;
            for(s=y; s <= l; s++)
            printf(" ");
            y--;
            for(c=z; c >= 97; c--)
            printf("%c",c);
            if(l != 1)
            z--;
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35i) - End Here */
    }

    else if(strcmp(choice,"35j") == 0)
    {
        /* Pattern Printing (Question 35j) - Start Here */
        printf("==================== Question 35j ====================\n");

        int l,s;

        for(l=1; l <= 4; l++)
        {
            for(s=3; s >= l; s--)
            printf(" ");
            printf("*");
            if(l != 1)
            printf(" ");
            if(l != 1)
            printf("*");
            if(l > 2)
            printf(" ");
            if(l > 2)
            printf("*");
            if(l > 3)
            printf(" ");
            if(l > 3)
            printf("*");
            for(s=3; s >= l; s--)
            printf(" ");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35j) - End Here */
    }

    else if(strcmp(choice,"35j1") == 0)
    {
        /* Pattern Printing (Question 35j1) - Start Here */
        printf("==================== Question 35j1 ====================\n");

        int l,s,c;

        for(l=1; l <= 4; l++)
        {
            for(s=3; s >= l; s--)
            printf(" ");
            for(c=1; c <= l; c++)
            printf("* ");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35j1) - End Here */
    }

    else if(strcmp(choice,"35j2") == 0)
    {
        /* Pattern Printing (Question 35j2) - Start Here */
        printf("==================== Question 35j2 ====================\n");

        int l,s,c;

        for(l=1; l <= 10; l++)
        {
            for(s=9; s >= l; s--)
            printf(" ");
            for(c=1; c <= l; c++)
            printf("* ");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35j2) - End Here */
    }

    else if(strcmp(choice,"35k") == 0)
    {
        /* Pattern Printing (Question 35k) - Start Here */
        printf("==================== Question 35k ====================\n");

        int l,s,c;

        for(l=1; l <= 4; l++)
        {
            for(s=2; s <= l; s++)
            printf(" ");
            for(c=4; c >= l; c--)
            printf("* ");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35k) - End Here */
    }

    else if(strcmp(choice,"35l") == 0)
    {
        /* Pattern Printing (Question 35l) - Start Here */
        printf("==================== Question 35l ====================\n");

        int l,s,c;

        for(l=1; l <= 7; l++)
        {
            for(s=2; s <= l && l <= 4; s++)
            printf(" ");
            for(c=4; c >= l && l <= 4; c--)
            printf("* ");
            for(s=6; s >= l && l > 4; s--)
            printf(" ");
            for(c=4; c <= l && l > 4; c++)
            printf("* ");
            printf("\n");
        }
        return 0;
        /* Pattern Printing (Question 35l) - End Here */
    }

    else if(strcmp(choice,"36") == 0)
    {
        /* Print Array in Reverse Order (Question 36) - Start Here */
        printf("==================== Question 36 ====================\n");

        int x[10], i;

        printf("Write 10 Integers:\n");
        for(i=0; i <= 9; i++)
        scanf("%d",&x[i]);

        for(i=9; i >= 0; i--)
        printf("%d  ",x[i]);
        return 0;
        /* Print Array in Reverse Order (Question 36) - End Here */
    }

    else if(strcmp(choice,"37") == 0)
    {
        /* Greatest of 10 numbers using Array (Question 37) - Start Here */
        printf("==================== Question 37 ====================\n");

        long long int x[10],i,j;

        printf("Write 10 numbers:\n");
        for(i=0; i <= 9; i++)
        scanf("%lld",&x[i]);

        j = x[0];
        for(i=1; i <= 9; i++)
        if(j < x[i])
        j = x[i];
        printf("\n\nGreatest of 10 Number is: %lld",j);
        return 0;
        /* Greatest of 10 numbers using Array (Question 37) - End Here */
    }

    else if(strcmp(choice,"38") == 0)
    {
        /* Binary Conversion using Array (Question 38) - Start Here */
        printf("==================== Question 38 ====================\n");

        int x,z[5],i; // size ka jhol hai, baad mein clear kr dena.

        printf("Write a positive integer number: ");
        scanf("%d",&x);

        if(x == 0)
        printf("0");
        else if(x > 0)
        {
            for(i=0; x != 0; x = x/2, i++)
            z[i] = x%2;
            for(i = i-1; i >= 0; i--)    // i ka max value tumne apne se nhi likha
            printf("%d",z[i]);
        }
        else
        printf("Number is negative!");
        return 0;
        /* Binary Conversion using Array (Question 38) - End Here */
    }

    else if(strcmp(choice,"38a") == 0)
    {
        /* Binary Conversion without using Array (Question 38a) - Start Here */
        printf("==================== Question 38a ====================\n");

        int x,y,z,i;     // Yeh pura ka pura program tumne apne se nhi likha.

        printf("Write a positive integer number: ");
        scanf("%d",&x);

        if(x == 0)
        printf("0");
        else if(x > 0)
        {
            for(i=0,z=0; x != 0; x = x/2, i++)
            {
                y = x%2;
                z = z + pow(10,i)*y;
            }
            printf("%d",z);
        }
        else
        printf("Number is Negative!");
        return 0;
        /* Binary Conversion without using Array (Question 38a) - End Here */
    }

    else if(strcmp(choice,"39") == 0)
    {
        /* Transpose of matrix using Array (Question 39) - Start Here */
        printf("==================== Question 39 ====================\n");

        SetConsoleOutputCP(65001);
        int x[3][4],i,j;

        printf("Put 12 numbers in 3×4 matrix:\n");
        for(i=0; i <= 2; i++)
        for(j=0; j <= 3; j++)
        scanf("%d",&x[i][j]);

        printf("This is your original matrix:\n");
        for(i=0; i <= 2; i++)
        {
            for(j=0; j <= 3; j++)
            printf("%d\t",x[i][j]);
            printf("\n");
        }
        printf("\n\nThis is the Transpose matrix:\n");
        for(j=0; j <= 3; j++)
        {
            for(i=0; i <= 2; i++)
            printf("%d\t",x[i][j]);
            printf("\n");
        }
        return 0;
        /* Transpose of matrix using Array (Question 39) - End Here */
    }

    else if(strcmp(choice,"39a") == 0)
    {
        /* Transpose of matrix using Array (Question 39a) - Start Here */
        printf("==================== Question 39a ====================\n");

        SetConsoleOutputCP(65001);
        int x[10][10],i,j,r,c;

        printf("Define the size of your matrix:\n");
        printf("rows = ");
        scanf("%d",&r);
        printf("columns = ");
        scanf("%d",&c);
        printf("Put %d numbers in %d × %d matrix:\n",(r*c),r,c);
        for(i=0; i <= (r-1); i++)
        for(j=0; j <= (c-1); j++)
        scanf("%d",&x[i][j]);

        printf("This is the original %d × %d matrix:\n",r,c);
        for(i=0; i <= (r-1); i++)
        {
            for(j=0; j <= (c-1); j++)
            printf("%d\t",x[i][j]);
            printf("\n");
        }
        printf("This is the Transpose %d × %d matrix:\n",c,r);
        for(j=0; j <= (c-1); j++)
        {
            for(i=0; i <= (r-1); i++)
            printf("%d\t",x[i][j]);
            printf("\n");
        }
        return 0;

        /* Transpose of matrix using Array (Question 39a) - End Here */
    }

    else if(strcmp(choice,"39b") == 0)
    {
        /* Addition of matrix using Array (Question 39b) - Start Here */
        printf("==================== Question 39b ====================\n");

        SetConsoleOutputCP(65001);
        int m1[10][10],m2[10][10],m3[10][10],i1,j1,r1,c1,i2,j2,r2,c2,i3,j3,r3,c3;

        printf("Define the size of first matrix:\n");
        printf("rows = ");
        scanf("%d",&r1);
        printf("columns = ");
        scanf("%d",&c1);
        printf("Put %d numbers in %d × %d matrix:\n",(r1*c1),r1,c1);
        for(i1=0; i1 <= (r1-1); i1++)
        for(j1=0; j1 <= (c1-1); j1++)
        scanf("%d",&m1[i1][j1]);
        printf("Define the size of second matrix:\n");
        printf("rows = ");
        scanf("%d",&r2);
        printf("columns = ");
        scanf("%d",&c2);
        printf("Put %d numbers in %d × %d matrix:\n",(r2*c2),r2,c2);
        for(i2=0; i2 <= (r2-1); i2++)
        for(j2=0; j2 <= (c2-1); j2++)
        scanf("%d",&m2[i2][j2]);
        printf("\n");

        if(r1 != r2 || c1 != c2)
        printf("This operation is undefined!");
        else
        {
            r3 = r1;
            c3 = c1;
            for(i3=0, i1=0, i2=0; i3 <= (r3-1) && i1 <= (r1-1) && i2 <= (r2-1); i3++, i2++, i1++)
            for(j3=0, j1=0, j2=0; j3 <= (c3-1) && j1 <= (c1-1) && j2 <= (c2-1); j3++, j2++, j1++)
            m3[i3][j3] = m1[i1][j1] + m2[i2][j2];
            for(i1=0; i1 <= (r1-1); i1++)
            {
                for(j1=0; j1 <= (c1-1); j1++)
                printf("%d\t",m1[i1][j1]);
                printf("\n");
            }
            printf("\n      +\n");
            for(i2=0; i2 <= (r2-1); i2++)
            {
                for(j2=0; j2 <= (c2-1); j2++)
                printf("%d\t",m2[i2][j2]);
                printf("\n");
            }
            printf("\n      =\n");
            for(i3=0; i3 <= (r3-1); i3++)
            {
                for(j3=0; j3 <= (c3-1); j3++)
                printf("%d\t",m3[i3][j3]);
                printf("\n");
            }
            return 0;
        }
        /* Addition of matrix using Array (Question 39b) - End Here */
    }

    else if(strcmp(choice,"39c") == 0)
    {
        /* Multiplication of matrix using Array (Question 39c) - Start Here */
        printf("==================== Question 39c ====================\n");

        SetConsoleOutputCP(65001);
        int m1[10][10],m2[10][10],m3[10][10],r1,c1,r2,c2,r3,c3,i1,j1,i2,j2,i3,j3,s;

        printf("Define the size of first matrix:\n");
        printf("rows = ");
        scanf("%d",&r1);
        printf("columns = ");
        scanf("%d",&c1);
        printf("Put %d numbers in %d × %d matrix:\n",(r1*c1),r1,c1);
        for(i1=0; i1 <= (r1-1); i1++)
        for(j1=0; j1 <= (c1-1); j1++)
        scanf("%d",&m1[i1][j1]);
        printf("Define the size of second matrix:\n");
        printf("rows = ");
        scanf("%d",&r2);
        printf("columns = ");
        scanf("%d",&c2);
        printf("Put %d numbers in %d × %d matrix:\n",(r2*c2),r2,c2);
        for(i2=0; i2 <= (r2-1); i2++)
        for(j2=0; j2 <= (c2-1); j2++)
        scanf("%d",&m2[i2][j2]);
        printf("\n");

        if(c1 != r2)
        printf("This operation is undefined!");
        else
        {
            r3 = r1;
            c3 = c2;
            for(i1=0, i3=0; i1 <= (r1-1) && i3 <= (r3-1); i1++, i3++)
            {
                for(j2=0, j3=0; j2 <= (c2-1) && j3 <= (c3-1); j2++, j3++)
                {
                    for(j1=0, i2=0, s=0; j1 <= (c1-1) && i2 <= (r2-1); j1++,i2++)
                    s = s + (m1[i1][j1] * m2[i2][j2]);
                    m3[i3][j3] = s;
                }
            }
            for(i1=0; i1 <= (r1-1); i1++)
            {
                for(j1=0; j1 <= (c1-1); j1++)
                printf("%d\t",m1[i1][j1]);
                printf("\n");
            }
            printf("\n      ×\n");
            for(i2=0; i2 <= (r2-1); i2++)
            {
                for(j2=0; j2 <= (c2-1); j2++)
                printf("%d\t",m2[i2][j2]);
                printf("\n");
            }
            printf("\n      =\n");
            for(i3=0; i3 <= (r3-1); i3++)
            {
                for(j3=0; j3 <= (c3-1); j3++)
                printf("%d\t",m3[i3][j3]);
                printf("\n");
            }
            return 0;
        }
        /* Multiplication of matrix using Array (Question 39c) - End Here */
    }

    else if(strcmp(choice,"40") == 0)
    {
        /* Checking Palindrome String (Question 40) - Start Here */
        printf("==================== Question 40 ====================\n");

        char x[1000],y[1000],z[1000];
        int i,j=0;

        printf("Write Someting: ");
        getchar();
        fgets(x, sizeof(x), stdin);
        x[strcspn(x,"\n")] = '\0';

        strcpy(z,x);
        for(i=0; x[i] != '\0'; i++)
        if(x[i] != ' ')
        {
            x[j] = x[i];
            j++;
        }
        x[j] = '\0';
        strcpy(y,strlwr(x));
        if(strcmp(y,strrev(x)) == 0)
        printf("%s is Palindrome",z);
        else
        printf("%s is not a Palindrome",z);
        return 0;
        /* Checking Palindrome String (Question 40) - End Here */
    }

    else if(strcmp(choice,"41") == 0)
    {
        /* Add 2 number using user-defined function (Question 41) - Start Here */
        printf("==================== Question 41 ====================\n");

        int x,y,z;

        printf("Write two numbers:\n");
        scanf("%d%d",&x,&y);

        z = add(x,y);

        printf("Sum of two numbers = %d",z);
        return 0;
        /* Add 2 number using user-defined function (Question 41) - End Here */
    }

    else if(strcmp(choice,"42") == 0)
    {
        /* Factorial using Recursion (Question 42) - Start Here */
        printf("==================== Question 42 ====================\n");

        int x,z;

        printf("Write a number: ");
        scanf("%d",&x);

        int fact(int y);   // This is prototype
        z = fact(x);

        printf("%d",z);
        return 0;
        /* Factorial using Recursion (Question 42) - End Here */
    }
    else printf("invalid choice");
}
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int fact(int y)
{
    if(y == 0)
    return 1;
    else
    return y*fact(y-1);
}