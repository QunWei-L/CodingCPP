//
// Created by admin on 2017/6/6.
//
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<string.h>
#include<vector>
#include<functional>

using namespace std;

priority_queue<int, vector<int>, greater<int> > pq;
int t;
int n, m, k;
/*
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &n, &m, &k);
        int x;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            pq.push(x);
        }

        while (n>m)
        {
            pq.pop();
            pq.push(pq.top() + k);
            pq.pop();
            n--;
        }

        int num = pq.size();
        while (num > 1)
        {
            pq.pop();
            num--;
        }
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
 */