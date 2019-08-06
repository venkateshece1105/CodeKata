    #include <stdio.h>
    int main()
    {
        char c[20];
        scanf("%c",&c);
        if( (c>='a' && c<='z') || (c>='A' && c<='Z') && c>=1000)
            printf("Yes");
        else
            printf("No");
        return 0;
    }