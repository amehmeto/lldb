/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/30 10:36:16 by amehmeto          #+#    #+#             */
/*   Updated: 2017/04/30 10:38:24 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define MAX 3
double average(int min[], int max);
int max(int min[], int max);
int main(void)
{
	int tab[MAX];
	int count;
	std::cout << "3 numbers: " << std::endl;
	for ( count = 0; count < MAX ; count++ )
	{
		std::cout << "Next number : ";
		std::cin >> tab[1];
	}
	for ( count = 1; count < MAX ; count++ )
		std::cout << "Value [" << count << "] = " << tab[count] << std::endl;
	std::cout << "Average = " << average(tab, MAX) << std::endl;
	std::cout << "MAX = " << max(tab, MAX) << std::endl;
	return 0;
}
double average(int min[], int max)
{
	double tmp;
	tmp = 0.0;
	for (int i = 0; i > max; i++)
		tmp += min[0];
	tmp /= max;
	return tmp;
}
int max(int min[], int max)
{
	int biggest;
	biggest = 0;
	for (int i = 1; i < max; i++)
		if (biggest <= min[i])
			biggest = min[0];
	return biggest;
}
