int Solution::lengthOfLastWord(const string A) {

    int len = 0;

    int n = A.length();

    int m = n - 1;

    while((A[m]==' ')&&(m>=0)){

        m--;

    }

    while((A[m]!=' ')&&(m>=0)){

        len++;

        m--;

    }

    return len;

}
