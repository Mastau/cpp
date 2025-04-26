#pragma once

#include <cstring>

template<typename T> void	iter(T *arr, int len, void(*func)(T &)) {
	for (int i = 0; i< len; i++) {
		func(arr[i]);
	}
}

template<typename T> void	iter(const T *arr, int len, void(*func)(const T &)) {
	for (int i = 0; i< len; i++) {
		func(arr[i]);
	}
}
