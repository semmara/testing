int inner(char * input) {
	char buf[8];
	strcpy(buf, input);
	return 0;
}

int main(int argc, char ** argv) {
	inner(argv[1]);
	return 0;
}
