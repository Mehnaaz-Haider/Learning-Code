#include <stdio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>

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
    else printf("invalid choice");
}