
 int Solution::isPalindrome(string A) {
   

    string P;
   
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    
    
    for(int i=0;i<A.size();i++)
    {
        if((97<=A[i]&&A[i]<=122)||(65<=A[i]&&A[i]<=90)||(48<=A[i]&&A[i]<=57)) P.push_back(A[i]);
    }
    
    string G;
    G = P;
    reverse(G.begin(),G.end());
    if(G==P) return 1;
    else return 0;
 }
