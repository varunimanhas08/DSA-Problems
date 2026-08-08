int strStr(char *haystack, char *needle) {
    int i, j;

    for (i = 0; haystack[i]; i++) {
        for (j = 0; needle[j]; j++) {
            if (haystack[i + j] != needle[j])
                break;
        }
        if (!needle[j])
            return i;
    }
    return -1;
}
