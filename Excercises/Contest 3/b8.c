/*
------Problem------
Cho mảng số nguyên A[] có không quá 10000 phần tử. Hãy xác định xem mảng là mảng chẵn hay mảng lẻ, 
mảng chẵn được định nghĩa là mảng mà số lượng số chẵn nhiều hơn số lượng số lẻ, ngược lại. 
Trong trường hợp số lượng số chẵn bằng số lượng số lẻ thì mảng được gọi là mảng chẵn lẻ.

------Input Format------
Gồm nhiều dòng, mỗi dòng có nhiều số là các số trong mảng A[], không biết trước có bao nhiêu số nhưng 
không vượt quá 10000 số.

------Constraints------
1<=A[i]<=1000
 
------Output Format------
In ra CHAN nếu mảng chẵn, LE nếu mảng lẻ, CHANLE nếu mảng chẵn lẻ

------Sample Input 0------
3 
9 7 9 
7 5 5 
3 (EOF = Ctrl + D)

------Sample Output 0------
LE

*/
#include<stdio.h>
#include<math.h>

//scanf: return -1 neu khong phai so

int main(){
    int a[1000];
    int temp;
    int n = 0;
    int chan = 0, le = 0;

    while (scanf("%d", &temp) != -1)
    {
        a[n] = temp;
        n++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0){
            chan++;
        }
        if(a[i] % 2 != 0){
            le++;
        }
    }
    if(chan > le) printf("CHAN");
    else if(chan < le) printf("LE");
    else printf("CHANLE");
    
    return 0;
}