int ft_isalpha(char c) {
    while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return 1; 
    }
    return (0);
}