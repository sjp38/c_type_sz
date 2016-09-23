#include <stdio.h>
#include <stdint.h>

#define pr_type_sz(type)	\
	printf(#type ": %zu bytes\n", sizeof(type));

int main(void)
{
	pr_type_sz(char);
	pr_type_sz(short);
	pr_type_sz(int);
	pr_type_sz(long);
	pr_type_sz(long long);
	pr_type_sz(float);
	pr_type_sz(double);
	pr_type_sz(void *);
	pr_type_sz(uint8_t);
	pr_type_sz(uint16_t);
	pr_type_sz(uint32_t);
	pr_type_sz(uint64_t);

	return 0;
}
