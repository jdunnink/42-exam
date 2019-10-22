/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_bits.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/22 09:42:13 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/10/22 09:57:53 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	unsigned		char_len;

	r = 0;
	char_len = 0;
	while (char_len > 0)
	{
		char_len--;
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}
