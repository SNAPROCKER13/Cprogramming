#include <stdio.h>

int Grade(int score)
{

    if(score <= 49 && score >= 0 )
    {
        printf("Grade : F");
    }
    else if (score >= 50 && score <= 54)
    {
        printf("Grade : D");
    }
    else if (score >= 55 && score <= 59)
    {
        printf("Grade : D+");
    }
    else if (score >= 60 && score <= 64)
    {
        printf("Grade : C");
    }
    else if (score >= 65 && score <= 69)
    {
        printf("Grade : C+");
    }
    else if (score >= 70 && score <= 74)
    {
        printf("Grade : B");
    }
    else if (score >= 75 && score <= 99)
    {
        printf("Grade : B+");
    }
    else if (score >= 80 && score <= 100)
    {
        printf("Grade : A");
    }
    else
    {
        if(score > 100)
        {
            printf("Error : Input more than 100");
        }
        else if(score < 0)
        {
            printf("Error : Input less than 0");
        }
    }
    
}
int main(void)
{
	printf("===Program Grade===\n\n");
	int score;

	printf("Input number for score : ");
    scanf("%d",&score);

    Grade(score);
    return 0;
    
}
