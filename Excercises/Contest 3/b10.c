/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự 
xuất hiện trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.

------Input Format------
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

------Constraints------
1<=N<=1000; 0<=A[i]<=10^6;
 
------Output Format------
In ra nhiều dòng, mỗi dòng gồm giá trị và tần suất viết cách nhau một khoảng trắng

------Sample Input 0------
9
1 6 6 9 0 6 4 9 3 

------Sample Output 0------
1 1
6 3
9 2
0 1
4 1
3 1

*/
#include<stdio.h>
#include<math.h>

int freq[1000001];

int main(){
    int n;
    int a[1000];
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        freq[a[i]]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (freq[a[i]] != 0)
        {
            printf("%d %d\n", a[i], freq[a[i]]);
            freq[a[i]] = 0;
        }
    }
    
    return 0;
}