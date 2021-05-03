/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agathe <agathe@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 19:52:31 by agathe            #+#    #+#             */
/*   Updated: 2021/04/30 15:04:57 by agathe           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main()
{
	std::cout<< "----- SUBJECT TEST -----" << std::endl;
	mutantstack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout<< "top of the stack:" << std::endl;
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout<< "size of the stack after a pop:" << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	std::cout << mstack.size() << std::endl;
	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout <<"it : " << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout<< "----- STACKY -----" << std::endl;
	mutantstack<int> Stacky;
	Stacky.push(29);
	std::cout<< "Stacky State from bottom to top" << std::endl;
	std::cout << Stacky.top() << std::endl;
	Stacky.push(77);
	std::cout << Stacky.top() << std::endl;
	Stacky.push(50);
	std::cout << Stacky.top() << std::endl;
	Stacky.push(-88);
	std::cout << Stacky.top() << std::endl;
	Stacky.push(45);
	std::cout << Stacky.top() << std::endl;
	Stacky.push(267);
	std::cout << Stacky.top() << std::endl;

	
	mutantstack<int>::const_iterator its = Stacky.begin();
	mutantstack<int>::const_iterator ites = Stacky.end();

	++its;
	while (its + 2 != ites - 1)
	{
		std::cout <<"its : " << *its << std::endl;
		++its;
	}


	std::cout << "----- TEST ASSIGNATION -----" << std::endl;
	mutantstack<int> A;
	A.push(4);
	A.push(5);
	std::cout << "***** A *****" << std::endl;
	mutantstack<int>::iterator ait = A.begin();
	mutantstack<int>::iterator aite = A.end();
	while (ait != aite)
	{
		std::cout <<"ait : " << *ait << std::endl;
		++ait;
	}
	ait = A.begin();
	mutantstack<int> B;
	std::cout << "***** B *****" << std::endl;
	mutantstack<int>::iterator bit = B.begin();
	mutantstack<int>::iterator bite = B.end();
	while (bit != bite)
	{
		std::cout <<"bit : " << *bit << std::endl;
		++bit;
	}
	B = A;
	std::cout << "***** B  after B = A *****" << std::endl;
	bit = B.begin();
	bite = B.end();
	while (bit != bite)
	{
		std::cout <<"bit : " << *bit << std::endl;
		++bit;
	}

    std::cout << "----- TEST COPY -----" << std::endl;
	mutantstack<int> C;
	C.push(4);
	C.push(5);
	std::cout << "***** C *****" << std::endl;
	mutantstack<int>::iterator cit = C.begin();
	mutantstack<int>::iterator cite = C.end();
	while (cit != cite)
	{
		std::cout <<"cit : " << *cit << std::endl;
		++cit;
	}
	mutantstack<int> D(C);
	cit = C.begin();
	cite = C.end();
	std::cout << "***** D *****" << std::endl;
	mutantstack<int>::iterator dit = D.begin();
	mutantstack<int>::iterator dite = D.end();	
	while (dit != dite)
	{
		std::cout <<"dit : " << *dit << std::endl;
		++dit;
	}
	C.push(7);
	std::cout << "***** C after adding 7 *****" << std::endl;
	cit = C.begin();
	cite = C.end();
	while (cit != cite)
	{
		std::cout <<"cit : " << *cit << std::endl;
		++cit;
	}
	std::cout << "***** D *****" << std::endl;
	dit = D.begin();
	dite = D.end();
	while (dit != dite)
	{
		std::cout <<"dit : " << *dit << std::endl;
		++dit;
	}

	return 0;
}
