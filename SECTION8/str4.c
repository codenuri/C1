int main(void)
{
	char s1[] = "hello";
	const char* s1 = "hello";

	s1[0] = 'x'; // ok
	s2[0] = 'x'; // error

	return 0;
}