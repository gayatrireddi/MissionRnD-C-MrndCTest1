/*
Q4: Two dates are given in a 8 node single linked list form,where each node
has one digit only, dates 01-31, months 01-12, year 0000-9999.

Find the number of days in between those two dates .[Exclusive]

Ex : Date1:  0->1->0->1->2->0->0->4 .
     Date2 : 0->5->0->1->2->0->0->4 should return 3 .
As there are 3 days between Jan1st 2004 and Jan 5th 2004.

Ex 2 : Date1 : 3->1->1->2->2->0->1->2.
       Date2 : 0->2->0->1->2->0->1->3 should return 1 .
(There is only one day between 31st Dec 2012 and 2nd  Jan 2013 .)

Note : Consecutive Days and Same Days should return 0;
->Return -1 for NULL Inputs .
->Between Days have to be calculated by not including start and end date .
->The SLL will have 8 Nodes in all cases . Month 9 will be represented as 09.

Difficulty : Hard 
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include<string.h>
struct node{
	int data;
	struct node *next;
};



int between_days(struct node *date1head, struct node *date2head){
	if (date1head == NULL || date2head == NULL)
		return -1;
	int d, d1;
	char *str1, *str2;
	while (date1head != NULL)
	{
		*str1 = date1head->data;
		date1head = date1head->next;
	}
	while (date2head != NULL)
	{
		*str2 = date2head->data;
		date2head = date2head->next;
	}
	int c1 = strcmp(str1, str2);
	if (c1 == 0)
	{
		return 0;
	}
	char *str3 = strrev(str1);
	char *str4 = strrev(str2);
	int c2 = strncmp(str3, str4, 4);
	if (c2 == 0)
	{
		int c3 = strncmp(str3, str4, 6);
		if (c3 == 0)
		{
			int i = 0;
			int g = str1[i + 1] - '\0';
			int k = str1[i] - '\0';
			int r = (10 * k) + g;
			int g1 = str2[i + 1] - '\0';
			int k1 = str2[i] - '\0';
			int r1 = (10 * k1) + g1;
			d = abs(r1 - r);
			return d;
		}
		else
		{
			int i = 3;
			int m = str1[i + 1] - '\0';
			int l = str1[i] - '\0';
			int m1 = (10 * l) + m;
			int m2 = str2[i + 1] - '\0';
			int l2 = str2[i] - '\0';
			int m11 = (10 * l2) + m2;
			d1 = abs(m11 - m1);
			int i = 0;
			int g = str1[i + 1] - '\0';
			int k = str1[i] - '\0';
			int r = (10 * k) + g;
			int g1 = str2[i + 1] - '\0';
			int k1 = str2[i] - '\0';
			int r1 = (10 * k1) + g1;
			d = abs(r1 - r);
			return (d1 + d);
		}
	}
	else
	{
		int i = 5;
		int g = str1[i + 3] - '\0';
		int k = str1[i + 2] - '\0';
		int a = str1[i + 1] - '\0';
		int b = str1[i] - '\0';
		int r = (1000 * b) + (100 * a) + (10 * k) + g;
		int g1 = str2[i + 3] - '\0';
		int k1 = str2[i + 2] - '\0';
		int a1 = str2[i + 1] - '\0';
		int b1 = str2[i] - '\0';
		int r1 = (1000 * b1) + (100 * a1) + (10 * k1) + g1;
		d = abs(r1 - r);



	}

	return (d + d1);
}