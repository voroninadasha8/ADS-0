// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }

    if (b) {
        return gcd(b, a % b);
    } else {
        return a;
    }
}
