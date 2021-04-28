#include "pascal.h"
#include <direct.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>

int main() {
	int a;
	
	a = get_int(MIN, MAX);
	
	pascal_triangle(a);
	getch();
}
