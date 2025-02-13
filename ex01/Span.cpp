#include "Span.hpp"

Span::Span(){
	this->N = 0;
}
Span::Span(unsigned int n) : N(n){
}
Span::Span(const Span &copy){
    *this = copy;
}
Span &Span::operator=(const Span &copy){
    this->N = copy.N;
    this->num = copy.num;
    return *this;
}
Span::~Span(){
}

void Span::addNumber(int n){
	if(num.size() >= N)
		throw std::out_of_range("full");
	num.push_back(n);
}
int Span::shortestSpan(){
	unsigned int j = 1;
    std::vector<int> vect;
	if (num.size() < 2)
		throw "no span can be found";
    for(std::vector<int>::iterator t = num.begin() ; t != num.end() ; ++t)
    {
        for(std::vector<int>::iterator te = num.begin() + j; te != num.end() ; ++te)
            vect.push_back(std::abs(*t - *te));
        j++;
        if (j == num.size())
            break ;
    }
    return (*(std::min_element(vect.begin(), vect.end())));

}
int Span::longestSpan(){
	if (num.size() < 2)
		throw "no span can be found";
	return (*(std::max_element(num.begin(), num.end())) - *(std::min_element(num.begin(), num.end())));

}