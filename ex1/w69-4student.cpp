bool isPrimeCrystal(long long n) {
    if (n<=1) {
        return false;
    }
    for (int i=2; i<=n; i++) {
        if (n % i == 0 && i!= n) {
            return false;
        } else if (i == n) {
            return true;
        }
    }
}

int countPrimeCrystals(long long L, long long R) {
    long long count=0;
    for (int i=L; i<=R; i++) {
        if (isPrimeCrystal(i)) count++;
    }
    return count;
}