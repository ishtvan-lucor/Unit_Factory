/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikoloshy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 16:24:01 by ikoloshy          #+#    #+#             */
/*   Updated: 2018/04/15 17:03:21 by ikoloshy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (!s || !f)
		return ;
	while (s[index] != '\0')
	{
		(*f)(index, &s[index]);
		index++;
	}
}
