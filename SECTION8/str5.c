int main(void)
{
	char s1[] = "hello";
	char* s2 = "hello";
	const char* s3 = "hello";

	s1[0] = 'x'; // ok
	s2[0] = 'x'; // runtime error
	s3[0] = 'x'; // compile time error

	return 0;
}