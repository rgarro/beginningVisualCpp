
#include "stdafx.h"
#include <iostream>
#include <functional>

//global wrapper for lambda
std::function<long long(long long, long long)> hcf = [&](long long m, long long n) mutable -> long long {
	if (m < n) return hcf(n, m);
	long long remainder{ m%n };
	if (0 == remainder) return n;
	return hcf(n, remainder);
};

int main()
{
	//el auto mercado ensamblo su headers... 
	auto showHCF = [](long long a, long long b) {
		std::cout << "for numbers " << a << "and" << b
			<< "the highest common factor is " << hcf(a, b) << std::endl;
	};
	long long a{ 17719LL }, b{ 19979LL };
	showHCF(a, b);
	showHCF(103LL * 53 * 17 * 97, 3LL * 29 * 103);
	showHCF(53LL * 941 * 557 * 43 * 29 * 229, 83LL * 89 * 941 * 11 * 17 * 863 * 431);

    return 0;
}
