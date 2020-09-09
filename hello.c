#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //question
    string name = get_string("What is your name?\n");
    
    //answer
    printf("hello, %s\n", name);
}
