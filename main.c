#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  int len;


  len = _printf("Let's try to printf a simple sentence.\n");
  
  _printf("Length:[%d, %i]\n", len, len);

  _printf("Negative:[%d]\n", -762534);
  _printf("Negative:[%d]\n", -762534);
  printf("Negative:[%d]\n", -762534);
  _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
  _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");
  return (0);
}
