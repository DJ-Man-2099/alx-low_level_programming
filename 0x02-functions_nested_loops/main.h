#ifndef MAIN
#define MAIN
#define LIMIT 1000000000000000000
/**
 * struct big_num - to hold larg numbers.
 * @low_half: low half.
 * @high_half: high half.
 */
typedef struct big_num
{
	unsigned long low_half;
	unsigned long high_half;
} big_num;
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
#endif
