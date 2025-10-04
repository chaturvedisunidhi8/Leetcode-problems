//  Given an integer n, return the number of prime numbers that are strictly less than n.

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n, true);  
        int count = 0;

        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;

                for (int j = i * 2; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        return count;
    }
};
