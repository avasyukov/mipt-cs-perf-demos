void worker1(int n) {
	volatile int i=0;
	while(i++<n * 1000);
}

void worker2(int n) {
	volatile int i=0;
	while(i++<n * 1000);
}

void manager(int n1, int n2) {
	worker1(n1);
	worker2(n2);
}

void project1() {
	manager(1000, 1000000);
}

void project2() {
	manager(1000000, 1000);
}

int main() {
	project1();
	project2();
}
