#include "ft_printf.h"
#define YELLOW  "\x1b[33m"
#define RESET "\x1b[0m"

int main (void)
{
	int i1 = 0;
	int i2 = 0;
	//---------------------------------------------------------
	// Default string check
	printf("\n");
	printf(YELLOW "Default string check\n" RESET);
	printf("\n");

	i1 += ft_printf("Just a string\n");
	i2 +=printf("Just a string\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 +=ft_printf("%%");
	printf("\n");
	i2 += printf("%%");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	i2 += printf(" NULL %s NULL ", NULL);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%.");
	printf("\n");
	i2 += printf("%.");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("");
	printf("\n");
	i2 += printf("");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	// printf("3.");
	// ft_printf(NULL);
	// printf("\n");
	// printf("3.");
	// printf(NULL);
	// printf("\n");
	// printf("\n");

	//---------------------------------------------------------
	// char check
	printf("\n");
	printf(YELLOW "char check\n" RESET);
	printf("\n");

	i1 += ft_printf("%cboba\n", 'a');
	i2 += printf("%cboba\n", 'a');
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%c\n", 'm');
	i2 += printf("%c\n", 'm');
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");


	i1 += ft_printf("%c", 'g');
	printf("\n");
	i2 += printf("%c", 'g');
	printf("\n");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("abab%c", NULL);
	printf("\n");
	i2 += printf("abab%c", NULL);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("abab%c", 79);
	printf("\n");
	i2 += printf("abab%c", 79);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("abab%c", 130);
	printf("\n");
	i2 += printf("abab%c", 130);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// string check
	printf("\n");
	printf(YELLOW "string check\n" RESET);
	printf("\n");

	i1 += ft_printf("%sboba\n", "ABAB");
	i2 += printf("%sboba\n", "ABAB");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("bo%sba\n", "S");
	i2 += printf("bo%sba\n", "S");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%s\n", "AB");
	i2 += printf("%s\n", "AB");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%s", "UM");
	printf("\n");
	i2 += printf("%s", "UM");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("adad%c", NULL);
	printf("\n");
	i2 += printf("adad%c", NULL);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("adad%c", "");
	printf("\n");
	i2 += printf("adad%c", "");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// decimal check
	printf("\n");
	printf(YELLOW "decimal check\n" RESET);
	printf("\n");

	i1 += ft_printf("A:%d\n", 10);
	i2 += printf("A:%d\n", 10);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d:B\n", 20);
	i2 += printf("%d:B\n", 20);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("M:%d:C\n", 60);
	i2 += printf("M:%d:C\n", 60);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", 5);
	printf("\n");
	i2 += printf("%d", 5);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", 0);
	printf("\n");
	i2 += printf("%d", 0);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", 2147483647);
	printf("\n");
	i2 += printf("%d", 2147483647);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", -2147483648);
	printf("\n");
	i2 += printf("%d", -2147483648);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", 2147483648);
	printf("\n");
	i2 += printf("%d", 2147483648);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", -2147483649);
	printf("\n");
	i2 += printf("%d", -2147483649);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", 214748364799999);
	printf("\n");
	i2 += printf("%d", 214748364799999);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%d", -2147483649999);
	printf("\n");
	i2 += printf("%d", -2147483649999);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// unsigned decimal check
	printf("\n");
	printf(YELLOW "unsigned decimal check\n" RESET);
	printf("\n");

	i1 += ft_printf("A:%u\n", 152);
	i2 += printf("A:%u\n", 152);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u:B\n", 890);
	i2 += printf("%u:B\n", 890);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("M:%u:C\n", 1235);
	i2 += printf("M:%u:C\n", 1235);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", 675);
	printf("\n");
	i2 += printf("%u", 675);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", 0);
	printf("\n");
	i2 += printf("%u", 0);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", 4294967295);
	printf("\n");
	i2 += printf("%u", 4294967295);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", -234);
	printf("\n");
	i2 += printf("%u", -234);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", 4294967297);
	printf("\n");
	i2 += printf("%u", 4294967297);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%u", 4294967297777);
	printf("\n");
	i2 += printf("%u", 4294967297777);
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// hexadecimal lowercase check
	printf("\n");
	printf(YELLOW "hexadecimal lowercase check\n" RESET);
	printf("\n");

	i1 += ft_printf("%x\n", 0x7f);
	i2 += printf("%x\n", 0x7f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", -0x7f);
	i2 += printf("%x\n", -0x7f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", 0);
	i2 += printf("%x\n", 0);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", 28);
	i2 += printf("%x\n", 28);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", -28);
	i2 += printf("%x\n", -28);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", 1);
	i2 += printf("%x\n", 1);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", -1);
	i2 += printf("%x\n", -1);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", 1024);
	i2 += printf("%x\n", 1024);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%x\n", 2147483647);
	i2 += printf("%x\n", 2147483647);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 +=ft_printf("%x\n", -2147483648);
	i2 += printf("%x\n", -2147483648);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// hexadecimal uppercase check
	printf("\n");
	printf(YELLOW "hexadecimal uppercase check\n" RESET);
	printf("\n");

	i1 += ft_printf("%X\n", 0x7f);
	i2 += printf("%X\n", 0x7f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", -0x7f);
	i2 += printf("%X\n", -0x7f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", 0);
	i2 += printf("%X\n", 0);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", 28);
	i2 += printf("%X\n", 28);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", -28);
	i2 += printf("%X\n", -28);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", 1);
	i2 += printf("%X\n", 1);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", -1);
	i2 += printf("%X\n", -1);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", 1024);
	i2 += printf("%X\n", 1024);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%X\n", 2147483647);
	i2 += printf("%X\n", 2147483647);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 +=ft_printf("%X\n", -2147483648);
	i2 += printf("%X\n", -2147483648);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	//---------------------------------------------------------
	// void pointer check
	printf("\n");
	printf(YELLOW "void pointer check\n" RESET);
	printf("\n");

	i1 += ft_printf("%p\n", "abdv");
	i2 += printf("%p\n", "abdv");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", 1234);
	i2 += printf("%p\n", 1234);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", 'C');
	i2 += printf("%p\n", 'C');
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", 0x2f);
	i2 += printf("%p\n", 0x2f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", -0x23f);
	i2 += printf("%p\n", -0x23f);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", NULL);
	i2 += printf("%p\n", NULL);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	i1 += ft_printf("%p\n", 0);
	i2 += printf("%p\n", 0);
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");


	//---------------------------------------------------------
	// special check
	printf("\n");
	printf(YELLOW "special check\n" RESET);
	printf("\n");

	i1 += ft_printf("cspdiuxX%");
	printf("\n");
	i2 += printf("cspdiuxX%");
	printf("\n");
	ft_printf("%d\n", i1);
	printf("%d\n", i2);
	i1 = 0;
	i2 = 0;
	printf("\n");

	// i1 += ft_printf("faxs%l");
	// printf("\n");
	// i2 += printf("faxs%l");
	// printf("\n");
	// ft_printf("%d\n", i1);
	// printf("%d\n", i2);
	// i1 = 0;
	// i2 = 0;
	// printf("\n");

	return 0;
}
