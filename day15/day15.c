int len(char *s1) {
    int length = 0;
    while (s1[length] != '\0') length++;
    return length;
}
char* addBinary(char s1[], char s2[]) {
    int idx1 = 0, idx2 = 0, carry = 0, r = 0, z1 = 0, z2 = 0;
    char *res = (char*) malloc(1*sizeof(char));
    while (s1[z1] == '0' || s2[z2] == '0') {
        if (s1[z1] == '0') z1++;
        if (s2[z2] == '0') z2++;
    }
    idx1 = len(s1), idx2 = len(s2);
    int loop = idx1 - z1 > idx2 - z2 ? idx1 - z1 : idx2 - z2;
    while (loop) {
        if (idx1)
    }
}