#include <stdio.h>

using namespace std;


class seminar1
{
public:
	void sem_1_ex_1()
	{
		printf("Please input the 3 numbers you want to get the max of:\n");
		int a, b, c;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);

		printf("The biggest value is: ");

		if (a > b && a > c)
		{
			printf("%d", a);
		}
		else if (b > a && b > c)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", c);
		}

	}

	void sem_1_ex_2()

	{
		printf("Please input the 3 numbers you want to work with:\n");
		int a, b, c, temp;
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		int min = a;
		if (a < b && b < c)
		{
			printf("The numbers are in ascending order");
		}
		else
		{
			printf("The numbers are not in ascending order");
		}
	}
};


class seminar2
{
public:
	void sum_of_digits()
	{
		int n, s = 0;
		scanf_s("%d", &n);
		int cop_n = n;
		while (n != 0)
		{
			s += n % 10;
			n /= 10;
		}

		printf("The sum of the digits of the number %d is %d", cop_n, s);
	}

	void sum_of_even_digits()
	{
		int n, s = 0;
		scanf_s("%d", &n);
		int cop_n = n;
		while (n != 0)
		{
			if (n % 10 % 2 == 0) {
				s += n % 10;
			}
			n /= 10;
		}

		printf("The sum of the even digits of the number %d is %d", cop_n, s);
	}

	void count_even_odd_digits()
	{
		int n, odd = 0, even = 0;
		scanf_s("%d", &n);

		int cop_n = n;

		while (n != 0)
		{
			if (n % 10 % 2 == 0)
			{
				even++;
			} else
			{
				odd++;
			}
			n /= 10;
		}

		printf("The number %d has %d even digits and %d odd digits", cop_n, even, odd);
		// cout << "The number " << cop_n << " has " << even << " even digits and " << odd << " odd digits";

	}

	void equal_odd_even_digits()
	{
		int n, odd = 0, even = 0;
		scanf_s("%d", &n);

		int cop_n = n;

		while (n != 0)
		{
			if (n % 10 % 2 == 0)
			{
				even++;
			}
			else
			{
				odd++;
			}
			n /= 10;
		}


		if (odd == even)
		{
			printf("The number of even and odd digits is the same.");
		} else
		{
			printf("The number of even and odd digits is not the same.");
		}

		printf("The number %d has %d even digits and %d odd digits", cop_n, even, odd);
	}

	void div_by_sum_of_digits()
	{
		int n, s = 0;
		scanf_s("%d", &n);
		int cop_n = n;
		while (n != 0)
		{
			s += n % 10;
			n /= 10;
		}

		printf("The sum of the digits of the number %d is %d", cop_n, s);

		if (n % s == 0)
		{
			printf("The number %d is divisble by the sum of its digits (%d)", cop_n, s);
		}

	}

	void reverse_digits()
	{
		int n, s = 0;
		scanf_s("%d", &n);
		int cop_n = n;
		int new_n = 0;
		
		while (n != 0)
		{
			new_n = new_n * 10 + n % 10;
			n /= 10;
		}

		printf("The palindrome of %d is %d", cop_n, new_n);
	}


	void decimal_to_binary()
	{
		int n, binar = 0;
		scanf_s("%d", &n);
		int mult = 1 ;
		while(n != 0)
		{
			binar += n % 2 * mult;
			mult *= 10;
			n /= 2;
		}

		printf("Binarul is %d", binar);
	}

	void binary_to_decimal()
	{
		int n, binar = 0;
		scanf_s("%d", &n);
		int mult = 1;
		while (n != 0)
		{
			binar += n % 10 * mult;
			mult *= 2;
			n /= 10;
		}

		printf("Decumal is %d", binar);
	}

	void factorial()
	{
		int n;
		scanf_s("%d", &n);
		int fact = 1;
		for (int i = 1; i <= n; i ++)
		{
			fact *= i;
		}

		printf("The factorial of %d is %d", n, fact);
	}


