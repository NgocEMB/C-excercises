/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, 
nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy số có giá trị nhỏ nhất

------Input Format------
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

------Constraints------
1<=N<=1000; 0<=A[i]<=10^6;
 
------Output Format------
In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

------Sample Input 0------
5
9 4 0 4 5

------Sample Output 0------
4 2

------Sample Input 1------
5
1 3 7 7 5 

------Sample Output 1------
7 2

------Sample Input 2------
5
1 2 3 4 5

------Sample Output 2------
1 1

*/
#include <stdio.h>
#include <math.h>

int freq[1000001];

int main() {
    int n;
    int a[1000];
    scanf("%d", &n);

    int max = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[a[i]]++; 
        if(max < a[i])
        {
            max = a[i];
        }
    }
    
    int ts = 0;
    int value = 0;
    for(int i = 0; i <= max; i++) {
        if(freq[i] > ts)
        {
            ts = freq[i];
            value = i;   
        }
    }
    printf("%d %d", value, ts);

    return 0;
}