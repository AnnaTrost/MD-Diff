int foo(int a, int b);

int main(void) {
	return foo(5,900);
}

int foo(int a, int b) {
	int c=a;
	for (int i=0;i<3;++i)
		c-=b;
	
	return c;
}
