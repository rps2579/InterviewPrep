int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    int res = A[0]^A[1];
    for(int i=1 ; i<A.size() ; ++i)
        res = min(res, A[i]^A[i-1]);
    return res;
}

"""
Problem Description

Given an integer array A of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

Example Input
Input 1:
 A = [0, 2, 5, 7]
Input 2:
 A = [0, 4, 7, 9]

Example Output
Output 1:
 2
Output 2:
 3
"""
