#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span{
	private:
		std::vector<int> num;
		unsigned int N;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &copy);
		Span &operator=(const Span &copy);
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		~Span();
};

#endif