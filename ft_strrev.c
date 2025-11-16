char    *ft_strrev(char *str){
    int i;
    int j;
    char k;
    i = 0;
    j = 0;
    k = 0;
    while(str[i])
       i++; 
    while(i > j)
    {
     k = str[j];
     str[j] = str[i];
     str[i] = k;
     i--;
     j++;
    }
    return(str);
}