	void sum_of_series()
	{
		int n;
		scanf_s("%d", &n);
		int sum = 1;
		int x = 2;
		int pow_x = 1;
		for (int i = 1; i <= n; i ++)
		{
			pow_x = 1;
			for (int j = 0; j < i; j ++)
			{
				pow_x *= x;
			}
			if (i % 2 == 1)
			{
				sum -= pow_x;
			} else
			{
				sum += pow_x;
			}

		}

		printf("The result of the expression is: %d", sum);


	}
};

/*
  Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, print them and then calculate the
 sum of numbers.

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, print them and then calculate the
 sum of even numbers.

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, print them and then calculate the
 sum of numbers with even index/position

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers and to find the maximum value.

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, to find the maximum value and the
 last position where you find it.

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, to find the maximum value and the
 first position where you find it.

 • Using pseudocode or the corresponding flowchart, write an
 algorithm to read n numbers, to find all positions of the maximum
 value

 • Using pseudocode/flowchart, write an algorithm to read an array
 with n elements and to count the number of occurrences (or
 frequency) of a given value.

 • Using pseudocode/flowchart, write an algorithm to read an array
 with n elements and to find the last occurrence of a given value.

 • Using pseudocode/flowchart, write an algorithm to read an array
 with n elements and to find the first occurrence of a given value.

 • Using pseudocode/flowchart, write an algorithm to read an array
 with n elements and to find the indices of all occurrences of a
 value in an array


 • Using pseudocode/flowchart, write an algorithm to read n natural
 numbers and to calculate the arithmetic mean.


• Using pseudocode/flowchart, write an algorithm to read n natural
 numbers and to calculate the geometric mean

*/


class seminar3456
{
public:
	int binary_search_while() {
		int v[100];
		int number;
		int array_len;
		bool verif = false;
		int pos = 0;
		scanf_s("%d", &array_len);
		int r = array_len - 1;
		for (int i = 0; i < array_len; i++) {
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &number);
		int middle = 0;
		do {
			middle = (pos + r) / 2;

			if (v[middle] == number) {
				verif = true;
			}

			else {
				if (v[middle] < number) {
					pos = middle + 1;
				}
				else {

					r = middle - 1;
				}

			}

		} while (verif == false && pos <= r);

		if (verif == true) {

			printf("%d is part of the array and is found on position %d\n", number, pos);
		}
		else {
			printf("%d is not part of the array\n", number);
		}

		return 0;
	}

	int bin_searc_p() {
		int v[100];
		int number;
		int array_len;
		bool verif = false;
		int pos = 0;
		scanf_s("%d", &array_len);

		for (int i = 0; i < array_len; i++) {
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &number);

		if (number >= v[array_len / 2]) {
			for (int i = array_len / 2 + 1; i < array_len; i++) {
				if (v[i] == number) {
					verif = true;
					pos = i;

				}
			}
		}
		else if (number < v[array_len / 2]) {
			for (int i = array_len / 2; i >= 0; i--) {
				if (v[i] == number) {
					verif = true;
					pos = i;
				}
			}
		}
		if (verif == true) {

			printf("%d is part of the array and is found on position %d\n", number, pos);
		}
		else {
			printf("%d is not part of the array\n", number);
		}
		return 0;
	}

	int verif_exists_in_array() {

		int v[100];
		int number;
		int array_len;
		bool verif = false;
		int pos = 0;
		scanf_s("%d", &array_len);
		for (int i = 0; i < array_len; i++) {
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &number);

		for (int i = 0; i < array_len; i++) {
			if (v[i] == number) {
				verif = true;
				pos = i;

			}
		}

		if (verif == true) {

			printf("%d is part of the array and is found on position %d\n", number, pos);
		}
		else {
			printf("%d is not part of the array\n", number);
		}
		return 0;
	}

