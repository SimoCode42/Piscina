#include <unistd.h>

char* removespace(char *str)
{
    int count;
    int i;
    
    count = 0;
    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] != ' ')
            str[count++] = str[i];
    i++;
    }
    str[count] = '\0';
    return str;
}

/*int main(int argc, char* argv[])
{
   char* result = removespace(argv[1]);
   int i;
   i = 0;
    while(result[i] != '\0')
    {
        char c = result[i];
        write(1, &c, 1);
        i++;
    }

    return 0;
}*/