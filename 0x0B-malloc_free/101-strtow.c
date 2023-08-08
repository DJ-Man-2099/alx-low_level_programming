#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "main.h"
/**
 * get_words_count - array function
 * @s1: string to copy
 *
 * gets length of string
 *
 * Return: length of s1
 */
int get_words_count(char *s1)
{
	int l1 = 0;
	char *base = s1;

	if (base != NULL)
	{
		while (*base != '\0')
		{
			if (*base != ' ')
			{
				l1++;
				while (*(base + 1) != ' ')
				{
					base++;
				}
			}
			base++;
		}
	}
	return (l1);
}
/**
 * get_word_length - array function
 * @s1: string to copy
 *
 * gets length of string
 *
 * Return: length of s1
 */
int get_word_length(char *s1)
{
	int l1 = 0;
	char *base = s1;

	if (base != NULL)
	{
		while (*base != ' ')
		{
			l1++;
			base++;
		}
	}
	return (l1);
}
/**
 * copy_word - array function
 * @s2: string to copy
 *
 * gets length of string
 *
 * Return: length of s1
 */
char *copy_word(char **s2)
{
	char *temp, *base_temp;
	int word_length = get_word_length(*s2);

	temp = (char *)malloc((word_length + 1) * sizeof(char));
	base_temp = temp;
	while (**s2 != ' ' && **s2 != '\0')
	{
		*temp = **s2;
		temp++;
		(*s2)++;
	}
	*temp = '\0';
	return (base_temp);
}
/**
 * strtow - array function
 * @str: string to separate
 *
 * splits string into words
 *
 * Return: pointer to words array
 */
char **strtow(char *str)
{
	char **words, **words_base, *word;
	int words_count;

	if (str == NULL)
	{
		return (NULL);
	}
	words_count = get_words_count(str);
	words = (char **)malloc((words_count + 1) * sizeof(char *));
	if (words == NULL || words_count == 0)
	{
		return (NULL);
	}
	words_base = words;
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			word = copy_word(&str);
			if (word == NULL)
			{
				return (NULL);
			}
			*words = word;
			words++;
		}
		else
		{
			str++;
		}
	}
	words = NULL;
	return (words_base);
}