	int number_of_pairs() {
		int array_len, given_number, pairs = 0;
		scanf_s("%d", &array_len);
		int v[100];
		for (int i = 0; i < array_len; i++) {
			scanf_s("%d", &v[i]);
		}
		scanf_s("%d", &given_number);
		for (int i = 0; i < array_len; i++) {
			for (int j = i + 1; j < array_len; j++) {
				if (v[i] + v[j] == given_number)
				{
					// cout << "(" << v[i] << ", " << v[j] << ")\n";
					pairs++;
				}
			}
		}

		printf("%d", pairs);

		return 0;
	}

	int print_pairs() {

		int array_len, given_number, pairs = 0;
		scanf_s("%d", &array_len);
		int v[100];
		int v2[100];
		int pair_pos = 0;

		for (int i = 0; i < array_len; i++) {
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &given_number);
		for (int i = 0; i < array_len; i++) {
			for (int j = i + 1; j < array_len; j++) {
				if (v[i] + v[j] == given_number)
				{
					v2[pair_pos] = v[i];
					pair_pos++;

				}
			}
		}

		for (int i = 0; i < pair_pos; i++) {
			printf("%d %d\n", v2[i], given_number - v2[i]);
		}
		return 0;


	}

	void insert_element_in_array_at_pos()
	{
		int length, number, position;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i ++)
		{
			scanf_s("%d", &v[i]);
		}
		printf("Read the number to insert and then the position: \n");
		scanf_s("%d", &number);
		scanf_s("%d", &position);

		printf("This is the old vector: \n");

		printf("This is the new vector: \n");
		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}
		printf("\n");
		for (int i = length; i > position; i --) {
			v[i] = v[i - 1];
		}

		v[position] = number;


		printf("This is the new vector: \n");
		for (int i = 0; i < length + 1; i++)
		{
			printf("%d ", v[i]);
		}

	}

	void insert_zero_before_given_value()
	{
		int length, number, position;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i++)
		{
			scanf_s("%d", &v[i]);
		}
		printf("Read the number after which to insert 0: \n");
		scanf_s("%d", &number);

		position = -1;
		int j = 0;
		while (position == -1 && j < length) {
			if (v[j] == number) {
				position = j;
			}
			j++;
		}

		printf("This is the old vector: \n");

		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}

		printf("This is the new vector: \n");
		
		printf("\n");
		for (int i = length; i > position; i--) {
			v[i] = v[i - 1];
		}

		v[position] = 0;


		printf("\nThis is the new vector: \n");
		for (int i = 0; i < length + 1; i++)
		{
			printf("%d ", v[i]);
		}


	}

	void insert_zero_after_given_value()
	{
		int length, number, position;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i++)
		{
			scanf_s("%d", &v[i]);
		}
		printf("Read the number after which to insert 0: \n");
		scanf_s("%d", &number);

		position = -1;
		int j = 0;
		while (position == -1 && j < length) {
			if (v[j] == number) {
				position = j;
			}
			j++;
		}

		printf("This is the old vector: \n");

		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}

		printf("This is the new vector: \n");

		printf("\n");
		for (int i = length; i > position + 1; i--) {
			v[i] = v[i - 1];
		}

		v[position + 1] = 0;


		printf("\nThis is the new vector: \n");
		for (int i = 0; i < length + 1; i++)
		{
			printf("%d ", v[i]);
		}

	}


	void remove_element_in_array_at_pos()
	{
		int length, position;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i++)
		{
			scanf_s("%d", &v[i]);
		}
		printf("Read the position from which to remove the number: \n");
		scanf_s("%d", &position);

		printf("This is the old vector: \n");

		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}

		
		for (int i = position; i < length; i++) {
			v[i] = v[i + 1];
		}


		v[length - 1] = 0;

		printf("\nThis is the new vector: \n");
		for (int i = 0; i < length - 1; i++)
		{
			printf("%d ", v[i]);
		}



	}

};


int main ()
{
	seminar2 seminar2_obj;
	seminar3456 seminar3456_obj;
	seminar3456_obj.remove_element_in_array_at_pos();

	return 0;
}
