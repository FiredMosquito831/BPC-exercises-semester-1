# All the exercises I solved at The basics of computer programming in the first semester


### They are all sorted like this:

#### classes represent seminars

#### functions/methods represent the exercises by name

#### in the main code the objects are defined for each class and each function callable through the object
```c++


#include <stdio.h>
#include <set>
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


class seminar345
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

	void remove_all_even_elements_from_array()
	{
		int length, position, elements_removed = 0;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i++)
		{
			scanf_s("%d", &v[i]);
		}

		printf("This is the old vector: \n");

		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}


		for (int i = 0; i < length - elements_removed; i++) {
			if (v[i] % 2 == 0) {
				v[i] = v[i + 1];
				for (int j = i + 1; j < length - elements_removed; j++)
				{
					v[j] = v[j + 1];
				}

				elements_removed++;
			}
		}

		printf("\nThis is the new vector: \n");
		for (int i = 0; i < length - elements_removed; i++)
		{
			printf("%d ", v[i]);
		}


	}

	void remove_all_repeating_elements_from_array()
	{
		int length, position, elements_removed = 0;
		printf("Enter the length of the vector: \n");
		scanf_s("%d", &length);

		printf("Read all elements in the vector: \n");
		int v[100];
		for (int i = 0; i < length; i++)
		{
			scanf_s("%d", &v[i]);
		}

		printf("This is the old vector: \n");

		for (int i = 0; i < length; i++)
		{
			printf("%d ", v[i]);
		}


		for (int i = 0; i < length - elements_removed; i++) {
			for (int k = i + 1; k < length - elements_removed; k++) {
				if (v[i] == v[k]) {
					v[k] = v[k + 1];
					for (int j = k + 1; j < length - elements_removed; j++)
					{
						v[j] = v[j + 1];
					}

					elements_removed++;
				}
			}
		}

		printf("\nThis is the new vector: \n");
		for (int i = 0; i < length - elements_removed; i++)
		{
			printf("%d ", v[i]);
		}


	}

	void  union_of_2_sets()
	{
		printf("Input value into the first set, to stop enter 0: \n");
		int val;
		scanf_s("%d", &val);
		set<int> set1 = {};
		set<int> set2 = {};

		while (val != 0)
		{
			set1.insert(val);
			scanf_s("%d", &val);
		}

		printf("\nInput value into the second set, to stop enter 0: \n");
		
		scanf_s("%d", &val);
		
		while (val != 0)
		{
			set2.insert(val);
			scanf_s("%d", &val);

		}

		for (int i : set1)
		{
			set2.insert(i);
		}

		for (int i : set2)
		{
			printf("%d ", i);
		}


		

	}

	void intersection_of_2_sets()
	{
		printf("Input value into the first set, to stop enter 0: \n");
		int val;
		scanf_s("%d", &val);
		set<int> set1 = {};
		set<int> set2 = {};
		set<int> intersected_set = {};

		while (val != 0)
		{
			set1.insert(val);
			scanf_s("%d", &val);
		}

		printf("\nInput value into the second set, to stop enter 0: \n");

		scanf_s("%d", &val);

		while (val != 0)
		{
			set2.insert(val);
			scanf_s("%d", &val);

		}

		for (int i : set1)
		{
			for (int j : set2)
			{
				if (i == j)
				{
					intersected_set.insert(i);
				}

			}

		}

		for (int i : intersected_set)
		{
			printf("%d ", i);
		}
	}

};

class seminar6
{
public:
	void insert_el_at_pos()
	{


		int v[100], n, pos;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i ++)
		{
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &pos);

		for (int i = n - 1; i >= pos; i --)
		{
			v[i + 1] = v[i];
		}

		scanf_s("%d", &v[pos]);

		for (int i = 0; i <= n; i++)
		{
		printf( "%d ", v[i]);
		}
	}


	void insert_val_after_el()
	{
		int v[100], n, element;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &element);

		for (int i = 0;i < n; i ++)
		{
			if (v[i] == element)
			{
				for (int j = n; j > i + 1; j --)
				{

					v[j] = v[j - 1];
				}
				v[i + 1] = 0;
					i = n;
			}
		}

		for (int i = 0; i <= n; i++)
		{
			printf("%d ", v[i]);
		}
	}


	void insert_val_before_elem()
	{
		int v[100], n, element;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &element);

		for (int i = 0; i < n; i ++)
		{
			if (v[i] == element)
			{
				for (int j = n - 1; j >= i; j --)
				{
					v[j + 1] = v[j];
				}
				v[i] = 0;
				i = n;
			}
		}

		for (int i = 0; i <= n; i++)
		{
			printf("%d ", v[i]);
		}
	}

	void remove_element_from_pos ()
	{
		int v[100], n, pos;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &v[i]);
		}

		scanf_s("%d", &pos);

		for (int i = pos; i < n - 1; i ++)
		{
			v[i] = v[i + 1];

		}

		for (int i = 0; i < n - 1; i++)
		{
			printf("%d ", v[i]);
		}
	}

	void remove_even_numbers()
	{
		int v[100], n, numbers_rem = 0;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &v[i]);
		}

		for (int i = 0; i < n - numbers_rem; i ++)
		{
			if (v[i] % 2 == 0)
			{
				for (int j = i; j < n - numbers_rem; j ++)
				{
					v[j] = v[j + 1];
				}
				numbers_rem++;
				i--;
			}
		}

		for (int i = 0; i < n - numbers_rem; i++)
		{
			printf("%d ", v[i]);
		}
	}


	void remove_duplicates()
	{
		int v[100], n, numbers_rem = 0;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%d", &v[i]);
		}

		for (int i = 0; i < n - numbers_rem; i++)
		{
			for (int k = i + 1; k < n - numbers_rem; k++) {
				if (v[i] == v[k])
				{
					for (int j = k; j < n - numbers_rem; j++)
					{
						v[j] = v[j + 1];
					}
					numbers_rem++;
					k--;
				}
			}
		}

		for (int i = 0; i < n - numbers_rem; i++)
		{
			printf("%d ", v[i]);
		}
	}

	void union_of_arrays()
	{
		int len1, v1[100], len2, v2[100];
		scanf_s("%d", &len1);

		for (int i = 0; i < len1; i ++)
		{
			scanf_s("%d", &v1[i]);

		}

		scanf_s("%d", &len2);

		for (int i = 0; i < len2; i++)
		{
			scanf_s("%d", &v2[i]);
		}

		int len3 = len1 + len2, v3[200];

		for (int i = 0; i < len1; i ++) {
			v3[i] = v1[i];
		}

		for (int i = len1; i < len1 + len2; i ++)
		{
			v3[i] = v2[i - len1];
		}

		for (int i = 0; i < len1 + len2; i++)
		{
			printf("%d ", v3[i]);
		}
	}

	void intersection_of_arrays()
	{
		int len1, v1[100], len2, v2[100];
		scanf_s("%d", &len1);

		for (int i = 0; i < len1; i++)
		{
			scanf_s("%d", &v1[i]);

		}

		scanf_s("%d", &len2);

		for (int i = 0; i < len2; i++)
		{
			scanf_s("%d", &v2[i]);
		}

		int len3 = 0;
		int v3[100];

		for (int i = 0; i < len1; i ++)
		{
			for (int j = 0; j < len2; j ++)
			{
				if (v2[j] == v1[i])
				{
					v3[len3] = v1[i];
					len3++;
					j = len2;
				}
			}
		}

		for (int i = 0; i < len3; i ++)
		{
			printf("%d ", v3[i]);
		}
	}
};



class seminar10
{
public:
	void noPointersInterchange(int a, int b)
	{
		int temp = a;
		a = b;
		b = temp;

	}

	void PointerInterchange(int *a, int *b)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}

	


	void readMatrix(int student_grades[10][10], int* rows, int* col)
	{
		scanf_s("%d", &*rows);
		scanf_s("%d", &*col);

		for (int i = 0; i < *rows; i++)
		{
			for (int j = 0; j < *col; j++)
			{
				scanf_s("%d", &student_grades[i][j]);
			}
		}


	}

	void printMatrix(int student_grades[10][10], int rows, int col)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < col; j++)
			{
				printf("%d ", student_grades[i][j]);
			}
			printf("\n");
		}

	}

	void printArray(int array[10], int dim)
	{
		for (int i = 0; i < dim; i++)
		{
			printf("%d ", array[i]);
		}
	}

	void ascending_order_grades(int student_grades[10][10], int rows, int col, int ascending_order_stud[10], int* k)
	{
		*k = 0;
		int ascending = true;
		for (int i = 0; i < rows - 1; i++)
		{
			ascending = true;
			for (int j = 0; j < col - 1 && ascending == true; j++)
			{
				if (student_grades[i][j] > student_grades[i][j + 1])
				{
					ascending = false;
				}
			}

			if (ascending == true)
			{
				//printf("Student number %d has ascending grades\n", i + 1);
				ascending_order_stud[*k] = i + 1; // we do i + 1 to show the line counting from 1 instead of 0
				(*k)++;
			}
		}
	}

	void min_grade_discipline(int student_grades[10][10], int rows, int col, int min_grade[10])
	{

		// int min_grade;
		int j = 0;
		for (int i = 0; i < col; i++)
		{
			j = 0;
			min_grade[i] = student_grades[0][i];

			for (j = 0; j < rows; j++)
			{
				if (student_grades[j][i] < min_grade[i])
				{
					min_grade[i] = student_grades[j][i];
				}

			}

			// printf("The min grade for discipline %d");
		}



	}


	int main()
	{

		int student_grades[10][10];
		int student_ascending_grades[10];
		int temp_array[10];
		int rows = 0, col = 0, dim_asc = 0;;
		readMatrix(student_grades, &rows, &col);
		printf("\n");
		printMatrix(student_grades, rows, col);
		ascending_order_grades(student_grades, rows, col, student_ascending_grades, &dim_asc);
		printf("\n");
		printf("The students with ascending grades are:\n");
		printArray(student_ascending_grades, dim_asc);
		min_grade_discipline(student_grades, rows, col, temp_array);
		printf("\n");
		printf("The minimum grade of each discipline is: \n");
		printArray(temp_array, col);

		return 0;
	}

};

class seminar11 {
public:

	void readMatrix(int matrix[100][100], int *n)
	{
		//scanf_s("%d", &*rows);
		//scanf_s("%d", &*col);
		scanf_s("%d", &*n);
		for (int i = 0; i < *n; i++)
		{
			for (int j = 0; j < *n; j++)
			{
				scanf_s("%d", &matrix[i][j]);
			}
		}


	}

	void readArray(int arrays[100], int dim)
	{
		for (int i = 0; i < dim; i++)
		{
			scanf_s("%d ", &arrays[i]);
		}
	}
	void printMatrix(int student_grades[100][100], int rows, int col)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < col; j++)
			{
				printf("%d ", student_grades[i][j]);
			}
			printf("\n");
		}

	}

	void printArray(int array[10], int dim)
	{
		for (int i = 0; i < dim; i++)
		{
			printf("%d ", array[i]);
		}
	}

	int check_symmetry(int matrix[100][100], int n) {
		
		bool check_sym = true;
		for (int i = 0; i < n && check_sym == true; i++) {
			for (int j = 0; j < n && check_sym == true; j++) {
				if (matrix[i][j] != matrix[j][i]) { // || matrix[i][j] != matrix[i][cols - i - 1]) {
					check_sym = false;
				}
			}
		}
	
		if (check_sym == true) {
			return 1;
		}
		else {
			return 0;
		}
	}

	int scalar_product_diagonals(int matrix[100][100], int n) {
		int product = 0;
		for (int i = 0; i < n; i++) {
				product += matrix[i][i] * matrix[i][n - i - 1];  // || diag 1 -> matrix[i][j]  diag 2 -> matrix[i][cols - i - 1]) {
		}
		return product;
		}

	int vector_product_of_diagonals(int matrix[100][100], int n, int res[100]) {
		//int product = 0;
		//int s_diag1 = 0;
		//int s_diag2 = 0;
		for (int i = 0; i < n; i++) {
			// s_diag1 += matrix[i][i];
			// s_diag2 += matrix[i][n - i - 1];
			res[i] = matrix[i][i] * matrix[i][n - i - 1];
		}
		// product = s_diag1 * s_diag2;
		printf("\nThe resulting matrix of vector product of diagonals is: \n");
		printArray(res, n);
		return 0;
	}

	float calculate_average_of_elements_above_main_diag(int matrix[100][100], int n) {
		int increment = 0;
		int average = 0;
		float average_fl = 0.0f;
		for (int i = 0; i < n - 1; i++) {
			average += matrix[i][i + 1];
			increment++;
		}

		average_fl = (float)average / increment;
		//printf("\n\n\n%d", average);
		return average_fl;
	}


	int maina() {
		int n;
		int matrix[100][100];
		// int rows, cols;
		readMatrix(matrix, &n);
		int results[100];
		
		printf("\nThe matrix is symmetric? %d", check_symmetry(matrix, n));
		printf("\nThe scakar product is: %d", scalar_product_diagonals(matrix, n));
		vector_product_of_diagonals(matrix, n, results);
		printf("\n The average of the elements above the main diag is: %5.2f", calculate_average_of_elements_above_main_diag(matrix, n));

		return 0;
	}
};


int main ()
{
	seminar1 seminar1_obj;
	seminar2 seminar2_obj;
	seminar345 seminar345_obj;
	seminar6 seminar6_obj;
	seminar6_obj.intersection_of_arrays();

	return 0;
}

```


