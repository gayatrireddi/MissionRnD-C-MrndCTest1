/*
Given 4 strings, write a fucntion to get smallest string that consists all four strings.
In Case of Multiple strings with smallest length,
Return the string which occurs alphabetically first .

Ex : (acat, tiger, silica, licaria) O/P: "silicariacatiger"
Ex : (def,abc,ghi,jkl)   O/P : “abcdefghijkl” (Alphabetically first )
Ex : (apple,pp,pineapple,nea) O/P: "pineapple";
Ex : (zzzabc,abcdef,yyyzzz,cabyyy) O/P: "cabyyyzzzabcdef" (Order Swapped )

Note : Each string given as input ,should be in the same format in the output string.
Ie if input string is abcd ,it cannot be modified as bdca in the final string .

The Order of Strings in the Final string ,maynot be in the same order
given in which they are given
Function Signatue : char * smallestword(char *s1,char *s2,char *s3,char *s4);

Note : You can use String.h functions .

Constraints :
Length of each String will be less than 100 .

Difficulty : Hard
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char * concat_4strings(char *s1, char *s2, char *s3, char *s4){
	//Return the new string created.
	if (s1 == NULL&&s2 == NULL&&s3 == NULL&&s4 == NULL)
		return NULL;
	char *str; char  *s11; char *s22; char *s33;char *s44;
	int z = 0, i = 0, j = 0, s = 0, k = 0, l = 0, g = 0, y = 0;
	int m = strlen(s1);
	int n = strlen(s2);
	int o = strlen(s3);
	int p = strlen(s4);
	for (j = 0; j <= n; j++)
	{
		s22[g] = s2[n - 1];
		g++;
		n--;
	}
	for (k = 0; k < o; k++)
	{
		s33[y] = s3[o - 1];
		y++;
		o--;
	}
	while (p != '\0')
	{
		s44[z] = s4[p - 1];
		z++;
		p--;
	}
	while (i != '\0')
	{
		s11[s] = s1[i - 1];
		s++;
		i--;
	}

	while (n != 0)
	{
		int c1 = strncmp(s1, s22, n);
		if (c1 == 0)
		{
			str = strcat(s1, s2);
		}
		n--;
	}
	while (n != 0)
	{
		int c2 = strncmp(s11, s2, n);
		if (c2 == 0)
		{
			str = strcat(s1, s2);
		}
		n--;
	}
	while (o != 0)
	{
		int c1 = strncmp(s1, s33, o);
		if (c1 == 0)
		{
			str = strcat(s3, s1);
		}
		o--;
	}
	while (o != 0)
	{
		int c1 = strncmp(s3, s11, o);
		if (c1 == 0)
		{
			str = strcat(s1, s3);
		}
		o--;
	}
	while (p != 0)
	{
		int c1 = strncmp(s11, s4, p);
		if (c1 == 0)
		{
			str = strcat(s1, s4);
		}
		p--;
	}
	while (p != 0)
	{
		int c1 = strncmp(s1, s44, p);
		if (c1 == 0)
		{
			str = strcat(s4, s1);
		}
		p--;
	}
	while (m != 0)
	{
		int c1 = strncmp(s3, s22, m);
		if (c1 == 0)
		{
			str = strcat(s2, s3);
		}
		m--;
	}
	while (m != 0)
	{
		int c1 = strncmp(s33, s2, m);
		if (c1 == 0)
		{
			str = strcat(s3, s2);
		}
		m--;
	}
	while (p != 0)
	{
		int c1 = strncmp(s2, s44, p);
		if (c1 == 0)
		{
			str = strcat(s4, s2);
		}
		p--;
	}
	while (m != 0)
	{
		int c1 = strncmp(s4, s22, m);
		if (c1 == 0)
		{
			str = strcat(s2, s44);
		}
		m--;
	}

	while (n != 0)
	{
		int c1 = strncmp(s3, s44, n);
		if (c1 == 0)
		{
			str = strcat(s4, s3);
		}
		n--;
	}
	while (p != 0)
	{
		int c1 = strncmp(s33, s4, p);
		if (c1 == 0)
		{
			str = strcat(s3, s4);
		}
		p--;
	}
	return str;
}





		
	