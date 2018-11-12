#include "linkedlist_hamigua.h"

size_t test::linked_list::size() const
{
	return size_;
}

void test::linked_list::add(const double ele)
{
	//This memory is applied from `heap`
	pre_head_->next = new node{pre_head_->next, ele};
	size_++;
}

bool test::linked_list::remove(const double ele)
{
	for (auto n = pre_head_; n->next != nullptr; n = n->next)
	{
		if (n->next->data == ele)
		{
			const auto rem = n->next;
			n->next = n->next->next;
			//before you give up the node, you should relese the memory because you applied that your self.
			delete rem;
			size_--;
			return true;
		}
	}
	return false;
}

void test::linked_list::increase_everyone(const double increase_amount) const
{
	for (auto n = pre_head_->next; n != nullptr; n = n->next)
	{
		n->data += increase_amount;
	}
}

double test::linked_list::get_sum() const
{
	if (size() != 0)
	{
		double sum = 0;
		for (auto n = pre_head_->next; n != nullptr; n = n->next)
		{
			sum += n->data;
		}
		return sum;
	}
	return 0.0;
}

double test::linked_list::get(const size_t index) const
{
	if (index >= size())
	{
		throw std::exception{"index out of bound"};
	}
	auto np = pre_head_->next;
	for (size_t i = 0; i < index; ++i)
	{
		np = np->next;
	}
	return np->data;
}
