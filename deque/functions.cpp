#include"functions.h"
int pushBack(int n) {
	if (d.size < N) {
		d.arr[d.back++] = n;
		return OK;
	}
	else {
		cout << "The deque is full";
		return NULL;
	}
}
int pushFront(int n) {
	if (d.size < N) {
		d.arr[d.front--] = n;
		return OK;
	}
	else{
		cout << "The deque is full";
		return NULL;
		}
}
int popBack() {
	int buf = d.arr[d.back--];
	if (buf)
		return buf;
	else
		return NULL;
}
int  popFront() {
	int buf = d.arr[d.front++];
	if (buf)
		return buf;
	else
		return NULL;
}