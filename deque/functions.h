#pragma once
#include<iostream>
using namespace std;
#define N 100
#define OK 1
struct deque {
	int arr[N];
	int front = N / 2 - 1;
	int back = N / 2;
	int size = (back>front)?(back-front):(N-front+back);
}d;

int pushBack(int n);
int pushFront(int n);
int popBack();
int popFront();
