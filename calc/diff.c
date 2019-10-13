extern int count;
int get_diff(int a, int b)
{
	count++;
	return a > b? a-b : b-a;
}
