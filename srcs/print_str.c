/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mshegow <mshegow@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/06 14:32:58 by mshegow       #+#    #+#                 */
/*   Updated: 2023/11/13 18:17:42 by mshegow       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

/**
* This function prints a string.
* The string to print.
* The lenght of characters of the printed
*								string.
*/

int	print_str(char *str)
{
	int	len;

	len = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[len])
		ft_putchar_fd(str[len++], 1);
	return (len);
}

// int main() {
//     char *str1 = "Hello, World!";
//     char *str2 = NULL;

//     printf("Testing print_str with a non-NULL string:\n");
//     int len1 = print_str(str1);
//     printf("\nLength of string: %d\n\n", len1);

//     printf("Testing print_str with a NULL string:\n");
//     int len2 = print_str(str2);
//     printf("\nLength of string: %d\n", len2);

//     return 0;
// }
