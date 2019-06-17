/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lcm.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: jdunnink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 11:31:16 by jdunnink      #+#    #+#                 */
/*   Updated: 2019/04/15 11:59:59 by jdunnink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int f;
	unsigned int ret;

	f = 1;
	while (f <= a / 2 && f <= b / 2)
	{
		if (a % f == 0 && b % f == 0)
			ret = f;
		f++;
	}
	return (ret);
} 		

unsigned	int	lcm(unsigned int a, unsigned int b)
{
	unsigned int ret;

	if (a == 0 || b == 0)
		return (0);
	ret = (a / (gcd(a, b)) * b);
	return (ret);
}
