#pragma once

namespace test
{ 

	/**
	 * \brief a simple linked list.
	 * You can add member or more useful method into it,but method below must be completed.
	 */
	class linked_list
	{
	public:


		/**
		 * \brief construct an empty list, you may need change it if you add members
		 */
		linked_list() = default;

		/**
		 * \brief construct an list from an array
		 * You may call it like 
		 * double a[3] = {0.1,0.0,0.3};
		 * linked_list{a,3};
		 * \param arr the from positon of the array
		 * \param size  the size will be add
		 */
		linked_list(double* arr, const size_t size):linked_list()
		{
			for (auto i = 0; i < size; ++i)
			{
				this->add(*arr);
				arr++;
			}
		}

		/**
		 * \brief count the element
		 * \return the amount of the element in this list
		 */
		size_t size() const;

		/**
		 * \brief add a element to the list
		 * \param ele the element which will be add into this list
		 */
		void add(double ele);

		/**
		 * \brief remove the element if having it
		 * \param ele the vaule of element that should be removed.
		 * \return tru=>removed successful     false=>don't have
		 */
		bool remove(double ele);


		/**
		 * \brief increase all by the number
		 * \param increase_amount (can be negative) every+=it
		 */
		void increase_everyone(double increase_amount);


		/**
		 * \brief get the sum of the list
		 * \return sum, 0 if empty
		 */
		double get_sum() const;

	/**
	 * You may need member like this
	 * private:
		Node before_first;
	 */
	};
}