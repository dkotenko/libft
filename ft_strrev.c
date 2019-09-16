/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clala <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:42:06 by clala             #+#    #+#             */
/*   Updated: 2019/09/15 17:42:10 by clala            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_strrev(char *s)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}